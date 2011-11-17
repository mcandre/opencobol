/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DIRECTIVE = 258,
     SOURCE = 259,
     FORMAT = 260,
     IS = 261,
     FIXED = 262,
     FREE = 263,
     COPY = 264,
     REPLACE = 265,
     SUPPRESS = 266,
     PRINTING = 267,
     REPLACING = 268,
     OFF = 269,
     IN = 270,
     OF = 271,
     BY = 272,
     EQEQ = 273,
     TOKEN = 274
   };
#endif
#define DIRECTIVE 258
#define SOURCE 259
#define FORMAT 260
#define IS 261
#define FIXED 262
#define FREE 263
#define COPY 264
#define REPLACE 265
#define SUPPRESS 266
#define PRINTING 267
#define REPLACING 268
#define OFF 269
#define IN 270
#define OF 271
#define BY 272
#define EQEQ 273
#define TOKEN 274




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 43 "ppparse.y"
typedef union YYSTYPE {
	char			*s;
	struct cb_text_list	*l;
	struct cb_replace_list	*r;
} YYSTYPE;
/* Line 1249 of yacc.c.  */
#line 80 "ppparse.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE pplval;



