/*
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

#ifndef CB_COBC_H
#define CB_COBC_H

#include "config.h"

#include <stdio.h>
#include <setjmp.h>

#include "lib/gettext.h"

#define CB_MAX_CNAME		8096
#define	COB_SMALL_BUFF		1024
#define	COB_MEDIUM_BUFF		8192
#define	COB_LARGE_BUFF		16384

#if !defined(__i386__) && !defined(__x86_64__) && !defined(__powerpc__) && !defined(__powerpc64__) && !defined(__ppc__) && !defined(__amd64__)
#define	COB_NON_ALIGNED
/* Some DEC Alphas can only directly load shorts at 4-byte aligned addresses */
#ifdef	__alpha
#define COB_SHORT_BORK
#endif
#endif

#define ABORT()								      \
do {									      \
	fprintf (stderr, "%s:%d: Internal compiler error\n", __FILE__, __LINE__); \
	(void)longjmp (cob_jmpbuf, 1);					\
} while (0)

#define CB_FORMAT_AUTO	0
#define CB_FORMAT_FREE	1
#define CB_FORMAT_FIXED	2
extern int	cb_source_format;

extern int	cb_display_sign;

extern struct cb_exception {
	const int	code;			/* exception code */
	const char	*name;			/* exception name */
	int		enable;			/* if turn on */
} cb_exception_table[];

#define CB_EXCEPTION_CODE(id)	cb_exception_table[id].code
#define CB_EXCEPTION_NAME(id)	cb_exception_table[id].name
#define CB_EXCEPTION_ENABLE(id)	cb_exception_table[id].enable

#undef CB_FLAG
#define CB_FLAG(var,name,doc) extern int var;
#include "flag.def"

#undef CB_WARNDEF
#define CB_WARNDEF(sig,var,name,wall,doc) extern int var;
#include "warning.def"

struct cb_text_list {
	const char		*text;
	struct cb_text_list	*next;
};

struct cb_replace_list {
	struct cb_text_list	*old_text;
	struct cb_text_list	*new_text;
	struct cb_replace_list	*next;
};

struct filename {
	struct filename *next;
	char		*source;			/* foo.cob */
	char		*preprocess;			/* foo.i */
	char		*translate;			/* foo.c */
	char		*trstorage;			/* foo.c.h */
	char		*object;			/* foo.o */
	char		*demangle_source;		/* foo */
	int		need_preprocess;
	int		need_translate;
	int		need_assemble;
};

extern int			cb_id;
extern int			cb_attr_id;
extern int			cb_literal_id;
extern int			cb_field_id;
extern int			cb_storage_id;
extern int			cb_flag_main;

extern int			errorcount;
extern int			warningcount;
extern int			alt_ebcdic;
extern int			optimize_flag;
extern int			entry_number;
extern int			has_external;

extern char			*cb_source_file;
extern int			cb_source_line;

extern char			cob_config_dir[];

extern char			*source_name;
extern char			*demangle_name;
extern FILE			*cb_storage_file;
extern char			*cb_storage_file_name;

extern FILE			*cb_listing_file;
extern FILE			*cb_depend_file;
extern char			*cb_depend_target;
extern struct cb_text_list	*cb_depend_list;
extern struct cb_text_list	*cb_include_list;
extern struct cb_text_list	*cb_extension_list;

extern struct cb_program	*current_program;
extern struct cb_statement	*current_statement;
extern struct cb_label		*current_section, *current_paragraph;

extern jmp_buf			cob_jmpbuf;

extern struct cb_text_list	*cb_text_list_add (struct cb_text_list *list, const char *name);
extern void			*cobc_malloc (const size_t size);


/* config.c */

struct noreserve {
	struct	noreserve	*next;
	char			*noresword;
};

extern struct noreserve	*norestab;

enum cb_assign_clause {
	CB_ASSIGN_COBOL2002,		/* COBOL 2002 standard */
	CB_ASSIGN_MF,			/* Micro Focus COBOL compatibility */
	CB_ASSIGN_IBM			/* IBM COBOL compatibility */
};

enum cb_binary_byteorder {
	CB_BYTEORDER_NATIVE,
	CB_BYTEORDER_BIG_ENDIAN
};

enum cb_binary_size {
	CB_BINARY_SIZE_2_4_8,		/* 2,4,8 bytes */
	CB_BINARY_SIZE_1_2_4_8,		/* 1,2,4,8 bytes */
	CB_BINARY_SIZE_1__8		/* 1,2,3,4,5,6,7,8 bytes */
};

enum cb_operation_type {
	CB_OPERATION_READ,
	CB_OPERATION_WRITE,
	CB_OPERATION_ASSIGN
};

enum cb_support {
	CB_OK,
	CB_WARNING,
	CB_ARCHAIC,
	CB_OBSOLETE,
	CB_SKIP,
	CB_IGNORE,
	CB_ERROR,
	CB_UNCONFORMABLE
};

#undef CB_CONFIG_ANY
#undef CB_CONFIG_INT
#undef CB_CONFIG_STRING
#undef CB_CONFIG_BOOLEAN
#undef CB_CONFIG_SUPPORT
#define CB_CONFIG_ANY(type,var,name)	extern type var;
#define CB_CONFIG_INT(var,name)		extern int var;
#define CB_CONFIG_STRING(var,name)	extern const char *var;
#define CB_CONFIG_BOOLEAN(var,name)	extern int var;
#define CB_CONFIG_SUPPORT(var,name)	extern enum cb_support var;
#include "config.def"

extern int	cb_load_std (const char *name);
extern int	cb_load_conf (const char *fname, int check_nodef);

/* preprocessor (in pplex.l, ppparse.y) */
extern FILE	*ppin;
extern FILE	*ppout;
extern int	pplex (void);
extern int	ppparse (void);
extern int	ppopen (char *name, struct cb_replace_list *replace_list);
extern int	ppcopy (char *name, const char *lib, struct cb_replace_list *replace_list);
extern void	pp_set_replace_list (struct cb_replace_list *replace_list);

/* parser (in scanner.l, parser.y) */
extern FILE	*yyin;
extern FILE	*yyout;
extern int	yylex (void);
extern int	yyparse (void);

extern int	sending_id;

/* error.c */
#ifdef __GNUC__
extern void	cb_warning (const char *fmt, ...)
     __attribute__ ((__format__ (__printf__, 1, 2)));
extern void	cb_error (const char *fmt, ...)
     __attribute__ ((__format__ (__printf__, 1, 2)));
#else
extern void	cb_warning (const char *fmt, ...);
extern void	cb_error (const char *fmt, ...);
#endif

extern int	cb_verify (enum cb_support tag, const char *feature);

#endif /* CB_COBC_H */
