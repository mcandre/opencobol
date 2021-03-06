/*							-*- c -*-
 * Copyright (C) 2001-2007 Keisuke Nishida
 * Copyright (C) 2007 Roger While
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, 51 Franklin Street, Fifth Floor
 * Boston, MA 02110-1301 USA
 */

%option 8bit
%option caseless
%option noyywrap
%option never-interactive
%option prefix="pp"

%{

#include "config.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef	HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#include "cobc.h"
#include "ppparse.h"

static int within_comment = 0;
static size_t newline_count = 0;
static int inside_bracket = 0;
static int quotation_mark = 0;
static int consecutive_quotation = 0;
static int last_line_1 = -1;
static int last_line_2 = -1;

static struct cb_replace_list *current_replace_list = NULL;

static struct cb_text_list *text_queue = NULL;

static struct copy_info {
	struct copy_info	*next;
	char			*file;
	int			line;
	int			replacing;
	int			quotation_mark;
	YY_BUFFER_STATE		buffer;
} *copy_stack = NULL;

#define YY_INPUT(buf,result,max_size) result = ppinput (buf, max_size);
static int ppinput (char *buf, int max_size);
static void ppecho (const char *text);

static void switch_to_buffer (int lineno, char *filename, YY_BUFFER_STATE buffer);

%}

WORD		[_0-9A-Z-]+
NUMRIC_LITERAL	[+-]?[0-9,.]*[0-9]
ALNUM_LITERAL	\"[^\"\n]*\"|\'[^\'\n]*\'

%x PROCESS_STATE DIRECTIVE_STATE COPY_STATE PSEUDO_STATE

%%

%{
%}

<*>^"*".* |
<*>^"/".* |
<*>"*>".*		{ ppecho (" "); }

"PROCESS"		{ BEGIN PROCESS_STATE; }

<PROCESS_STATE>{
  \n			{ BEGIN INITIAL; unput ('\n'); }
  .*			{ cb_warning (_("PROCESS statement is ignored")); }
}

">>"			{ BEGIN DIRECTIVE_STATE; return DIRECTIVE; }

<DIRECTIVE_STATE>{
  \n			{ BEGIN INITIAL; unput ('\n'); }
  "SOURCE"		{ return SOURCE; }
  "FORMAT"		{ return FORMAT; }
  "IS"			{ return IS; }
  "FIXED"		{ return FIXED; }
  "FREE"		{ return FREE; }
  .			{ }
}

"COPY"			{ BEGIN COPY_STATE; return COPY; }
"INCLUDE"		{ BEGIN COPY_STATE; return COPY; }
"REPLACE"		{ BEGIN COPY_STATE; return REPLACE; }

<COPY_STATE>{
  [,;]?\n		{ ECHO; cb_source_line++; }
  [,;]?[ ]+		{ /* ignore */ }
  "."			{ BEGIN INITIAL; return '.'; }
  "=="			{ BEGIN PSEUDO_STATE; return EQEQ; }
  "("			{ return '('; }
  ")"			{ return ')'; }
  "BY"			{ return BY; }
  "IN"			{ return IN; }
  "OF"			{ return OF; }
  "OFF"			{ return OFF; }
  "SUPPRESS"		{ return SUPPRESS; }
  "PRINTING"		{ return PRINTING; }
  "REPLACING"		{ return REPLACING; }
  {WORD} |
  {NUMRIC_LITERAL} |
  {ALNUM_LITERAL} |
  .			{ pplval.s = strdup (yytext); return TOKEN; }
}

<PSEUDO_STATE>{
  [,;]?\n		{ ECHO; cb_source_line++; }
  [,;]?[ ]+		{ pplval.s = strdup (" "); return TOKEN; }
  "=="			{ BEGIN COPY_STATE; return EQEQ; }
  {WORD} |
  {NUMRIC_LITERAL} |
  {ALNUM_LITERAL} |
  .			{ pplval.s = strdup (yytext); return TOKEN; }
}

"AUTHOR" |
"DATE-WRITTEN" |
"DATE-MODIFIED" |
"DATE-COMPILED" |
"INSTALLATION" |
"SECURITY" {
	/* these words are treated as comments */
	if (cb_verify (cb_author_paragraph, yytext)) {
		/* skip comments until the end of line */
		int c;

		within_comment = 1;
		while ((c = input ()) != EOF) {
			if (c == '\n') {
				break;
			}
		}
		unput (c);
	}
}

"EJECT"\.? |
"SKIP1"\.? |
"SKIP2"\.? |
"SKIP3"\.? {
	/* these words are comments in IBM COBOL */
	if (cb_verify (cb_eject_statement, yytext)) {
		/* do nothing for now */
	} else {
		ECHO;
	}
}

[,;]?\n			{ ppecho ("\n"); cb_source_line++; }
[;]?[ ]+		{ ppecho (" "); }
[,]?[ ]+ {
	if (inside_bracket) {
		ppecho (", ");
	} else {
		ppecho (" ");
	}
}

"("			{ inside_bracket++; ppecho ("("); }
")"			{ inside_bracket--; ppecho (")"); }

{WORD} |
{NUMRIC_LITERAL} |
{ALNUM_LITERAL} |
.			{ ppecho (yytext); }

<<EOF>> {
	struct copy_info *p = copy_stack;

	yy_delete_buffer (YY_CURRENT_BUFFER);

	/* Terminate at the end of all input */
	if (p->next == NULL) {
		within_comment = 0;
		newline_count = 0;
		inside_bracket = 0;
		current_replace_list = NULL;
		text_queue = NULL;
		copy_stack = NULL;
		quotation_mark = 0;
		consecutive_quotation = 0;
		last_line_1 = -1;
		last_line_2 = -1;
		yyterminate ();
	}

	/* Close the current file */
	fclose (ppin);

	/* Switch to the last buffer */
	if (p->replacing) {
		pp_set_replace_list (NULL);
	}
	switch_to_buffer (p->line, p->file, p->buffer);
	quotation_mark = p->quotation_mark;

	copy_stack = p->next;
	free (p);
}

%%

void
pp_set_replace_list (struct cb_replace_list *list)
{
	current_replace_list = list;
}

static void
switch_to_buffer (int line, char *file, YY_BUFFER_STATE buffer)
{
	char	*p;

	cb_source_line = line;
	cb_source_file = strdup (file);
	for (p = cb_source_file; *p; p++) {
		if (*p == '\\') {
			*p = '/';
		}
	}
	yy_switch_to_buffer (buffer);
	fprintf (yyout, "# %d \"%s\"\n", line, cb_source_file);
}

int
ppopen (char *name, struct cb_replace_list *replace_list)
{
	struct copy_info *p;

	for (; newline_count > 0; newline_count--) {
		ungetc ('\n', ppin);
	}

	/* Open the copy file */
	ppin = fopen (name, "rb");
	if (!ppin) {
		if (cb_source_file) {
			cb_error (_("%s: %s"), name, strerror (errno));
		} else {
			perror (name);
		}
		return -1;
	}

	/* Add to dependency list */
	if (cb_depend_file) {
		cb_depend_list = cb_text_list_add (cb_depend_list, name);
	}

	/* Preserve the current buffer */
	p = cobc_malloc (sizeof (struct copy_info));
	p->line = cb_source_line;
	p->file = cb_source_file;
	p->replacing = replace_list ? 1 : 0;
	p->buffer = YY_CURRENT_BUFFER;
	p->quotation_mark = quotation_mark;
	p->next = copy_stack;
	copy_stack = p;

	/* Switch to new buffer */
	if (replace_list) {
		pp_set_replace_list (replace_list);
	}
	switch_to_buffer (1, name, yy_create_buffer (ppin, YY_BUF_SIZE));
	return 0;
}

int
ppcopy (char *name, const char *lib, struct cb_replace_list *replace_list)
{
	struct cb_text_list	*il;
	struct cb_text_list	*el;
	struct stat		st;
	char			buff1[COB_MEDIUM_BUFF];
	char			buff2[COB_MEDIUM_BUFF];

	if (lib) {
		sprintf (buff1, "%s/%s", lib, name);
		name = buff1;
	}

	/* Find the file */
	if (stat (name, &st) == -1) {
		for (el = cb_extension_list; el; el = el->next) {
			sprintf (buff2, "%s%s", name, el->text);
			if (stat (buff2, &st) == 0) {
				name = buff2;
				return ppopen (name, replace_list);
			}
		}
		if (name[0] != '/') {
			for (il = cb_include_list; il; il = il->next) {
				for (el = cb_extension_list; el; el = el->next) {
					sprintf (buff2, "%s/%s%s", il->text, name, el->text);
					if (stat (buff2, &st) == 0) {
						name = buff2;
						return ppopen (name, replace_list);
					}
				}
			}
		}
		cb_error (_("%s: %s"), name, strerror (errno));
		return -1;
	}

	return ppopen (name, replace_list);
}

/*
 * Read line
 */

static int
ppinput (char *buff, int max_size)
{

	int	i, n;
	int	continuation = 0;
	char	*bp;
	char	line[COB_MEDIUM_BUFF];

start:
	/* read a line */
	memset (line, 0, sizeof (line));
	if (fgets (line, COB_MEDIUM_BUFF, ppin) == NULL) {
		if (newline_count == 0) {
			return 0;
		}
		memset (buff, '\n', newline_count);
		buff[newline_count] = 0;
		newline_count = 0;
		return strlen (buff);
	}

	/* normalize and copy the line into the buffer */
	n = 0;
	for (i = 0; line[i]; i++) {
		switch (line[i]) {
		case '\t':
			/* tab expansion */
			buff[n++] = ' ';
			while (n % cb_tab_width != 0) {
				buff[n++] = ' ';
			}
			break;

		case '\r':
			/* end-of-line if followed by new-line */
			if (line[i + 1] == '\n') {
				i++;
			} else {
				break;
			}
			/* fall through */
		case '\n':
			buff[n++] = '\n';
			break;

		default:
			buff[n++] = line[i];
			break;
		}
	}
	if (i < COB_MEDIUM_BUFF - 1 && buff[n - 1] != '\n') {
		cb_warning (_("File not terminated by a newline"));
		buff[n++] = '\n';
	}
	buff[n] = '\0';

	/* nothing to do anymore with free format */
	if (cb_source_format != CB_FORMAT_FIXED) {
		return n;
	}

	/* line too short */
	if (n < 8) {
		newline_count++;
		goto start;
	}

	/* check the indicator (column 7) */
	switch (buff[6]) {
	case ' ':
		bp = buff + 7;
		break;
	case '-':
		continuation = 1;
		bp = buff + 7;
		break;
	case 'd':
	case 'D':
		/* debugging line */
		if (cb_flag_debugging_line) {
			bp = buff + 7;
			break;
		}
		newline_count++;
		goto start;
#if 0
		bp = buff + 3;
		memcpy (bp, ">>D ", 4);
		break;
#endif
	case '*':
	case '/':
		/* comment line */
		newline_count++;
		goto start;
	default:
		/* invalid indicator */
		if (last_line_1 < cb_source_line - 1) {
			cb_warning (_("Invalid indicator '%c' at column 7"), buff[6]);
		}
		last_line_1 = cb_source_line;
		bp = buff + 6;
		break;
	}

	/* skip comments that follow after AUTHORS, etc. */
	if (within_comment) {
		if (buff[7] == ' ') {
			newline_count++;
			goto start;
		}
		within_comment = 0;
	}

	/* check the text that is longer than cb_text_column */
	if (n > cb_text_column + 1) {

		/* show warning if it is not whitespaces */
		if (cb_warn_column_overflow && last_line_2 < cb_source_line - 1) {
			int coln;
			for (coln = cb_text_column; coln < n; coln++) {
				if (buff[coln] != ' ' && buff[coln] != '\n') {
					cb_warning (_("Source text after column %d"),
						    cb_text_column);
					break;
				}
			}
		}

		/* remove it */
		strcpy (buff + cb_text_column, "\n");
		last_line_2 = cb_source_line;
		n = cb_text_column + 1;
	}

	/* skip blank lines */
	for (i = 7; buff[i] == ' '; i++) ;
	if (buff[i] == '\n') {
		newline_count++;
		goto start;
	}

	if (continuation) {
		/* line continuation */
		for (; *bp == ' '; bp++) ;

		/* validate concatenation */
		if (consecutive_quotation) {
			if (bp[0] == quotation_mark && bp[1] == quotation_mark) {
				bp++;
			} else {
				cb_error (_("Invalid line continuation"));
				return YY_NULL;
			}
			quotation_mark = 0;
			consecutive_quotation = 0;
		} else if (quotation_mark) {
			/* literal concatenation */
			if (*bp == quotation_mark) {
				bp++;
			} else {
				cb_error (_("Invalid line continuation"));
				return YY_NULL;
			}
		}
	} else {
		/* normal line */
		quotation_mark = 0;
		consecutive_quotation = 0;
	}

	/* check if string literal is to be continued */
	for (i = bp - buff; buff[i] != '\n'; i++) {
		if (buff[i] == '\'' || buff[i] == '\"') {
			if (quotation_mark == 0) {
				/* literal start */
				quotation_mark = buff[i];
			} else if (quotation_mark == buff[i]) {
				if (i == cb_text_column - 1) {
					/* consecutive quotation */
					consecutive_quotation = 1;
				} else {
					/* literal end */
					quotation_mark = 0;
				}
			}
		}
	}

	/* truncate trailing spaces, including the newline */
	if (quotation_mark) {
		for (; i < 72;) {
			buff[i++] = ' ';
		}
		buff[i] = 0;
	} else {
		for (i--; buff[i] == ' '; i--) ;
		if (buff[i] == '\'' || buff[i] == '\"') {
			buff[++i] = ' ';
		}
		buff[i + 1] = 0;
	}

	if (continuation) {
		strcpy (buff, bp);
		newline_count++;
	} else {
		/* insert newlines at the start of the buffer */
		memmove (buff + newline_count, bp, strlen (bp) + 1);
		memset (buff, '\n', newline_count);
		newline_count = 1;
	}

	return strlen (buff);
}

static void
ppecho (const char *text)
{
	struct cb_replace_list	*r;
	struct cb_text_list	*l;
	struct cb_text_list	*queue;

	if (text_queue == NULL && (text[0] == ' ' || text[0] == '\n')) {
		fputs (text, ppout);
	} else if (!current_replace_list) {
		for (; text_queue; text_queue = text_queue->next) {
			fputs (text_queue->text, ppout);
		}
		fputs (text, ppout);
	} else {
		/* Do replacement */

		text_queue = cb_text_list_add (text_queue, text);

		for (r = current_replace_list; r; r = r->next) {
			queue = text_queue;
			for (l = r->old_text; l; l = l->next) {
				while (l && (l->text[0] == ' ' || l->text[0] == '\n')) {
					l = l->next;
				}
				if (l == NULL) {
					break;
				}
				while (queue && (queue->text[0] == ' ' ||
				       queue->text[0] == '\n')) {
					queue = queue->next;
				}
				if (queue == NULL) {
					return;	/* partial match */
				}
				if (strcasecmp (l->text, queue->text) != 0) {
					break;
				}
				queue = queue->next;
			}
			if (l == NULL) {
				/* match */
				for (l = r->new_text; l; l = l->next) {
					fputs (l->text, ppout);
				}
/*
				text_queue = queue ? queue->next : NULL;
*/
				text_queue = queue;
				continue;
			}
		}

		/* no match */
		for (; text_queue; text_queue = text_queue->next) {
			fputs (text_queue->text, ppout);
		}
	}
}
