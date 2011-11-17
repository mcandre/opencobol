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

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     WORD = 258,
     LITERAL = 259,
     PICTURE = 260,
     MNEMONIC_NAME = 261,
     FUNCTION_NAME = 262,
     TRIM_FUNCTION = 263,
     NUMVALC_FUNC = 264,
     LOCALE_DT_FUNC = 265,
     ACCEPT = 266,
     ADD = 267,
     ADDRESS = 268,
     CALL = 269,
     CANCEL = 270,
     CLOSE = 271,
     COMPUTE = 272,
     DELETE = 273,
     DISPLAY = 274,
     DIVIDE = 275,
     ENTRY = 276,
     EVALUATE = 277,
     IF = 278,
     INITIALIZE = 279,
     INSPECT = 280,
     MERGE = 281,
     MOVE = 282,
     MULTIPLY = 283,
     OPEN = 284,
     PERFORM = 285,
     READ = 286,
     RELEASE = 287,
     RETURN = 288,
     REWRITE = 289,
     SEARCH = 290,
     SET = 291,
     SORT = 292,
     START = 293,
     STRING = 294,
     SUBTRACT = 295,
     UNSTRING = 296,
     WRITE = 297,
     WORKING_STORAGE = 298,
     ZERO = 299,
     PACKED_DECIMAL = 300,
     RECURSIVE = 301,
     LINAGE = 302,
     FOOTING = 303,
     TOP = 304,
     BOTTOM = 305,
     SHARING = 306,
     ONLY = 307,
     RECORDING = 308,
     LOCAL_STORAGE = 309,
     ACCESS = 310,
     ADVANCING = 311,
     AFTER = 312,
     ALL = 313,
     ALPHABET = 314,
     ALPHABETIC = 315,
     ALPHABETIC_LOWER = 316,
     AS = 317,
     ALPHABETIC_UPPER = 318,
     ALPHANUMERIC = 319,
     ALPHANUMERIC_EDITED = 320,
     ALSO = 321,
     ALTER = 322,
     ALTERNATE = 323,
     AND = 324,
     ANY = 325,
     ARE = 326,
     AREA = 327,
     ARGUMENT_NUMBER = 328,
     ARGUMENT_VALUE = 329,
     ASCENDING = 330,
     ASSIGN = 331,
     AT = 332,
     AUTO = 333,
     BACKGROUND_COLOR = 334,
     BEFORE = 335,
     BELL = 336,
     BINARY = 337,
     BLANK = 338,
     BLINK = 339,
     BLOCK = 340,
     BY = 341,
     CHARACTER = 342,
     CHARACTERS = 343,
     CLASS = 344,
     CODE_SET = 345,
     CYCLE = 346,
     COLLATING = 347,
     COLUMN = 348,
     COMMA = 349,
     COMMAND_LINE = 350,
     COMMIT = 351,
     COMMON = 352,
     CONFIGURATION = 353,
     CONTAINS = 354,
     CONTENT = 355,
     CONTINUE = 356,
     CONVERTING = 357,
     CORRESPONDING = 358,
     COUNT = 359,
     CRT = 360,
     CURRENCY = 361,
     CURSOR = 362,
     DATA = 363,
     DATE = 364,
     DAY = 365,
     DAY_OF_WEEK = 366,
     DEBUGGING = 367,
     DECIMAL_POINT = 368,
     DECLARATIVES = 369,
     DEFAULT = 370,
     DELIMITED = 371,
     DELIMITER = 372,
     DEPENDING = 373,
     DESCENDING = 374,
     DIVISION = 375,
     DOWN = 376,
     DUPLICATES = 377,
     DYNAMIC = 378,
     ELSE = 379,
     END = 380,
     END_ACCEPT = 381,
     END_ADD = 382,
     END_CALL = 383,
     END_COMPUTE = 384,
     END_DELETE = 385,
     END_DISPLAY = 386,
     END_DIVIDE = 387,
     END_EVALUATE = 388,
     END_IF = 389,
     END_MULTIPLY = 390,
     END_PERFORM = 391,
     END_READ = 392,
     END_RETURN = 393,
     END_REWRITE = 394,
     END_SEARCH = 395,
     END_START = 396,
     END_STRING = 397,
     END_SUBTRACT = 398,
     END_UNSTRING = 399,
     END_WRITE = 400,
     ENVIRONMENT = 401,
     EBCDIC = 402,
     ENVIRONMENT_NAME = 403,
     ENVIRONMENT_VALUE = 404,
     YYYYMMDD = 405,
     YYYYDDD = 406,
     EOL = 407,
     EOS = 408,
     EOP = 409,
     EQUAL = 410,
     ERASE = 411,
     ERROR = 412,
     EXCEPTION = 413,
     EXIT = 414,
     EXTEND = 415,
     EXTERNAL = 416,
     FD = 417,
     GOBACK = 418,
     FILE_CONTROL = 419,
     FILLER = 420,
     FIRST = 421,
     FOR = 422,
     FOREGROUND_COLOR = 423,
     FROM = 424,
     FULL = 425,
     GE = 426,
     GIVING = 427,
     GLOBAL = 428,
     GO = 429,
     GREATER = 430,
     HIGHLIGHT = 431,
     HIGH_VALUE = 432,
     IDENTIFICATION = 433,
     IN = 434,
     INDEX = 435,
     INDEXED = 436,
     INPUT = 437,
     INPUT_OUTPUT = 438,
     INTO = 439,
     INVALID = 440,
     IS = 441,
     I_O = 442,
     I_O_CONTROL = 443,
     JUSTIFIED = 444,
     KEY = 445,
     LABEL = 446,
     LE = 447,
     LEADING = 448,
     LEFT = 449,
     LENGTH = 450,
     LESS = 451,
     LINE = 452,
     LINES = 453,
     LINKAGE = 454,
     LOCK = 455,
     LOWLIGHT = 456,
     LOW_VALUE = 457,
     MEMORY = 458,
     MINUS = 459,
     MODE = 460,
     MULTIPLE = 461,
     NATIONAL = 462,
     NATIONAL_EDITED = 463,
     NATIVE = 464,
     NE = 465,
     NEGATIVE = 466,
     NEXT = 467,
     NO = 468,
     NOT = 469,
     NUMBER = 470,
     NUMERIC = 471,
     NUMERIC_EDITED = 472,
     OBJECT_COMPUTER = 473,
     OCCURS = 474,
     OF = 475,
     OFF = 476,
     OMITTED = 477,
     ON = 478,
     OPTIONAL = 479,
     OR = 480,
     ORDER = 481,
     ORGANIZATION = 482,
     OTHER = 483,
     OUTPUT = 484,
     OVERFLOW = 485,
     PADDING = 486,
     PAGE = 487,
     PLUS = 488,
     POINTER = 489,
     POSITION = 490,
     POSITIVE = 491,
     PROCEDURE = 492,
     PROCEDURES = 493,
     PROCEED = 494,
     PROGRAM = 495,
     PROGRAM_ID = 496,
     QUOTE = 497,
     RANDOM = 498,
     RECORD = 499,
     RECORDS = 500,
     REDEFINES = 501,
     REEL = 502,
     REFERENCE = 503,
     RELATIVE = 504,
     REMAINDER = 505,
     REMOVAL = 506,
     RENAMES = 507,
     REPLACING = 508,
     REQUIRED = 509,
     RESERVE = 510,
     RETURNING = 511,
     REVERSE_VIDEO = 512,
     REWIND = 513,
     RIGHT = 514,
     ROUNDED = 515,
     RUN = 516,
     SAME = 517,
     SCREEN = 518,
     SD = 519,
     SECTION = 520,
     SECURE = 521,
     SELECT = 522,
     SENTENCE = 523,
     SEPARATE = 524,
     SEQUENCE = 525,
     SEQUENTIAL = 526,
     SIGN = 527,
     SIZE = 528,
     SORT_MERGE = 529,
     SOURCE_COMPUTER = 530,
     SPACE = 531,
     SPECIAL_NAMES = 532,
     STANDARD = 533,
     STANDARD_1 = 534,
     STANDARD_2 = 535,
     STATUS = 536,
     STOP = 537,
     SYMBOLIC = 538,
     SYNCHRONIZED = 539,
     TALLYING = 540,
     TAPE = 541,
     TEST = 542,
     THAN = 543,
     THEN = 544,
     THRU = 545,
     TIME = 546,
     TIMES = 547,
     TO = 548,
     TOK_FILE = 549,
     TOK_INITIAL = 550,
     TOK_TRUE = 551,
     TOK_FALSE = 552,
     TOK_NULL = 553,
     TRAILING = 554,
     UNDERLINE = 555,
     UNIT = 556,
     UNTIL = 557,
     UP = 558,
     UPON = 559,
     USAGE = 560,
     USE = 561,
     USING = 562,
     VALUE = 563,
     VARYING = 564,
     WHEN = 565,
     WITH = 566,
     MANUAL = 567,
     AUTOMATIC = 568,
     EXCLUSIVE = 569,
     ROLLBACK = 570,
     OVERLINE = 571,
     PROMPT = 572,
     UPDATE = 573,
     ESCAPE = 574,
     COMP = 575,
     COMP_1 = 576,
     COMP_2 = 577,
     COMP_3 = 578,
     COMP_4 = 579,
     COMP_5 = 580,
     COMP_X = 581,
     SOURCE = 582,
     SCREEN_CONTROL = 583,
     EVENT_STATUS = 584,
     LOCALE = 585,
     IGNORING = 586,
     SIGNED_SHORT = 587,
     SIGNED_INT = 588,
     SIGNED_LONG = 589,
     UNSIGNED_SHORT = 590,
     UNSIGNED_INT = 591,
     UNSIGNED_LONG = 592,
     BINARY_CHAR = 593,
     BINARY_SHORT = 594,
     BINARY_LONG = 595,
     BINARY_DOUBLE = 596,
     SIGNED = 597,
     UNSIGNED = 598,
     LINAGE_COUNTER = 599,
     PROGRAM_POINTER = 600,
     CHAINING = 601,
     BLANK_SCREEN = 602,
     BLANK_LINE = 603,
     NOT_EXCEPTION = 604,
     SIZE_ERROR = 605,
     NOT_SIZE_ERROR = 606,
     NOT_OVERFLOW = 607,
     NOT_EOP = 608,
     INVALID_KEY = 609,
     NOT_INVALID_KEY = 610,
     COMMA_DELIM = 611,
     DISK = 612,
     NO_ADVANCING = 613,
     PREVIOUS = 614,
     UNLOCK = 615,
     ALLOCATE = 616,
     INITIALIZED = 617,
     FREE = 618,
     BASED = 619,
     PARAGRAPH = 620,
     UNARY_SIGN = 621
   };
#endif
#define WORD 258
#define LITERAL 259
#define PICTURE 260
#define MNEMONIC_NAME 261
#define FUNCTION_NAME 262
#define TRIM_FUNCTION 263
#define NUMVALC_FUNC 264
#define LOCALE_DT_FUNC 265
#define ACCEPT 266
#define ADD 267
#define ADDRESS 268
#define CALL 269
#define CANCEL 270
#define CLOSE 271
#define COMPUTE 272
#define DELETE 273
#define DISPLAY 274
#define DIVIDE 275
#define ENTRY 276
#define EVALUATE 277
#define IF 278
#define INITIALIZE 279
#define INSPECT 280
#define MERGE 281
#define MOVE 282
#define MULTIPLY 283
#define OPEN 284
#define PERFORM 285
#define READ 286
#define RELEASE 287
#define RETURN 288
#define REWRITE 289
#define SEARCH 290
#define SET 291
#define SORT 292
#define START 293
#define STRING 294
#define SUBTRACT 295
#define UNSTRING 296
#define WRITE 297
#define WORKING_STORAGE 298
#define ZERO 299
#define PACKED_DECIMAL 300
#define RECURSIVE 301
#define LINAGE 302
#define FOOTING 303
#define TOP 304
#define BOTTOM 305
#define SHARING 306
#define ONLY 307
#define RECORDING 308
#define LOCAL_STORAGE 309
#define ACCESS 310
#define ADVANCING 311
#define AFTER 312
#define ALL 313
#define ALPHABET 314
#define ALPHABETIC 315
#define ALPHABETIC_LOWER 316
#define AS 317
#define ALPHABETIC_UPPER 318
#define ALPHANUMERIC 319
#define ALPHANUMERIC_EDITED 320
#define ALSO 321
#define ALTER 322
#define ALTERNATE 323
#define AND 324
#define ANY 325
#define ARE 326
#define AREA 327
#define ARGUMENT_NUMBER 328
#define ARGUMENT_VALUE 329
#define ASCENDING 330
#define ASSIGN 331
#define AT 332
#define AUTO 333
#define BACKGROUND_COLOR 334
#define BEFORE 335
#define BELL 336
#define BINARY 337
#define BLANK 338
#define BLINK 339
#define BLOCK 340
#define BY 341
#define CHARACTER 342
#define CHARACTERS 343
#define CLASS 344
#define CODE_SET 345
#define CYCLE 346
#define COLLATING 347
#define COLUMN 348
#define COMMA 349
#define COMMAND_LINE 350
#define COMMIT 351
#define COMMON 352
#define CONFIGURATION 353
#define CONTAINS 354
#define CONTENT 355
#define CONTINUE 356
#define CONVERTING 357
#define CORRESPONDING 358
#define COUNT 359
#define CRT 360
#define CURRENCY 361
#define CURSOR 362
#define DATA 363
#define DATE 364
#define DAY 365
#define DAY_OF_WEEK 366
#define DEBUGGING 367
#define DECIMAL_POINT 368
#define DECLARATIVES 369
#define DEFAULT 370
#define DELIMITED 371
#define DELIMITER 372
#define DEPENDING 373
#define DESCENDING 374
#define DIVISION 375
#define DOWN 376
#define DUPLICATES 377
#define DYNAMIC 378
#define ELSE 379
#define END 380
#define END_ACCEPT 381
#define END_ADD 382
#define END_CALL 383
#define END_COMPUTE 384
#define END_DELETE 385
#define END_DISPLAY 386
#define END_DIVIDE 387
#define END_EVALUATE 388
#define END_IF 389
#define END_MULTIPLY 390
#define END_PERFORM 391
#define END_READ 392
#define END_RETURN 393
#define END_REWRITE 394
#define END_SEARCH 395
#define END_START 396
#define END_STRING 397
#define END_SUBTRACT 398
#define END_UNSTRING 399
#define END_WRITE 400
#define ENVIRONMENT 401
#define EBCDIC 402
#define ENVIRONMENT_NAME 403
#define ENVIRONMENT_VALUE 404
#define YYYYMMDD 405
#define YYYYDDD 406
#define EOL 407
#define EOS 408
#define EOP 409
#define EQUAL 410
#define ERASE 411
#define ERROR 412
#define EXCEPTION 413
#define EXIT 414
#define EXTEND 415
#define EXTERNAL 416
#define FD 417
#define GOBACK 418
#define FILE_CONTROL 419
#define FILLER 420
#define FIRST 421
#define FOR 422
#define FOREGROUND_COLOR 423
#define FROM 424
#define FULL 425
#define GE 426
#define GIVING 427
#define GLOBAL 428
#define GO 429
#define GREATER 430
#define HIGHLIGHT 431
#define HIGH_VALUE 432
#define IDENTIFICATION 433
#define IN 434
#define INDEX 435
#define INDEXED 436
#define INPUT 437
#define INPUT_OUTPUT 438
#define INTO 439
#define INVALID 440
#define IS 441
#define I_O 442
#define I_O_CONTROL 443
#define JUSTIFIED 444
#define KEY 445
#define LABEL 446
#define LE 447
#define LEADING 448
#define LEFT 449
#define LENGTH 450
#define LESS 451
#define LINE 452
#define LINES 453
#define LINKAGE 454
#define LOCK 455
#define LOWLIGHT 456
#define LOW_VALUE 457
#define MEMORY 458
#define MINUS 459
#define MODE 460
#define MULTIPLE 461
#define NATIONAL 462
#define NATIONAL_EDITED 463
#define NATIVE 464
#define NE 465
#define NEGATIVE 466
#define NEXT 467
#define NO 468
#define NOT 469
#define NUMBER 470
#define NUMERIC 471
#define NUMERIC_EDITED 472
#define OBJECT_COMPUTER 473
#define OCCURS 474
#define OF 475
#define OFF 476
#define OMITTED 477
#define ON 478
#define OPTIONAL 479
#define OR 480
#define ORDER 481
#define ORGANIZATION 482
#define OTHER 483
#define OUTPUT 484
#define OVERFLOW 485
#define PADDING 486
#define PAGE 487
#define PLUS 488
#define POINTER 489
#define POSITION 490
#define POSITIVE 491
#define PROCEDURE 492
#define PROCEDURES 493
#define PROCEED 494
#define PROGRAM 495
#define PROGRAM_ID 496
#define QUOTE 497
#define RANDOM 498
#define RECORD 499
#define RECORDS 500
#define REDEFINES 501
#define REEL 502
#define REFERENCE 503
#define RELATIVE 504
#define REMAINDER 505
#define REMOVAL 506
#define RENAMES 507
#define REPLACING 508
#define REQUIRED 509
#define RESERVE 510
#define RETURNING 511
#define REVERSE_VIDEO 512
#define REWIND 513
#define RIGHT 514
#define ROUNDED 515
#define RUN 516
#define SAME 517
#define SCREEN 518
#define SD 519
#define SECTION 520
#define SECURE 521
#define SELECT 522
#define SENTENCE 523
#define SEPARATE 524
#define SEQUENCE 525
#define SEQUENTIAL 526
#define SIGN 527
#define SIZE 528
#define SORT_MERGE 529
#define SOURCE_COMPUTER 530
#define SPACE 531
#define SPECIAL_NAMES 532
#define STANDARD 533
#define STANDARD_1 534
#define STANDARD_2 535
#define STATUS 536
#define STOP 537
#define SYMBOLIC 538
#define SYNCHRONIZED 539
#define TALLYING 540
#define TAPE 541
#define TEST 542
#define THAN 543
#define THEN 544
#define THRU 545
#define TIME 546
#define TIMES 547
#define TO 548
#define TOK_FILE 549
#define TOK_INITIAL 550
#define TOK_TRUE 551
#define TOK_FALSE 552
#define TOK_NULL 553
#define TRAILING 554
#define UNDERLINE 555
#define UNIT 556
#define UNTIL 557
#define UP 558
#define UPON 559
#define USAGE 560
#define USE 561
#define USING 562
#define VALUE 563
#define VARYING 564
#define WHEN 565
#define WITH 566
#define MANUAL 567
#define AUTOMATIC 568
#define EXCLUSIVE 569
#define ROLLBACK 570
#define OVERLINE 571
#define PROMPT 572
#define UPDATE 573
#define ESCAPE 574
#define COMP 575
#define COMP_1 576
#define COMP_2 577
#define COMP_3 578
#define COMP_4 579
#define COMP_5 580
#define COMP_X 581
#define SOURCE 582
#define SCREEN_CONTROL 583
#define EVENT_STATUS 584
#define LOCALE 585
#define IGNORING 586
#define SIGNED_SHORT 587
#define SIGNED_INT 588
#define SIGNED_LONG 589
#define UNSIGNED_SHORT 590
#define UNSIGNED_INT 591
#define UNSIGNED_LONG 592
#define BINARY_CHAR 593
#define BINARY_SHORT 594
#define BINARY_LONG 595
#define BINARY_DOUBLE 596
#define SIGNED 597
#define UNSIGNED 598
#define LINAGE_COUNTER 599
#define PROGRAM_POINTER 600
#define CHAINING 601
#define BLANK_SCREEN 602
#define BLANK_LINE 603
#define NOT_EXCEPTION 604
#define SIZE_ERROR 605
#define NOT_SIZE_ERROR 606
#define NOT_OVERFLOW 607
#define NOT_EOP 608
#define INVALID_KEY 609
#define NOT_INVALID_KEY 610
#define COMMA_DELIM 611
#define DISK 612
#define NO_ADVANCING 613
#define PREVIOUS 614
#define UNLOCK 615
#define ALLOCATE 616
#define INITIALIZED 617
#define FREE 618
#define BASED 619
#define PARAGRAPH 620
#define UNARY_SIGN 621




/* Copy the first part of user declarations.  */
#line 26 "parser.y"

#include "config.h"

#include <stdlib.h>
#include <string.h>
#include <libcob.h>

#include "cobc.h"
#include "tree.h"

#define yyerror			cb_error
#define YYDEBUG			COB_DEBUG
#define YYERROR_VERBOSE		1

#define PENDING(x)		cb_warning (_("'%s' not implemented"), x)

#define emit_statement(x) \
  current_program->exec_list = cb_cons (x, current_program->exec_list)

#define push_expr(type, node) \
  current_expr = cb_build_list (cb_int (type), node, current_expr)

#define BEGIN_STATEMENT(name)					\
  current_statement = cb_build_statement ((char *)name);		\
  CB_TREE (current_statement)->source_file = (unsigned char *)cb_source_file;	\
  CB_TREE (current_statement)->source_line = cb_source_line;	\
  emit_statement (CB_TREE (current_statement));			\
  main_statement = current_statement

#define BEGIN_IMPLICIT_STATEMENT()					\
  current_statement = cb_build_statement (NULL);			\
  main_statement->body = cb_list_add (main_statement->body,		\
				      CB_TREE (current_statement))

static struct cb_statement	*main_statement;

static cb_tree			current_expr;
static struct cb_field		*current_field;
static struct cb_file		*current_file;

enum cb_storage			current_storage;

static cb_tree			call_mode;

static cb_tree			perform_stack = NULL;
static cb_tree			qualifier = NULL;

static int			next_label_id = 0;
static int			current_linage = 0;
static int			eval_level = 0;
static int			eval_inc = 0;
static int			eval_inc2 = 0;
static int			prog_end = 0;
static int			depth = 0;
static int			deplev = 0;
static long			dispattrs = 0;
static int			organized_seen = 0;
static int			inspect_keyword = 0;
static int			samearea = 1;
static int			in_declaratives = 0;
static struct cb_file		*linage_file;
static cb_tree			next_label_list = NULL;
static char			*stack_progid[32];
static int			eval_check[64][64];

static void emit_entry (const char *name, const int encode, cb_tree using_list);
static void terminator_warning (void);
static void terminator_error (void);
static int literal_value (cb_tree x);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 889 "parser.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3788

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  380
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  565
/* YYNRULES -- Number of rules. */
#define YYNRULES  1251
/* YYNRULES -- Number of states. */
#define YYNSTATES  1830

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   621

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   379,     2,
     374,   375,   368,   366,     2,   367,   372,   369,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   378,     2,
     377,   373,   376,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   371,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   370
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    13,    14,    23,
      24,    26,    29,    30,    35,    42,    44,    46,    47,    50,
      51,    55,    59,    63,    64,    66,    67,    73,    74,    79,
      80,    83,    85,    87,    89,    93,    94,    96,    99,   103,
     106,   110,   112,   116,   117,   119,   122,   126,   129,   130,
     133,   139,   145,   149,   150,   153,   155,   158,   160,   162,
     164,   166,   168,   170,   172,   174,   176,   178,   180,   181,
     186,   187,   190,   193,   194,   200,   202,   204,   209,   211,
     213,   215,   217,   219,   221,   224,   226,   230,   231,   236,
     238,   239,   244,   246,   248,   250,   252,   254,   256,   260,
     262,   265,   269,   271,   274,   276,   279,   284,   286,   289,
     291,   295,   300,   305,   309,   313,   318,   322,   326,   327,
     333,   334,   338,   339,   342,   343,   350,   351,   354,   356,
     358,   360,   362,   364,   366,   368,   370,   372,   374,   376,
     378,   380,   386,   387,   389,   391,   393,   395,   397,   402,
     404,   406,   408,   416,   421,   427,   432,   435,   438,   440,
     441,   446,   452,   455,   459,   461,   463,   465,   467,   470,
     475,   480,   486,   487,   490,   494,   499,   503,   507,   510,
     513,   516,   517,   521,   522,   525,   527,   530,   532,   534,
     540,   541,   543,   545,   547,   548,   555,   557,   560,   563,
     564,   567,   568,   577,   578,   579,   585,   586,   590,   591,
     594,   598,   601,   604,   606,   608,   609,   614,   615,   618,
     621,   624,   626,   628,   630,   632,   634,   636,   638,   640,
     646,   647,   649,   651,   656,   663,   673,   674,   678,   679,
     682,   683,   686,   690,   692,   694,   698,   702,   708,   709,
     712,   714,   716,   718,   724,   729,   733,   738,   742,   743,
     744,   750,   751,   753,   754,   757,   760,   764,   767,   768,
     773,   775,   776,   778,   780,   781,   784,   786,   788,   790,
     792,   794,   796,   798,   800,   802,   804,   806,   808,   810,
     813,   817,   818,   821,   824,   826,   828,   832,   834,   836,
     838,   840,   842,   844,   846,   848,   850,   852,   854,   856,
     858,   860,   862,   864,   866,   868,   870,   873,   876,   878,
     881,   884,   886,   889,   892,   894,   897,   900,   902,   906,
     910,   918,   919,   922,   923,   927,   929,   930,   936,   938,
     940,   941,   945,   947,   950,   952,   955,   958,   959,   961,
     963,   967,   969,   970,   979,   981,   984,   986,   990,   991,
     995,   998,  1003,  1004,  1005,  1011,  1012,  1013,  1019,  1020,
    1021,  1022,  1029,  1030,  1032,  1034,  1037,  1038,  1044,  1045,
    1048,  1050,  1052,  1054,  1056,  1059,  1062,  1064,  1066,  1068,
    1070,  1072,  1074,  1076,  1078,  1080,  1085,  1091,  1097,  1101,
    1105,  1107,  1109,  1111,  1113,  1115,  1117,  1120,  1123,  1126,
    1127,  1129,  1131,  1132,  1134,  1136,  1137,  1138,  1139,  1148,
    1149,  1150,  1158,  1159,  1162,  1164,  1166,  1168,  1171,  1174,
    1176,  1181,  1184,  1186,  1188,  1189,  1191,  1192,  1193,  1197,
    1198,  1201,  1204,  1206,  1208,  1210,  1212,  1214,  1216,  1218,
    1220,  1222,  1224,  1226,  1228,  1230,  1232,  1234,  1236,  1238,
    1240,  1242,  1244,  1246,  1248,  1250,  1252,  1254,  1256,  1258,
    1260,  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,
    1280,  1282,  1284,  1286,  1288,  1290,  1293,  1294,  1299,  1303,
    1308,  1312,  1317,  1321,  1326,  1330,  1334,  1338,  1343,  1349,
    1353,  1358,  1362,  1366,  1367,  1371,  1375,  1378,  1381,  1384,
    1388,  1392,  1393,  1396,  1398,  1401,  1403,  1405,  1407,  1409,
    1411,  1413,  1415,  1417,  1419,  1421,  1423,  1427,  1431,  1436,
    1437,  1439,  1440,  1445,  1450,  1456,  1463,  1464,  1467,  1468,
    1470,  1471,  1475,  1481,  1485,  1487,  1489,  1490,  1493,  1496,
    1497,  1503,  1504,  1507,  1508,  1517,  1518,  1519,  1523,  1524,
    1528,  1529,  1530,  1534,  1536,  1539,  1541,  1545,  1547,  1551,
    1553,  1555,  1557,  1558,  1561,  1564,  1565,  1568,  1571,  1572,
    1575,  1576,  1578,  1579,  1583,  1584,  1587,  1588,  1592,  1593,
    1597,  1598,  1600,  1604,  1608,  1611,  1613,  1615,  1616,  1621,
    1626,  1627,  1629,  1631,  1633,  1635,  1637,  1638,  1645,  1646,
    1648,  1649,  1658,  1659,  1662,  1665,  1668,  1671,  1674,  1677,
    1678,  1681,  1684,  1686,  1689,  1691,  1693,  1696,  1699,  1701,
    1703,  1705,  1707,  1709,  1713,  1717,  1719,  1721,  1722,  1724,
    1725,  1730,  1735,  1742,  1749,  1758,  1767,  1768,  1770,  1771,
    1776,  1777,  1783,  1785,  1789,  1791,  1793,  1795,  1796,  1799,
    1802,  1806,  1809,  1813,  1815,  1819,  1822,  1824,  1826,  1828,
    1829,  1832,  1833,  1835,  1836,  1840,  1841,  1843,  1845,  1848,
    1850,  1852,  1853,  1857,  1858,  1864,  1865,  1869,  1870,  1873,
    1874,  1882,  1886,  1887,  1890,  1891,  1893,  1894,  1902,  1903,
    1906,  1907,  1911,  1915,  1916,  1919,  1921,  1924,  1929,  1931,
    1933,  1935,  1937,  1939,  1941,  1943,  1944,  1946,  1947,  1952,
    1954,  1956,  1958,  1959,  1962,  1964,  1966,  1968,  1969,  1973,
    1975,  1978,  1981,  1984,  1986,  1988,  1990,  1993,  1996,  1998,
    2001,  2006,  2009,  2010,  2012,  2014,  2016,  2018,  2023,  2029,
    2030,  2035,  2036,  2038,  2039,  2043,  2044,  2048,  2052,  2057,
    2058,  2063,  2068,  2075,  2076,  2078,  2079,  2083,  2084,  2090,
    2092,  2094,  2096,  2098,  2099,  2103,  2104,  2108,  2111,  2112,
    2116,  2119,  2120,  2125,  2128,  2129,  2131,  2133,  2137,  2138,
    2141,  2145,  2149,  2150,  2154,  2156,  2160,  2168,  2169,  2180,
    2181,  2184,  2185,  2188,  2191,  2195,  2196,  2200,  2201,  2203,
    2205,  2206,  2208,  2209,  2214,  2215,  2223,  2224,  2226,  2227,
    2235,  2236,  2239,  2243,  2244,  2246,  2248,  2249,  2254,  2259,
    2266,  2267,  2270,  2271,  2275,  2277,  2280,  2284,  2285,  2287,
    2288,  2292,  2294,  2296,  2298,  2300,  2302,  2307,  2311,  2316,
    2318,  2320,  2322,  2325,  2329,  2331,  2334,  2338,  2342,  2343,
    2347,  2348,  2356,  2357,  2363,  2364,  2367,  2368,  2373,  2374,
    2379,  2380,  2383,  2388,  2389,  2392,  2397,  2398,  2399,  2407,
    2408,  2413,  2416,  2419,  2422,  2425,  2428,  2429,  2431,  2432,
    2437,  2440,  2441,  2444,  2447,  2448,  2457,  2459,  2462,  2464,
    2468,  2472,  2473,  2477,  2478,  2480,  2481,  2486,  2491,  2498,
    2505,  2506,  2508,  2509,  2514,  2515,  2517,  2519,  2520,  2530,
    2531,  2535,  2537,  2541,  2544,  2547,  2550,  2554,  2555,  2559,
    2560,  2564,  2565,  2569,  2570,  2572,  2574,  2576,  2585,  2587,
    2589,  2591,  2593,  2595,  2596,  2598,  2600,  2602,  2608,  2610,
    2613,  2614,  2623,  2624,  2627,  2628,  2633,  2637,  2641,  2643,
    2645,  2646,  2648,  2650,  2651,  2653,  2656,  2659,  2660,  2663,
    2664,  2667,  2670,  2671,  2674,  2675,  2678,  2681,  2682,  2685,
    2686,  2689,  2691,  2693,  2696,  2699,  2703,  2708,  2710,  2712,
    2715,  2718,  2721,  2722,  2724,  2726,  2728,  2731,  2734,  2737,
    2739,  2741,  2742,  2745,  2747,  2750,  2753,  2755,  2757,  2759,
    2761,  2763,  2765,  2767,  2769,  2771,  2773,  2775,  2777,  2779,
    2781,  2783,  2785,  2787,  2789,  2791,  2793,  2795,  2797,  2799,
    2801,  2803,  2806,  2808,  2811,  2813,  2816,  2818,  2824,  2826,
    2832,  2834,  2838,  2839,  2841,  2843,  2847,  2850,  2853,  2857,
    2861,  2865,  2869,  2873,  2875,  2879,  2881,  2884,  2887,  2889,
    2891,  2893,  2896,  2898,  2900,  2903,  2905,  2906,  2909,  2911,
    2913,  2915,  2919,  2921,  2923,  2926,  2928,  2929,  2931,  2933,
    2935,  2937,  2939,  2942,  2944,  2949,  2953,  2955,  2957,  2960,
    2962,  2966,  2970,  2975,  2979,  2981,  2983,  2985,  2987,  2989,
    2991,  2993,  2995,  2997,  2999,  3001,  3003,  3005,  3007,  3010,
    3013,  3017,  3019,  3023,  3027,  3032,  3038,  3040,  3042,  3045,
    3047,  3049,  3051,  3053,  3055,  3057,  3059,  3061,  3065,  3068,
    3073,  3078,  3083,  3084,  3088,  3089,  3091,  3093,  3097,  3101,
    3103,  3107,  3109,  3113,  3114,  3116,  3117,  3120,  3121,  3123,
    3124,  3126,  3127,  3129,  3131,  3132,  3134,  3135,  3137,  3138,
    3140,  3141,  3144,  3146,  3148,  3150,  3152,  3155,  3158,  3159,
    3161,  3162,  3164,  3165,  3167,  3168,  3170,  3171,  3173,  3174,
    3176,  3177,  3179,  3180,  3182,  3183,  3185,  3186,  3188,  3189,
    3191,  3192,  3194,  3195,  3197,  3198,  3200,  3201,  3203,  3204,
    3206,  3207,  3209,  3211,  3212,  3214,  3215,  3217,  3219,  3220,
    3222,  3223,  3225,  3226,  3228,  3229,  3231,  3232,  3234,  3235,
    3237,  3238,  3240,  3241,  3243,  3244,  3246,  3247,  3249,  3250,
    3252,  3253,  3255,  3256,  3259,  3260,  3262,  3263,  3265,  3266,
    3268,  3269,  3271,  3272,  3274,  3275,  3277,  3278,  3280,  3281,
    3283,  3284
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     381,     0,    -1,    -1,   382,   383,    -1,   384,    -1,   383,
     384,    -1,    -1,    -1,   389,   394,   385,   477,   386,   562,
     387,   388,    -1,    -1,   384,    -1,   387,   384,    -1,    -1,
     125,   240,   390,   372,    -1,   241,   372,   390,   391,   392,
     393,    -1,     3,    -1,     4,    -1,    -1,    62,     4,    -1,
      -1,   919,    97,   930,    -1,   919,   295,   930,    -1,   919,
      46,   930,    -1,    -1,   372,    -1,    -1,   146,   120,   372,
     395,   438,    -1,    -1,    98,   265,   372,   396,    -1,    -1,
     396,   397,    -1,   398,    -1,   402,    -1,   406,    -1,   275,
     372,   399,    -1,    -1,   372,    -1,   401,   372,    -1,   401,
     400,   372,    -1,   400,   372,    -1,   944,   112,   205,    -1,
       3,    -1,   218,   372,   403,    -1,    -1,   372,    -1,   401,
     372,    -1,   401,   404,   372,    -1,   404,   372,    -1,    -1,
     404,   405,    -1,   930,   911,   270,   919,   865,    -1,   203,
     273,   919,   882,    88,    -1,   277,   372,   407,    -1,    -1,
     408,   372,    -1,   409,    -1,   408,   409,    -1,   410,    -1,
     415,    -1,   423,    -1,   428,    -1,   432,    -1,   433,    -1,
     431,    -1,   434,    -1,   435,    -1,   436,    -1,   437,    -1,
      -1,     3,   411,   412,   413,    -1,    -1,   186,   105,    -1,
     186,   868,    -1,    -1,   413,   414,   937,   919,   868,    -1,
     223,    -1,   221,    -1,    59,   868,   919,   416,    -1,   209,
      -1,   279,    -1,   280,    -1,   147,    -1,   417,    -1,   418,
      -1,   417,   418,    -1,     4,    -1,     4,   290,     4,    -1,
      -1,     4,    66,   419,   420,    -1,   422,    -1,    -1,   420,
      66,   421,   422,    -1,     4,    -1,   276,    -1,    44,    -1,
     242,    -1,   177,    -1,   202,    -1,   283,   910,   424,    -1,
     425,    -1,   424,   425,    -1,   426,   902,   427,    -1,     3,
      -1,   426,     3,    -1,   882,    -1,   427,   882,    -1,    89,
     868,   919,   429,    -1,   430,    -1,   429,   430,    -1,   883,
      -1,   883,   290,   883,    -1,   330,   868,   919,   865,    -1,
     106,   934,   919,     4,    -1,   113,   919,    94,    -1,   107,
     919,   865,    -1,   105,   281,   919,   865,    -1,   328,   919,
     865,    -1,   329,   919,   865,    -1,    -1,   183,   265,   372,
     439,   466,    -1,    -1,   164,   372,   440,    -1,    -1,   440,
     441,    -1,    -1,   267,   898,   868,   442,   443,   372,    -1,
      -1,   443,   444,    -1,   445,    -1,   448,    -1,   450,    -1,
     451,    -1,   452,    -1,   453,    -1,   456,    -1,   458,    -1,
     459,    -1,   460,    -1,   462,    -1,   463,    -1,   464,    -1,
      76,   942,   446,   914,   447,    -1,    -1,   161,    -1,   123,
      -1,   885,    -1,    19,    -1,   879,    -1,    55,   924,   919,
     449,    -1,   271,    -1,   123,    -1,   243,    -1,    68,   244,
     921,   919,   865,   461,   893,    -1,   911,   270,   919,     3,
      -1,   915,   281,   919,   865,   866,    -1,   200,   924,   919,
     454,    -1,   312,   455,    -1,   313,   455,    -1,   314,    -1,
      -1,   311,   200,   223,   903,    -1,   311,   200,   223,   206,
     903,    -1,   311,   315,    -1,   227,   919,   457,    -1,   457,
      -1,   181,    -1,   271,    -1,   249,    -1,   197,   271,    -1,
     231,   909,   919,   867,    -1,   244,   117,   919,   279,    -1,
     244,   921,   919,   865,   461,    -1,    -1,   373,   864,    -1,
     327,   919,   864,    -1,   249,   921,   919,   865,    -1,   255,
     882,   906,    -1,    51,   944,   465,    -1,    58,   929,    -1,
     213,   929,    -1,    31,    52,    -1,    -1,   188,   372,   467,
      -1,    -1,   468,   372,    -1,   469,    -1,   468,   469,    -1,
     470,    -1,   472,    -1,   262,   471,   906,   916,   856,    -1,
      -1,   244,    -1,    37,    -1,   274,    -1,    -1,   206,   915,
     938,   473,   912,   474,    -1,   475,    -1,   474,   475,    -1,
     857,   476,    -1,    -1,   235,   882,    -1,    -1,   108,   120,
     372,   478,   507,   547,   549,   551,    -1,    -1,    -1,   294,
     265,   372,   479,   481,    -1,    -1,   484,   480,   483,    -1,
      -1,   481,   482,    -1,   484,   485,   509,    -1,   485,   509,
      -1,   483,   482,    -1,   162,    -1,   264,    -1,    -1,   857,
     486,   487,   372,    -1,    -1,   487,   488,    -1,   919,   161,
      -1,   919,   173,    -1,   489,    -1,   491,    -1,   495,    -1,
     497,    -1,   498,    -1,   499,    -1,   505,    -1,   506,    -1,
      85,   912,   882,   494,   490,    -1,    -1,   245,    -1,    88,
      -1,   244,   912,   882,   910,    -1,   244,   912,   882,   293,
     882,   910,    -1,   244,   919,   309,   918,   936,   493,   494,
     910,   492,    -1,    -1,   118,   927,   865,    -1,    -1,   917,
     882,    -1,    -1,   293,   882,    -1,   191,   903,   496,    -1,
     278,    -1,   222,    -1,     3,   919,     3,    -1,   108,   903,
     864,    -1,    47,   919,   867,   923,   500,    -1,    -1,   500,
     501,    -1,   502,    -1,   503,    -1,   504,    -1,   944,    48,
     907,   867,   923,    -1,   907,    49,   867,   923,    -1,   907,
      50,   867,    -1,    53,   924,   919,     3,    -1,    90,   919,
       3,    -1,    -1,    -1,    43,   265,   372,   508,   509,    -1,
      -1,   510,    -1,    -1,   511,   512,    -1,   513,   372,    -1,
     512,   513,   372,    -1,   512,   372,    -1,    -1,   515,   516,
     514,   517,    -1,     3,    -1,    -1,   165,    -1,     3,    -1,
      -1,   517,   518,    -1,   519,    -1,   520,    -1,   522,    -1,
     523,    -1,   524,    -1,   526,    -1,   527,    -1,   536,    -1,
     537,    -1,   539,    -1,   540,    -1,   541,    -1,   546,    -1,
     246,   878,    -1,   919,   161,   521,    -1,    -1,    62,     4,
      -1,   919,   173,    -1,     5,    -1,   525,    -1,   305,   919,
     525,    -1,    82,    -1,   320,    -1,   321,    -1,   322,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,    19,    -1,
     180,    -1,    45,    -1,   234,    -1,   345,    -1,   332,    -1,
     333,    -1,   334,    -1,   335,    -1,   336,    -1,   337,    -1,
     338,   342,    -1,   338,   343,    -1,   338,    -1,   339,   342,
      -1,   339,   343,    -1,   339,    -1,   340,   342,    -1,   340,
     343,    -1,   340,    -1,   341,   342,    -1,   341,   343,    -1,
     341,    -1,   935,   193,   900,    -1,   935,   299,   900,    -1,
     219,   882,   528,   941,   529,   530,   533,    -1,    -1,   293,
     882,    -1,    -1,   118,   927,   865,    -1,   531,    -1,    -1,
     531,   532,   921,   919,   864,    -1,    75,    -1,   119,    -1,
      -1,   181,   908,   534,    -1,   535,    -1,   534,   535,    -1,
       3,    -1,   189,   932,    -1,   284,   538,    -1,    -1,   194,
      -1,   259,    -1,    83,   943,    44,    -1,   364,    -1,    -1,
     308,   920,   543,   542,   943,   933,   942,   545,    -1,   544,
      -1,   543,   544,    -1,   883,    -1,   883,   290,   883,    -1,
      -1,   297,   919,   883,    -1,   252,   879,    -1,   252,   879,
     290,   879,    -1,    -1,    -1,    54,   265,   372,   548,   509,
      -1,    -1,    -1,   199,   265,   372,   550,   509,    -1,    -1,
      -1,    -1,   263,   265,   372,   552,   553,   554,    -1,    -1,
     555,    -1,   556,    -1,   555,   556,    -1,    -1,   515,   516,
     557,   558,   372,    -1,    -1,   558,   559,    -1,   348,    -1,
     347,    -1,    81,    -1,    84,    -1,   156,   152,    -1,   156,
     153,    -1,   176,    -1,   201,    -1,   257,    -1,   300,    -1,
     316,    -1,    78,    -1,   266,    -1,   254,    -1,   170,    -1,
     317,    87,   919,   883,    -1,   197,   925,   919,   560,   872,
      -1,    93,   925,   919,   561,   872,    -1,   168,   919,   882,
      -1,    79,   919,   882,    -1,   524,    -1,   539,    -1,   536,
      -1,   526,    -1,   541,    -1,   523,    -1,   307,   877,    -1,
     169,   876,    -1,   293,   877,    -1,    -1,   233,    -1,   204,
      -1,    -1,   233,    -1,   204,    -1,    -1,    -1,    -1,   237,
     120,   605,   372,   563,   565,   564,   567,    -1,    -1,    -1,
     114,   372,   566,   567,   125,   114,   372,    -1,    -1,   567,
     568,    -1,   569,    -1,   570,    -1,   571,    -1,   577,   372,
      -1,     1,   372,    -1,   372,    -1,   572,   265,   573,   372,
      -1,     3,   372,    -1,   572,    -1,     3,    -1,    -1,   872,
      -1,    -1,    -1,   575,   576,   577,    -1,    -1,   578,   579,
      -1,   577,   579,    -1,   580,    -1,   590,    -1,   595,    -1,
     600,    -1,   603,    -1,   617,    -1,   620,    -1,   630,    -1,
     625,    -1,   631,    -1,   632,    -1,   635,    -1,   642,    -1,
     646,    -1,   648,    -1,   659,    -1,   662,    -1,   664,    -1,
     667,    -1,   669,    -1,   673,    -1,   682,    -1,   699,    -1,
     701,    -1,   704,    -1,   708,    -1,   714,    -1,   724,    -1,
     731,    -1,   733,    -1,   736,    -1,   740,    -1,   741,    -1,
     749,    -1,   760,    -1,   770,    -1,   776,    -1,   779,    -1,
     785,    -1,   789,    -1,   792,    -1,   803,    -1,   810,    -1,
     212,   268,    -1,    -1,    11,   581,   582,   589,    -1,   877,
     583,   586,    -1,   877,   169,   319,   190,    -1,   877,   169,
     109,    -1,   877,   169,   109,   150,    -1,   877,   169,   110,
      -1,   877,   169,   110,   151,    -1,   877,   169,   111,    -1,
     877,   169,   291,    -1,   877,   169,    95,    -1,   877,   169,
     149,   817,    -1,   877,   169,   146,   875,   817,    -1,   877,
     169,    73,    -1,   877,   169,    74,   817,    -1,   877,   169,
     859,    -1,   877,   169,     3,    -1,    -1,   907,   584,   585,
      -1,   907,   585,   584,    -1,   907,   584,    -1,   907,   585,
      -1,    77,   875,    -1,   197,   925,   876,    -1,    93,   925,
     876,    -1,    -1,   311,   587,    -1,   588,    -1,   587,   588,
      -1,    78,    -1,    81,    -1,    84,    -1,   170,    -1,   176,
      -1,   201,    -1,   254,    -1,   257,    -1,   266,    -1,   300,
      -1,   318,    -1,   168,   919,   882,    -1,    79,   919,   882,
      -1,   317,   909,   919,   883,    -1,    -1,   126,    -1,    -1,
      12,   591,   592,   594,    -1,   871,   293,   852,   821,    -1,
     871,   593,   172,   852,   821,    -1,   103,   877,   293,   877,
     899,   821,    -1,    -1,   293,   872,    -1,    -1,   127,    -1,
      -1,   361,   596,   597,    -1,   598,    88,   895,   256,   870,
      -1,   870,   895,   599,    -1,   838,    -1,   872,    -1,    -1,
     256,   870,    -1,    67,   601,    -1,    -1,   601,   861,   293,
     602,   861,    -1,    -1,   239,   293,    -1,    -1,    14,   604,
     876,   608,   613,   614,   615,   616,    -1,    -1,    -1,   307,
     606,   610,    -1,    -1,   346,   607,   610,    -1,    -1,    -1,
     307,   609,   610,    -1,   611,    -1,   610,   611,    -1,   222,
      -1,   908,   612,   222,    -1,   872,    -1,   908,   612,   872,
      -1,   248,    -1,   100,    -1,   308,    -1,    -1,   256,   872,
      -1,   172,   872,    -1,    -1,   230,   574,    -1,   158,   574,
      -1,    -1,   349,   574,    -1,    -1,   128,    -1,    -1,    15,
     618,   619,    -1,    -1,   619,   872,    -1,    -1,    16,   621,
     622,    -1,    -1,   622,   857,   623,    -1,    -1,   624,    -1,
     624,   916,   251,    -1,   944,   213,   258,    -1,   944,   200,
      -1,   247,    -1,   301,    -1,    -1,    17,   626,   627,   628,
      -1,   852,   629,   838,   821,    -1,    -1,   129,    -1,   373,
      -1,   155,    -1,    96,    -1,   101,    -1,    -1,    18,   633,
     857,   931,   833,   634,    -1,    -1,   130,    -1,    -1,    19,
     636,   871,   583,   637,   638,   818,   641,    -1,    -1,   304,
     859,    -1,   304,     3,    -1,   304,   105,    -1,   304,   148,
      -1,   304,   149,    -1,   304,    73,    -1,    -1,   944,   358,
      -1,   311,   639,    -1,   640,    -1,   639,   640,    -1,    81,
      -1,    84,    -1,   156,   152,    -1,   156,   153,    -1,   176,
      -1,   201,    -1,   257,    -1,   300,    -1,   316,    -1,   168,
     919,   882,    -1,    79,   919,   882,    -1,   348,    -1,   347,
      -1,    -1,   131,    -1,    -1,    20,   643,   644,   645,    -1,
     872,   184,   852,   821,    -1,   872,   184,   872,   172,   852,
     821,    -1,   872,    86,   872,   172,   852,   821,    -1,   872,
     184,   872,   172,   853,   250,   853,   821,    -1,   872,    86,
     872,   172,   853,   250,   853,   821,    -1,    -1,   132,    -1,
      -1,    21,   647,   883,   608,    -1,    -1,    22,   649,   650,
     652,   658,    -1,   651,    -1,   650,    66,   651,    -1,   838,
      -1,   296,    -1,   297,    -1,    -1,   652,   653,    -1,   654,
     574,    -1,   310,   228,   574,    -1,   310,   655,    -1,   654,
     310,   655,    -1,   656,    -1,   655,    66,   656,    -1,   839,
     657,    -1,    70,    -1,   296,    -1,   297,    -1,    -1,   290,
     838,    -1,    -1,   133,    -1,    -1,   159,   660,   661,    -1,
      -1,   240,    -1,    30,    -1,    30,    91,    -1,   265,    -1,
     365,    -1,    -1,   363,   663,   869,    -1,    -1,   174,   942,
     665,   860,   666,    -1,    -1,   118,   927,   872,    -1,    -1,
     163,   668,    -1,    -1,    23,   670,   837,   940,   574,   671,
     672,    -1,    23,     1,   134,    -1,    -1,   124,   574,    -1,
      -1,   134,    -1,    -1,    24,   674,   869,   675,   676,   677,
     681,    -1,    -1,   944,   165,    -1,    -1,    58,   942,   308,
      -1,   680,   942,   308,    -1,    -1,   253,   678,    -1,   679,
      -1,   678,   679,    -1,   680,   913,    86,   872,    -1,    60,
      -1,    64,    -1,   216,    -1,    65,    -1,   217,    -1,   207,
      -1,   208,    -1,    -1,   115,    -1,    -1,    25,   683,   684,
     685,    -1,   877,    -1,   883,    -1,   886,    -1,    -1,   685,
     686,    -1,   687,    -1,   691,    -1,   696,    -1,    -1,   285,
     688,   689,    -1,   690,    -1,   689,   690,    -1,   875,   167,
      -1,    88,   697,    -1,    58,    -1,   193,    -1,   299,    -1,
     875,   697,    -1,   253,   692,    -1,   693,    -1,   692,   693,
      -1,    88,    86,   872,   697,    -1,   694,   695,    -1,    -1,
      58,    -1,   193,    -1,   166,    -1,   299,    -1,   872,    86,
     872,   697,    -1,   102,   872,   293,   872,   697,    -1,    -1,
     697,   814,   698,   872,    -1,    -1,   295,    -1,    -1,    26,
     700,   762,    -1,    -1,    27,   702,   703,    -1,   872,   293,
     869,    -1,   103,   872,   293,   869,    -1,    -1,    28,   705,
     706,   707,    -1,   872,    86,   852,   821,    -1,   872,    86,
     872,   172,   852,   821,    -1,    -1,   135,    -1,    -1,    29,
     709,   710,    -1,    -1,   710,   711,   712,   856,   713,    -1,
     182,    -1,   229,    -1,   187,    -1,   160,    -1,    -1,    51,
     944,   465,    -1,    -1,   944,   213,   258,    -1,   944,   200,
      -1,    -1,    30,   715,   716,    -1,   719,   720,    -1,    -1,
     720,   717,   574,   718,    -1,   720,   136,    -1,    -1,   136,
      -1,   861,    -1,   861,   290,   861,    -1,    -1,   872,   292,
      -1,   721,   302,   837,    -1,   721,   309,   722,    -1,    -1,
     944,   287,   814,    -1,   723,    -1,   722,    57,   723,    -1,
     877,   169,   872,    86,   872,   302,   837,    -1,    -1,    31,
     725,   857,   896,   931,   726,   727,   728,   729,   730,    -1,
      -1,   184,   872,    -1,    -1,   331,   200,    -1,   944,   200,
      -1,   944,   213,   200,    -1,    -1,   190,   919,   872,    -1,
      -1,   827,    -1,   834,    -1,    -1,   137,    -1,    -1,    32,
     732,   854,   812,    -1,    -1,    33,   734,   857,   931,   726,
     827,   735,    -1,    -1,   138,    -1,    -1,    34,   737,   854,
     812,   738,   833,   739,    -1,    -1,   944,   200,    -1,   944,
     213,   200,    -1,    -1,   139,    -1,   315,    -1,    -1,    35,
     742,   743,   748,    -1,   855,   744,   745,   746,    -1,    58,
     855,   745,   310,   838,   574,    -1,    -1,   309,   872,    -1,
      -1,   907,   125,   574,    -1,   747,    -1,   747,   746,    -1,
     310,   837,   574,    -1,    -1,   140,    -1,    -1,    36,   750,
     751,    -1,   752,    -1,   753,    -1,   754,    -1,   756,    -1,
     758,    -1,   146,   875,   293,   875,    -1,   869,   293,   872,
      -1,   869,   755,    86,   872,    -1,   303,    -1,   121,    -1,
     757,    -1,   756,   757,    -1,   858,   293,   414,    -1,   759,
      -1,   758,   759,    -1,   869,   293,   296,    -1,   869,   293,
     297,    -1,    -1,    37,   761,   762,    -1,    -1,   879,   764,
     766,   767,   763,   768,   769,    -1,    -1,   764,   927,   532,
     921,   765,    -1,    -1,   765,   879,    -1,    -1,   944,   122,
     918,   928,    -1,    -1,   911,   270,   919,   865,    -1,    -1,
     307,   856,    -1,   182,   237,   919,   719,    -1,    -1,   172,
     856,    -1,   229,   237,   919,   719,    -1,    -1,    -1,    38,
     771,   857,   772,   773,   833,   775,    -1,    -1,   190,   919,
     774,   872,    -1,   897,   843,    -1,   897,   844,    -1,   897,
     845,    -1,   897,   846,    -1,   897,   847,    -1,    -1,   141,
      -1,    -1,   282,   261,   777,   778,    -1,   282,   883,    -1,
      -1,   256,   872,    -1,   172,   872,    -1,    -1,    39,   780,
     781,   184,   877,   783,   824,   784,    -1,   782,    -1,   781,
     782,    -1,   872,    -1,   116,   908,   273,    -1,   116,   908,
     872,    -1,    -1,   944,   234,   872,    -1,    -1,   142,    -1,
      -1,    40,   786,   787,   788,    -1,   871,   169,   852,   821,
      -1,   871,   169,   872,   172,   852,   821,    -1,   103,   872,
     169,   872,   899,   821,    -1,    -1,   143,    -1,    -1,   360,
     790,   857,   791,    -1,    -1,   244,    -1,   245,    -1,    -1,
      41,   793,   877,   794,   797,   783,   801,   824,   802,    -1,
      -1,   116,   908,   795,    -1,   796,    -1,   795,   225,   796,
      -1,   892,   875,    -1,   184,   798,    -1,   797,   798,    -1,
     877,   799,   800,    -1,    -1,   117,   918,   877,    -1,    -1,
     104,   918,   877,    -1,    -1,   285,   918,   877,    -1,    -1,
     144,    -1,   804,    -1,   808,    -1,   306,   894,    57,   806,
     807,   237,   927,   805,    -1,   856,    -1,   182,    -1,   229,
      -1,   187,    -1,   160,    -1,    -1,   278,    -1,   158,    -1,
     157,    -1,   306,   916,   112,   927,   809,    -1,   861,    -1,
      58,   238,    -1,    -1,    42,   811,   854,   812,   738,   813,
     815,   816,    -1,    -1,   169,   872,    -1,    -1,   814,   904,
     872,   922,    -1,   814,   904,   859,    -1,   814,   904,   232,
      -1,    80,    -1,    57,    -1,    -1,   830,    -1,   834,    -1,
      -1,   145,    -1,   819,   820,    -1,   819,   820,    -1,    -1,
     158,   574,    -1,    -1,   349,   574,    -1,   822,   823,    -1,
      -1,   350,   574,    -1,    -1,   351,   574,    -1,   825,   826,
      -1,    -1,   230,   574,    -1,    -1,   352,   574,    -1,   828,
      -1,   829,    -1,   828,   829,    -1,   125,   574,    -1,    77,
     125,   574,    -1,   214,   907,   125,   574,    -1,   831,    -1,
     832,    -1,   831,   832,    -1,   154,   574,    -1,   353,   574,
      -1,    -1,   834,    -1,   835,    -1,   836,    -1,   835,   836,
      -1,   354,   574,    -1,   355,   574,    -1,   838,    -1,   839,
      -1,    -1,   840,   841,    -1,   842,    -1,   841,   186,    -1,
     841,   842,    -1,   872,    -1,   374,    -1,   375,    -1,   366,
      -1,   367,    -1,   368,    -1,   369,    -1,   371,    -1,   843,
      -1,   844,    -1,   845,    -1,   171,    -1,   192,    -1,   210,
      -1,   214,    -1,    69,    -1,   225,    -1,   222,    -1,   216,
      -1,    60,    -1,    61,    -1,    63,    -1,   236,    -1,   211,
      -1,   373,    -1,   155,   942,    -1,   376,    -1,   175,   939,
      -1,   377,    -1,   196,   939,    -1,   171,    -1,   175,   939,
     225,   155,   942,    -1,   192,    -1,   196,   939,   225,   155,
     942,    -1,   850,    -1,   848,   849,   850,    -1,    -1,   356,
      -1,   872,    -1,   374,   850,   375,    -1,   366,   850,    -1,
     367,   850,    -1,   850,   366,   850,    -1,   850,   367,   850,
      -1,   850,   368,   850,    -1,   850,   369,   850,    -1,   850,
     371,   850,    -1,   344,    -1,   344,   901,     3,    -1,   853,
      -1,   852,   853,    -1,   872,   899,    -1,   872,    -1,   879,
      -1,   857,    -1,   856,   857,    -1,   879,    -1,   859,    -1,
     858,   859,    -1,     6,    -1,    -1,   860,   861,    -1,   862,
      -1,   879,    -1,   863,    -1,   863,   901,   863,    -1,     4,
      -1,   865,    -1,   864,   865,    -1,   879,    -1,    -1,   865,
      -1,   865,    -1,   883,    -1,     3,    -1,   870,    -1,   869,
     870,    -1,   877,    -1,    13,   926,   873,   874,    -1,    13,
     926,   878,    -1,   851,    -1,   872,    -1,   871,   872,    -1,
     877,    -1,   195,   926,   878,    -1,   195,   926,   883,    -1,
      13,   926,   873,   874,    -1,    13,   926,   878,    -1,   883,
      -1,   886,    -1,   851,    -1,   240,    -1,    21,    -1,   878,
      -1,   885,    -1,   298,    -1,   877,    -1,   884,    -1,   877,
      -1,     4,    -1,   878,    -1,   879,    -1,   879,   880,    -1,
     879,   881,    -1,   879,   880,   881,    -1,     3,    -1,     3,
     901,   879,    -1,   374,   848,   375,    -1,   374,   850,   378,
     375,    -1,   374,   850,   378,   850,   375,    -1,     4,    -1,
     884,    -1,    58,   884,    -1,   885,    -1,   276,    -1,    44,
      -1,   242,    -1,   177,    -1,   202,    -1,   298,    -1,     4,
      -1,   885,   379,     4,    -1,     7,   887,    -1,     8,   374,
     889,   375,    -1,     9,   374,   890,   375,    -1,    10,   374,
     891,   375,    -1,    -1,   374,   888,   375,    -1,    -1,   848,
      -1,   850,    -1,   850,   849,   193,    -1,   850,   849,   299,
      -1,   850,    -1,   850,   849,   850,    -1,   850,    -1,   850,
     849,   865,    -1,    -1,    58,    -1,    -1,   944,   122,    -1,
      -1,   173,    -1,    -1,   362,    -1,    -1,   212,    -1,   359,
      -1,    -1,   214,    -1,    -1,   224,    -1,    -1,   260,    -1,
      -1,   269,   909,    -1,   179,    -1,   220,    -1,   186,    -1,
      71,    -1,   244,   919,    -1,   245,   905,    -1,    -1,    56,
      -1,    -1,    71,    -1,    -1,    72,    -1,    -1,    77,    -1,
      -1,    86,    -1,    -1,    87,    -1,    -1,    88,    -1,    -1,
      92,    -1,    -1,    99,    -1,    -1,   108,    -1,    -1,   357,
      -1,    -1,   294,    -1,    -1,   167,    -1,    -1,   169,    -1,
      -1,   179,    -1,    -1,   186,    -1,    -1,   186,    -1,    71,
      -1,    -1,   190,    -1,    -1,   197,    -1,   198,    -1,    -1,
     198,    -1,    -1,   205,    -1,    -1,   215,    -1,    -1,   220,
      -1,    -1,   223,    -1,    -1,   226,    -1,    -1,   228,    -1,
      -1,   240,    -1,    -1,   244,    -1,    -1,   259,    -1,    -1,
      36,    -1,    -1,   272,    -1,    -1,   272,   919,    -1,    -1,
     273,    -1,    -1,   281,    -1,    -1,   286,    -1,    -1,   288,
      -1,    -1,   289,    -1,    -1,   292,    -1,    -1,   293,    -1,
      -1,   310,    -1,    -1,   311,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   158,   158,   158,   196,   197,   202,   203,   201,   209,
     210,   211,   214,   215,   247,   290,   291,   295,   296,   299,
     300,   301,   302,   305,   305,   312,   313,   323,   324,   328,
     329,   333,   334,   335,   344,   347,   348,   349,   350,   351,
     355,   362,   371,   374,   375,   376,   377,   378,   381,   382,
     386,   390,   402,   405,   406,   410,   411,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   433,   432,
     443,   444,   451,   454,   455,   463,   464,   471,   475,   476,
     477,   478,   479,   490,   491,   496,   497,   498,   498,   503,
     504,   504,   509,   510,   511,   512,   513,   514,   521,   528,
     529,   533,   537,   538,   542,   543,   550,   559,   560,   564,
     565,   579,   594,   661,   672,   679,   686,   692,   699,   700,
     710,   711,   714,   715,   720,   719,   740,   741,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   755,   756,
     757,   764,   770,   771,   775,   779,   780,   787,   794,   798,
     799,   800,   807,   830,   840,   853,   857,   858,   859,   862,
     863,   864,   865,   872,   873,   877,   886,   895,   904,   919,
     929,   936,   939,   940,   941,   947,   954,   961,   965,   966,
     967,   975,   976,   979,   980,   984,   985,   989,   990,   996,
    1021,  1022,  1023,  1024,  1031,  1030,  1038,  1039,  1043,  1046,
    1047,  1055,  1056,  1069,  1070,  1070,  1073,  1072,  1085,  1086,
    1090,  1102,  1111,  1115,  1116,  1126,  1125,  1139,  1140,  1144,
    1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1160,
    1163,  1163,  1163,  1169,  1177,  1186,  1198,  1199,  1206,  1207,
    1211,  1212,  1219,  1226,  1227,  1234,  1244,  1254,  1272,  1273,
    1277,  1278,  1279,  1283,  1290,  1297,  1307,  1314,  1333,  1334,
    1334,  1345,  1346,  1350,  1350,  1365,  1366,  1368,  1373,  1372,
    1395,  1399,  1400,  1401,  1405,  1406,  1411,  1412,  1413,  1414,
    1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1423,  1430,
    1447,  1463,  1464,  1475,  1482,  1489,  1490,  1494,  1495,  1496,
    1497,  1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,
    1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,
    1517,  1518,  1519,  1520,  1521,  1522,  1523,  1524,  1531,  1536,
    1547,  1561,  1562,  1565,  1566,  1573,  1592,  1593,  1610,  1611,
    1614,  1615,  1619,  1620,  1625,  1638,  1645,  1648,  1649,  1650,
    1657,  1664,  1670,  1670,  1675,  1676,  1680,  1681,  1684,  1685,
    1698,  1710,  1732,  1733,  1733,  1747,  1748,  1748,  1762,  1763,
    1764,  1763,  1782,  1783,  1787,  1788,  1794,  1793,  1822,  1823,
    1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,  1835,  1836,
    1837,  1838,  1839,  1840,  1841,  1842,  1846,  1853,  1860,  1892,
    1924,  1925,  1926,  1927,  1928,  1929,  1930,  1935,  1939,  1947,
    1951,  1956,  1965,  1969,  1974,  1986,  1988,  1997,  1987,  2023,
    2024,  2024,  2051,  2052,  2056,  2057,  2058,  2059,  2074,  2075,
    2084,  2113,  2148,  2158,  2161,  2162,  2171,  2175,  2171,  2189,
    2189,  2207,  2211,  2212,  2213,  2214,  2215,  2216,  2217,  2218,
    2219,  2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,
    2229,  2230,  2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,
    2239,  2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,
    2249,  2250,  2251,  2252,  2253,  2254,  2275,  2275,  2281,  2282,
    2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,  2294,  2299,
    2300,  2301,  2302,  2306,  2307,  2308,  2309,  2310,  2311,  2315,
    2319,  2322,  2323,  2327,  2328,  2332,  2333,  2334,  2335,  2336,
    2337,  2338,  2339,  2340,  2341,  2342,  2343,  2344,  2345,  2348,
    2349,  2358,  2358,  2364,  2368,  2372,  2378,  2379,  2383,  2384,
    2393,  2393,  2398,  2402,  2409,  2410,  2413,  2414,  2423,  2429,
    2430,  2434,  2434,  2442,  2442,  2452,  2453,  2453,  2456,  2455,
    2464,  2465,  2465,  2470,  2471,  2476,  2483,  2490,  2491,  2495,
    2499,  2507,  2518,  2519,  2520,  2524,  2525,  2526,  2530,  2531,
    2536,  2537,  2546,  2546,  2550,  2551,  2563,  2563,  2567,  2568,
    2577,  2578,  2579,  2580,  2581,  2584,  2584,  2592,  2592,  2598,
    2605,  2606,  2609,  2609,  2616,  2629,  2642,  2642,  2651,  2652,
    2661,  2661,  2670,  2671,  2672,  2673,  2674,  2675,  2676,  2680,
    2681,  2682,  2686,  2687,  2692,  2693,  2694,  2695,  2696,  2697,
    2698,  2699,  2700,  2701,  2733,  2765,  2766,  2769,  2770,  2779,
    2779,  2785,  2789,  2793,  2797,  2801,  2808,  2809,  2818,  2818,
    2834,  2833,  2852,  2853,  2858,  2867,  2872,  2880,  2881,  2886,
    2888,  2893,  2894,  2899,  2900,  2905,  2939,  2940,  2941,  2944,
    2945,  2949,  2950,  2959,  2959,  2964,  2965,  2966,  2983,  3000,
    3018,  3044,  3044,  3057,  3057,  3065,  3066,  3075,  3075,  3087,
    3087,  3093,  3097,  3098,  3102,  3103,  3112,  3112,  3120,  3121,
    3125,  3126,  3127,  3131,  3132,  3137,  3138,  3143,  3147,  3148,
    3149,  3150,  3151,  3152,  3153,  3157,  3158,  3168,  3167,  3177,
    3178,  3179,  3182,  3183,  3187,  3188,  3189,  3195,  3195,  3200,
    3201,  3205,  3206,  3207,  3208,  3209,  3210,  3216,  3220,  3221,
    3225,  3230,  3234,  3235,  3236,  3237,  3238,  3242,  3268,  3274,
    3275,  3279,  3279,  3287,  3287,  3297,  3297,  3302,  3306,  3318,
    3318,  3324,  3328,  3335,  3336,  3345,  3345,  3349,  3350,  3364,
    3365,  3366,  3367,  3371,  3372,  3375,  3376,  3377,  3386,  3386,
    3391,  3396,  3395,  3404,  3411,  3412,  3416,  3421,  3430,  3433,
    3438,  3443,  3450,  3451,  3455,  3456,  3461,  3473,  3473,  3496,
    3497,  3501,  3502,  3506,  3510,  3517,  3518,  3521,  3522,  3523,
    3527,  3528,  3537,  3537,  3550,  3550,  3559,  3560,  3569,  3569,
    3580,  3581,  3585,  3592,  3593,  3602,  3615,  3615,  3621,  3625,
    3632,  3633,  3637,  3638,  3642,  3643,  3647,  3651,  3652,  3661,
    3661,  3666,  3667,  3668,  3669,  3670,  3676,  3685,  3694,  3701,
    3702,  3708,  3709,  3713,  3722,  3723,  3727,  3731,  3743,  3743,
    3749,  3748,  3764,  3767,  3783,  3784,  3787,  3788,  3792,  3793,
    3798,  3803,  3811,  3823,  3828,  3836,  3852,  3853,  3852,  3873,
    3874,  3878,  3879,  3880,  3881,  3882,  3886,  3887,  3896,  3896,
    3901,  3908,  3909,  3910,  3919,  3919,  3928,  3929,  3933,  3934,
    3935,  3939,  3940,  3944,  3945,  3954,  3954,  3960,  3964,  3968,
    3975,  3976,  3985,  3985,  3989,  3991,  3992,  4001,  4001,  4011,
    4012,  4017,  4018,  4023,  4030,  4031,  4036,  4043,  4044,  4048,
    4049,  4053,  4054,  4058,  4059,  4068,  4069,  4073,  4089,  4099,
    4100,  4101,  4102,  4105,  4105,  4106,  4106,  4109,  4116,  4117,
    4126,  4126,  4137,  4138,  4143,  4146,  4150,  4154,  4161,  4162,
    4165,  4166,  4167,  4171,  4172,  4185,  4193,  4200,  4201,  4204,
    4205,  4213,  4220,  4221,  4224,  4225,  4234,  4241,  4242,  4245,
    4246,  4255,  4260,  4265,  4274,  4275,  4279,  4288,  4293,  4298,
    4307,  4311,  4319,  4320,  4324,  4329,  4334,  4344,  4348,  4362,
    4369,  4376,  4376,  4386,  4387,  4388,  4392,  4394,  4395,  4397,
    4398,  4399,  4400,  4401,  4403,  4404,  4405,  4406,  4407,  4408,
    4410,  4411,  4412,  4414,  4415,  4416,  4417,  4418,  4421,  4422,
    4425,  4425,  4426,  4426,  4427,  4427,  4428,  4428,  4429,  4429,
    4434,  4435,  4438,  4439,  4443,  4444,  4445,  4446,  4447,  4448,
    4449,  4450,  4451,  4462,  4474,  4489,  4490,  4495,  4501,  4507,
    4526,  4527,  4531,  4545,  4546,  4551,  4557,  4558,  4563,  4572,
    4573,  4574,  4578,  4589,  4590,  4594,  4602,  4603,  4607,  4608,
    4614,  4634,  4635,  4639,  4640,  4641,  4642,  4646,  4647,  4651,
    4652,  4653,  4654,  4655,  4656,  4657,  4658,  4662,  4663,  4667,
    4668,  4669,  4673,  4674,  4685,  4686,  4694,  4698,  4699,  4700,
    4701,  4705,  4706,  4710,  4718,  4722,  4734,  4738,  4739,  4749,
    4750,  4751,  4752,  4753,  4754,  4755,  4759,  4760,  4768,  4772,
    4776,  4780,  4787,  4788,  4792,  4793,  4798,  4805,  4812,  4822,
    4829,  4839,  4846,  4864,  4865,  4869,  4870,  4874,  4875,  4879,
    4880,  4884,  4885,  4886,  4890,  4891,  4895,  4896,  4900,  4901,
    4905,  4906,  4913,  4913,  4914,  4914,  4915,  4915,  4917,  4917,
    4918,  4918,  4919,  4919,  4920,  4920,  4921,  4921,  4922,  4922,
    4923,  4923,  4924,  4924,  4925,  4925,  4926,  4926,  4927,  4927,
    4928,  4928,  4929,  4929,  4930,  4930,  4931,  4931,  4932,  4932,
    4933,  4933,  4933,  4934,  4934,  4935,  4935,  4935,  4936,  4936,
    4937,  4937,  4938,  4938,  4939,  4939,  4940,  4940,  4941,  4941,
    4942,  4942,  4943,  4943,  4944,  4944,  4945,  4945,  4946,  4946,
    4947,  4947,  4948,  4948,  4949,  4949,  4950,  4950,  4951,  4951,
    4952,  4952,  4953,  4953,  4954,  4954,  4955,  4955,  4957,  4957,
    4958,  4958
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WORD", "LITERAL", "PICTURE", 
  "MNEMONIC_NAME", "FUNCTION_NAME", "TRIM_FUNCTION", "NUMVALC_FUNC", 
  "LOCALE_DT_FUNC", "ACCEPT", "ADD", "ADDRESS", "CALL", "CANCEL", "CLOSE", 
  "COMPUTE", "DELETE", "DISPLAY", "DIVIDE", "ENTRY", "EVALUATE", "IF", 
  "INITIALIZE", "INSPECT", "MERGE", "MOVE", "MULTIPLY", "OPEN", "PERFORM", 
  "READ", "RELEASE", "RETURN", "REWRITE", "SEARCH", "SET", "SORT", 
  "START", "STRING", "SUBTRACT", "UNSTRING", "WRITE", "WORKING_STORAGE", 
  "ZERO", "PACKED_DECIMAL", "RECURSIVE", "LINAGE", "FOOTING", "TOP", 
  "BOTTOM", "SHARING", "ONLY", "RECORDING", "LOCAL_STORAGE", "ACCESS", 
  "ADVANCING", "AFTER", "ALL", "ALPHABET", "ALPHABETIC", 
  "ALPHABETIC_LOWER", "AS", "ALPHABETIC_UPPER", "ALPHANUMERIC", 
  "ALPHANUMERIC_EDITED", "ALSO", "ALTER", "ALTERNATE", "AND", "ANY", 
  "ARE", "AREA", "ARGUMENT_NUMBER", "ARGUMENT_VALUE", "ASCENDING", 
  "ASSIGN", "AT", "AUTO", "BACKGROUND_COLOR", "BEFORE", "BELL", "BINARY", 
  "BLANK", "BLINK", "BLOCK", "BY", "CHARACTER", "CHARACTERS", "CLASS", 
  "CODE_SET", "CYCLE", "COLLATING", "COLUMN", "COMMA", "COMMAND_LINE", 
  "COMMIT", "COMMON", "CONFIGURATION", "CONTAINS", "CONTENT", "CONTINUE", 
  "CONVERTING", "CORRESPONDING", "COUNT", "CRT", "CURRENCY", "CURSOR", 
  "DATA", "DATE", "DAY", "DAY_OF_WEEK", "DEBUGGING", "DECIMAL_POINT", 
  "DECLARATIVES", "DEFAULT", "DELIMITED", "DELIMITER", "DEPENDING", 
  "DESCENDING", "DIVISION", "DOWN", "DUPLICATES", "DYNAMIC", "ELSE", 
  "END", "END_ACCEPT", "END_ADD", "END_CALL", "END_COMPUTE", "END_DELETE", 
  "END_DISPLAY", "END_DIVIDE", "END_EVALUATE", "END_IF", "END_MULTIPLY", 
  "END_PERFORM", "END_READ", "END_RETURN", "END_REWRITE", "END_SEARCH", 
  "END_START", "END_STRING", "END_SUBTRACT", "END_UNSTRING", "END_WRITE", 
  "ENVIRONMENT", "EBCDIC", "ENVIRONMENT_NAME", "ENVIRONMENT_VALUE", 
  "YYYYMMDD", "YYYYDDD", "EOL", "EOS", "EOP", "EQUAL", "ERASE", "ERROR", 
  "EXCEPTION", "EXIT", "EXTEND", "EXTERNAL", "FD", "GOBACK", 
  "FILE_CONTROL", "FILLER", "FIRST", "FOR", "FOREGROUND_COLOR", "FROM", 
  "FULL", "GE", "GIVING", "GLOBAL", "GO", "GREATER", "HIGHLIGHT", 
  "HIGH_VALUE", "IDENTIFICATION", "IN", "INDEX", "INDEXED", "INPUT", 
  "INPUT_OUTPUT", "INTO", "INVALID", "IS", "I_O", "I_O_CONTROL", 
  "JUSTIFIED", "KEY", "LABEL", "LE", "LEADING", "LEFT", "LENGTH", "LESS", 
  "LINE", "LINES", "LINKAGE", "LOCK", "LOWLIGHT", "LOW_VALUE", "MEMORY", 
  "MINUS", "MODE", "MULTIPLE", "NATIONAL", "NATIONAL_EDITED", "NATIVE", 
  "NE", "NEGATIVE", "NEXT", "NO", "NOT", "NUMBER", "NUMERIC", 
  "NUMERIC_EDITED", "OBJECT_COMPUTER", "OCCURS", "OF", "OFF", "OMITTED", 
  "ON", "OPTIONAL", "OR", "ORDER", "ORGANIZATION", "OTHER", "OUTPUT", 
  "OVERFLOW", "PADDING", "PAGE", "PLUS", "POINTER", "POSITION", 
  "POSITIVE", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM", 
  "PROGRAM_ID", "QUOTE", "RANDOM", "RECORD", "RECORDS", "REDEFINES", 
  "REEL", "REFERENCE", "RELATIVE", "REMAINDER", "REMOVAL", "RENAMES", 
  "REPLACING", "REQUIRED", "RESERVE", "RETURNING", "REVERSE_VIDEO", 
  "REWIND", "RIGHT", "ROUNDED", "RUN", "SAME", "SCREEN", "SD", "SECTION", 
  "SECURE", "SELECT", "SENTENCE", "SEPARATE", "SEQUENCE", "SEQUENTIAL", 
  "SIGN", "SIZE", "SORT_MERGE", "SOURCE_COMPUTER", "SPACE", 
  "SPECIAL_NAMES", "STANDARD", "STANDARD_1", "STANDARD_2", "STATUS", 
  "STOP", "SYMBOLIC", "SYNCHRONIZED", "TALLYING", "TAPE", "TEST", "THAN", 
  "THEN", "THRU", "TIME", "TIMES", "TO", "TOK_FILE", "TOK_INITIAL", 
  "TOK_TRUE", "TOK_FALSE", "TOK_NULL", "TRAILING", "UNDERLINE", "UNIT", 
  "UNTIL", "UP", "UPON", "USAGE", "USE", "USING", "VALUE", "VARYING", 
  "WHEN", "WITH", "MANUAL", "AUTOMATIC", "EXCLUSIVE", "ROLLBACK", 
  "OVERLINE", "PROMPT", "UPDATE", "ESCAPE", "COMP", "COMP_1", "COMP_2", 
  "COMP_3", "COMP_4", "COMP_5", "COMP_X", "SOURCE", "SCREEN_CONTROL", 
  "EVENT_STATUS", "LOCALE", "IGNORING", "SIGNED_SHORT", "SIGNED_INT", 
  "SIGNED_LONG", "UNSIGNED_SHORT", "UNSIGNED_INT", "UNSIGNED_LONG", 
  "BINARY_CHAR", "BINARY_SHORT", "BINARY_LONG", "BINARY_DOUBLE", "SIGNED", 
  "UNSIGNED", "LINAGE_COUNTER", "PROGRAM_POINTER", "CHAINING", 
  "BLANK_SCREEN", "BLANK_LINE", "NOT_EXCEPTION", "SIZE_ERROR", 
  "NOT_SIZE_ERROR", "NOT_OVERFLOW", "NOT_EOP", "INVALID_KEY", 
  "NOT_INVALID_KEY", "COMMA_DELIM", "DISK", "NO_ADVANCING", "PREVIOUS", 
  "UNLOCK", "ALLOCATE", "INITIALIZED", "FREE", "BASED", "PARAGRAPH", 
  "'+'", "'-'", "'*'", "'/'", "UNARY_SIGN", "'^'", "'.'", "'='", "'('", 
  "')'", "'>'", "'<'", "':'", "'&'", "$accept", "start", "@1", 
  "nested_list", "program_definition", "@2", "@3", "nested_prog", 
  "end_program", "identification_division", "program_name", "as_literal", 
  "program_type", "dot", "environment_division", "configuration_section", 
  "configuration_list", "configuration_paragraph", 
  "source_computer_paragraph", "source_computer_entry", 
  "with_debugging_mode", "computer_name", "object_computer_paragraph", 
  "object_computer_entry", "object_computer_phrase_sequence", 
  "object_computer_phrase", "special_names_paragraph", 
  "opt_special_names", "special_name_list", "special_name", 
  "mnemonic_name_clause", "@4", "special_name_mnemonic_define", 
  "special_name_mnemonic_on_off", "on_or_off", "alphabet_name_clause", 
  "alphabet_definition", "alphabet_literal_list", "alphabet_literal", 
  "@5", "alphabet_also_sequence", "@6", "alphabet_also_literal", 
  "symbolic_characters_clause", "symbolic_characters_list", 
  "symbolic_characters", "char_list", "integer_list", "class_name_clause", 
  "class_item_list", "class_item", "locale_clause", 
  "currency_sign_clause", "decimal_point_clause", "cursor_clause", 
  "crt_status_clause", "screen_control", "event_status", 
  "input_output_section", "file_control_paragraph", 
  "file_control_sequence", "file_control_entry", "@7", 
  "select_clause_sequence", "select_clause", "assign_clause", 
  "_ext_clause", "assignment_name", "access_mode_clause", "access_mode", 
  "alternative_record_key_clause", "collating_sequence_clause", 
  "file_status_clause", "lock_mode_clause", "lock_mode", "lock_with", 
  "organization_clause", "organization", "padding_character_clause", 
  "record_delimiter_clause", "record_key_clause", "opt_splitk", 
  "relative_key_clause", "reserve_clause", "sharing_clause", 
  "sharing_option", "i_o_control_paragraph", "opt_i_o_control", 
  "i_o_control_list", "i_o_control_clause", "same_clause", "same_option", 
  "multiple_file_tape_clause", "@8", "multiple_file_list", 
  "multiple_file", "multiple_file_position", "data_division", 
  "file_section", "@9", "@10", "file_description_sequence", 
  "file_description", "file_description_sequence_without_type", 
  "file_type", "file_description_entry", "@11", 
  "file_description_clause_sequence", "file_description_clause", 
  "block_contains_clause", "_records_or_characters", "record_clause", 
  "record_depending", "opt_from_integer", "opt_to_integer", 
  "label_records_clause", "label_option", "value_of_clause", 
  "data_records_clause", "linage_clause", "linage_sequence", 
  "linage_lines", "linage_footing", "linage_top", "linage_bottom", 
  "recording_mode_clause", "code_set_clause", "working_storage_section", 
  "@12", "record_description_list", "record_description_list_1", "@13", 
  "record_description_list_2", "data_description", "@14", "level_number", 
  "entry_name", "data_description_clause_sequence", 
  "data_description_clause", "redefines_clause", "external_clause", 
  "as_extname", "global_clause", "picture_clause", "usage_clause", 
  "usage", "sign_clause", "occurs_clause", "occurs_to_integer", 
  "occurs_depending", "occurs_keys", "occurs_key_list", 
  "ascending_or_descending", "occurs_indexed", "occurs_index_list", 
  "occurs_index", "justified_clause", "synchronized_clause", 
  "left_or_right", "blank_clause", "based_clause", "value_clause", "@15", 
  "value_item_list", "value_item", "false_is", "renames_clause", 
  "local_storage_section", "@16", "linkage_section", "@17", 
  "screen_section", "@18", "@19", "opt_screen_description_list", 
  "screen_description_list", "screen_description", "@20", 
  "screen_options", "screen_option", "screen_line_plus_minus", 
  "screen_col_plus_minus", "procedure_division", "@21", "@22", 
  "procedure_declaratives", "@23", "procedure_list", "procedure", 
  "section_header", "paragraph_header", "invalid_statement", 
  "section_name", "opt_segment", "statement_list", "@24", "@25", 
  "statements", "@26", "statement", "accept_statement", "@27", 
  "accept_body", "opt_at_line_column", "line_number", "column_number", 
  "opt_accp_attr", "accp_attrs", "accp_attr", "end_accept", 
  "add_statement", "@28", "add_body", "add_to", "end_add", 
  "allocate_statement", "@29", "allocate_body", "allocate_expr_or_x", 
  "allocate_returning", "alter_statement", "alter_options", "_proceed_to", 
  "call_statement", "@30", "using_chaining", "@31", "@32", "call_using", 
  "@33", "call_param_list", "call_param", "call_mode", "call_returning", 
  "call_on_exception", "call_not_on_exception", "end_call", 
  "cancel_statement", "@34", "cancel_list", "close_statement", "@35", 
  "close_list", "close_option", "reel_or_unit", "compute_statement", 
  "@36", "compute_body", "end_compute", "comp_equal", "commit_statement", 
  "continue_statement", "delete_statement", "@37", "end_delete", 
  "display_statement", "@38", "display_upon", "with_clause", "disp_attrs", 
  "disp_attr", "end_display", "divide_statement", "@39", "divide_body", 
  "end_divide", "entry_statement", "@40", "evaluate_statement", "@41", 
  "evaluate_subject_list", "evaluate_subject", "evaluate_case_list", 
  "evaluate_case", "evaluate_when_list", "evaluate_object_list", 
  "evaluate_object", "opt_evaluate_thru_expr", "end_evaluate", 
  "exit_statement", "@42", "exit_body", "free_statement", "@43", 
  "goto_statement", "@44", "goto_depending", "goback_statement", "@45", 
  "if_statement", "@46", "if_else_sentence", "end_if", 
  "initialize_statement", "@47", "initialize_filler", "initialize_value", 
  "initialize_replacing", "initialize_replacing_list", 
  "initialize_replacing_item", "initialize_category", 
  "initialize_default", "inspect_statement", "@48", "send_identifier", 
  "inspect_list", "inspect_item", "inspect_tallying", "@49", 
  "tallying_list", "tallying_item", "inspect_replacing", "replacing_list", 
  "replacing_item", "rep_keyword", "replacing_region", 
  "inspect_converting", "inspect_region", "_initial", "merge_statement", 
  "@50", "move_statement", "@51", "move_body", "multiply_statement", 
  "@52", "multiply_body", "end_multiply", "open_statement", "@53", 
  "open_list", "open_mode", "open_sharing", "open_option", 
  "perform_statement", "@54", "perform_body", "@55", "end_perform", 
  "perform_procedure", "perform_option", "perform_test", 
  "perform_varying_list", "perform_varying", "read_statement", "@56", 
  "read_into", "with_lock", "read_key", "read_handler", "end_read", 
  "release_statement", "@57", "return_statement", "@58", "end_return", 
  "rewrite_statement", "@59", "write_lock", "end_rewrite", 
  "rollback_statement", "search_statement", "@60", "search_body", 
  "search_varying", "search_at_end", "search_whens", "search_when", 
  "end_search", "set_statement", "@61", "set_body", "set_environment", 
  "set_to", "set_up_down", "up_or_down", "set_to_on_off_sequence", 
  "set_to_on_off", "set_to_true_false_sequence", "set_to_true_false", 
  "sort_statement", "@62", "sort_body", "@63", "sort_key_list", 
  "opt_key_list", "sort_duplicates", "sort_collating", "sort_input", 
  "sort_output", "start_statement", "@64", "@65", "start_key", "start_op", 
  "end_start", "stop_statement", "@66", "stop_returning", 
  "string_statement", "@67", "string_item_list", "string_item", 
  "opt_with_pointer", "end_string", "subtract_statement", "@68", 
  "subtract_body", "end_subtract", "unlock_statement", "@69", 
  "opt_record", "unstring_statement", "@70", "unstring_delimited", 
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into", 
  "unstring_into_item", "unstring_into_delimiter", "unstring_into_count", 
  "unstring_tallying", "end_unstring", "use_statement", "use_exception", 
  "use_exception_target", "_standard", "exception_or_error", 
  "use_debugging", "use_debugging_target", "write_statement", "@71", 
  "write_from", "write_option", "before_or_after", "write_handler", 
  "end_write", "on_accp_exception", "on_disp_exception", 
  "opt_on_exception", "opt_not_on_exception", "on_size_error", 
  "opt_on_size_error", "opt_not_on_size_error", "on_overflow", 
  "opt_on_overflow", "opt_not_on_overflow", "at_end", "at_end_sentence", 
  "not_at_end_sentence", "at_eop", "at_eop_sentence", 
  "not_at_eop_sentence", "opt_invalid_key", "invalid_key", 
  "invalid_key_sentence", "not_invalid_key_sentence", "condition", "expr", 
  "partial_expr", "@72", "expr_tokens", "expr_token", "eq", "gt", "lt", 
  "ge", "le", "e_list", "e_sep", "e", "linage_counter", 
  "arithmetic_x_list", "arithmetic_x", "record_name", "table_name", 
  "file_name_list", "file_name", "mnemonic_name_list", "mnemonic_name", 
  "procedure_name_list", "procedure_name", "label", "integer_label", 
  "reference_list", "reference", "opt_reference", "reference_or_literal", 
  "undefined_word", "target_x_list", "target_x", "x_list", "x", 
  "prog_or_entry", "alnum_or_id", "simple_value", "id_or_lit", 
  "identifier", "identifier_1", "qualified_word", "subref", "refmod", 
  "integer", "literal", "basic_literal", "alnum_literal", "function", 
  "func_args", "list_func_args", "trim_args", "numvalc_args", 
  "locale_dt_args", "flag_all", "flag_duplicates", "flag_global", 
  "flag_initialized", "flag_next", "flag_not", "flag_optional", 
  "flag_rounded", "flag_separate", "in_of", "is_are", "records", 
  "_advancing", "_are", "_area", "_at", "_by", "_character", 
  "_characters", "_collating", "_contains", "_data", "_disk", "_file", 
  "_for", "_from", "_in", "_is", "_is_are", "_key", "_line_or_lines", 
  "_lines", "_mode", "_number", "_of", "_on", "_order", "_other", 
  "_program", "_record", "_right", "_set", "_sign", "_sign_is", "_size", 
  "_status", "_tape", "_than", "_then", "_times", "_to", "_when", "_with", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,    43,    45,    42,    47,
     621,    94,    46,    61,    40,    41,    62,    60,    58,    38
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   380,   382,   381,   383,   383,   385,   386,   384,   387,
     387,   387,   388,   388,   389,   390,   390,   391,   391,   392,
     392,   392,   392,   393,   393,   394,   394,   395,   395,   396,
     396,   397,   397,   397,   398,   399,   399,   399,   399,   399,
     400,   401,   402,   403,   403,   403,   403,   403,   404,   404,
     405,   405,   406,   407,   407,   408,   408,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   411,   410,
     412,   412,   412,   413,   413,   414,   414,   415,   416,   416,
     416,   416,   416,   417,   417,   418,   418,   419,   418,   420,
     421,   420,   422,   422,   422,   422,   422,   422,   423,   424,
     424,   425,   426,   426,   427,   427,   428,   429,   429,   430,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   438,
     439,   439,   440,   440,   442,   441,   443,   443,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   445,   446,   446,   446,   447,   447,   447,   448,   449,
     449,   449,   450,   451,   452,   453,   454,   454,   454,   455,
     455,   455,   455,   456,   456,   457,   457,   457,   457,   458,
     459,   460,   461,   461,   461,   462,   463,   464,   465,   465,
     465,   466,   466,   467,   467,   468,   468,   469,   469,   470,
     471,   471,   471,   471,   473,   472,   474,   474,   475,   476,
     476,   477,   477,   478,   479,   478,   480,   478,   481,   481,
     482,   483,   483,   484,   484,   486,   485,   487,   487,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   489,
     490,   490,   490,   491,   491,   491,   492,   492,   493,   493,
     494,   494,   495,   496,   496,   497,   498,   499,   500,   500,
     501,   501,   501,   502,   503,   504,   505,   506,   507,   508,
     507,   509,   509,   511,   510,   512,   512,   512,   514,   513,
     515,   516,   516,   516,   517,   517,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   519,
     520,   521,   521,   522,   523,   524,   524,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   526,   526,
     527,   528,   528,   529,   529,   530,   531,   531,   532,   532,
     533,   533,   534,   534,   535,   536,   537,   538,   538,   538,
     539,   540,   542,   541,   543,   543,   544,   544,   545,   545,
     546,   546,   547,   548,   547,   549,   550,   549,   551,   552,
     553,   551,   554,   554,   555,   555,   557,   556,   558,   558,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   560,
     560,   560,   561,   561,   561,   562,   563,   564,   562,   565,
     566,   565,   567,   567,   568,   568,   568,   568,   568,   568,
     569,   570,   571,   572,   573,   573,   575,   576,   574,   578,
     577,   577,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   581,   580,   582,   582,
     582,   582,   582,   582,   582,   582,   582,   582,   582,   582,
     582,   582,   582,   583,   583,   583,   583,   583,   583,   584,
     585,   586,   586,   587,   587,   588,   588,   588,   588,   588,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   589,
     589,   591,   590,   592,   592,   592,   593,   593,   594,   594,
     596,   595,   597,   597,   598,   598,   599,   599,   600,   601,
     601,   602,   602,   604,   603,   605,   606,   605,   607,   605,
     608,   609,   608,   610,   610,   611,   611,   611,   611,   612,
     612,   612,   613,   613,   613,   614,   614,   614,   615,   615,
     616,   616,   618,   617,   619,   619,   621,   620,   622,   622,
     623,   623,   623,   623,   623,   624,   624,   626,   625,   627,
     628,   628,   629,   629,   630,   631,   633,   632,   634,   634,
     636,   635,   637,   637,   637,   637,   637,   637,   637,   638,
     638,   638,   639,   639,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   641,   641,   643,
     642,   644,   644,   644,   644,   644,   645,   645,   647,   646,
     649,   648,   650,   650,   651,   651,   651,   652,   652,   653,
     653,   654,   654,   655,   655,   656,   656,   656,   656,   657,
     657,   658,   658,   660,   659,   661,   661,   661,   661,   661,
     661,   663,   662,   665,   664,   666,   666,   668,   667,   670,
     669,   669,   671,   671,   672,   672,   674,   673,   675,   675,
     676,   676,   676,   677,   677,   678,   678,   679,   680,   680,
     680,   680,   680,   680,   680,   681,   681,   683,   682,   684,
     684,   684,   685,   685,   686,   686,   686,   688,   687,   689,
     689,   690,   690,   690,   690,   690,   690,   691,   692,   692,
     693,   693,   694,   694,   694,   694,   694,   695,   696,   697,
     697,   698,   698,   700,   699,   702,   701,   703,   703,   705,
     704,   706,   706,   707,   707,   709,   708,   710,   710,   711,
     711,   711,   711,   712,   712,   713,   713,   713,   715,   714,
     716,   717,   716,   716,   718,   718,   719,   719,   720,   720,
     720,   720,   721,   721,   722,   722,   723,   725,   724,   726,
     726,   727,   727,   727,   727,   728,   728,   729,   729,   729,
     730,   730,   732,   731,   734,   733,   735,   735,   737,   736,
     738,   738,   738,   739,   739,   740,   742,   741,   743,   743,
     744,   744,   745,   745,   746,   746,   747,   748,   748,   750,
     749,   751,   751,   751,   751,   751,   752,   753,   754,   755,
     755,   756,   756,   757,   758,   758,   759,   759,   761,   760,
     763,   762,   764,   764,   765,   765,   766,   766,   767,   767,
     768,   768,   768,   769,   769,   769,   771,   772,   770,   773,
     773,   774,   774,   774,   774,   774,   775,   775,   777,   776,
     776,   778,   778,   778,   780,   779,   781,   781,   782,   782,
     782,   783,   783,   784,   784,   786,   785,   787,   787,   787,
     788,   788,   790,   789,   791,   791,   791,   793,   792,   794,
     794,   795,   795,   796,   797,   797,   798,   799,   799,   800,
     800,   801,   801,   802,   802,   803,   803,   804,   805,   805,
     805,   805,   805,   806,   806,   807,   807,   808,   809,   809,
     811,   810,   812,   812,   813,   813,   813,   813,   814,   814,
     815,   815,   815,   816,   816,   817,   818,   819,   819,   820,
     820,   821,   822,   822,   823,   823,   824,   825,   825,   826,
     826,   827,   827,   827,   828,   828,   829,   830,   830,   830,
     831,   832,   833,   833,   834,   834,   834,   835,   836,   837,
     838,   840,   839,   841,   841,   841,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     843,   843,   844,   844,   845,   845,   846,   846,   847,   847,
     848,   848,   849,   849,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   851,   851,   852,   852,   853,   854,   855,
     856,   856,   857,   858,   858,   859,   860,   860,   861,   862,
     862,   862,   863,   864,   864,   865,   866,   866,   867,   867,
     868,   869,   869,   870,   870,   870,   870,   871,   871,   872,
     872,   872,   872,   872,   872,   872,   872,   873,   873,   874,
     874,   874,   875,   875,   876,   876,   877,   878,   878,   878,
     878,   879,   879,   880,   881,   881,   882,   883,   883,   884,
     884,   884,   884,   884,   884,   884,   885,   885,   886,   886,
     886,   886,   887,   887,   888,   888,   889,   889,   889,   890,
     890,   891,   891,   892,   892,   893,   893,   894,   894,   895,
     895,   896,   896,   896,   897,   897,   898,   898,   899,   899,
     900,   900,   901,   901,   902,   902,   903,   903,   904,   904,
     905,   905,   906,   906,   907,   907,   908,   908,   909,   909,
     910,   910,   911,   911,   912,   912,   913,   913,   914,   914,
     915,   915,   916,   916,   917,   917,   918,   918,   919,   919,
     920,   920,   920,   921,   921,   922,   922,   922,   923,   923,
     924,   924,   925,   925,   926,   926,   927,   927,   928,   928,
     929,   929,   930,   930,   931,   931,   932,   932,   933,   933,
     934,   934,   935,   935,   936,   936,   937,   937,   938,   938,
     939,   939,   940,   940,   941,   941,   942,   942,   943,   943,
     944,   944
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     2,     0,     0,     8,     0,
       1,     2,     0,     4,     6,     1,     1,     0,     2,     0,
       3,     3,     3,     0,     1,     0,     5,     0,     4,     0,
       2,     1,     1,     1,     3,     0,     1,     2,     3,     2,
       3,     1,     3,     0,     1,     2,     3,     2,     0,     2,
       5,     5,     3,     0,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     2,     2,     0,     5,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     0,     4,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     4,     1,     2,     1,
       3,     4,     4,     3,     3,     4,     3,     3,     0,     5,
       0,     3,     0,     2,     0,     6,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     7,     4,     5,     4,     2,     2,     1,     0,
       4,     5,     2,     3,     1,     1,     1,     1,     2,     4,
       4,     5,     0,     2,     3,     4,     3,     3,     2,     2,
       2,     0,     3,     0,     2,     1,     2,     1,     1,     5,
       0,     1,     1,     1,     0,     6,     1,     2,     2,     0,
       2,     0,     8,     0,     0,     5,     0,     3,     0,     2,
       3,     2,     2,     1,     1,     0,     4,     0,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     1,     4,     6,     9,     0,     3,     0,     2,
       0,     2,     3,     1,     1,     3,     3,     5,     0,     2,
       1,     1,     1,     5,     4,     3,     4,     3,     0,     0,
       5,     0,     1,     0,     2,     2,     3,     2,     0,     4,
       1,     0,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     0,     2,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     3,     3,
       7,     0,     2,     0,     3,     1,     0,     5,     1,     1,
       0,     3,     1,     2,     1,     2,     2,     0,     1,     1,
       3,     1,     0,     8,     1,     2,     1,     3,     0,     3,
       2,     4,     0,     0,     5,     0,     0,     5,     0,     0,
       0,     6,     0,     1,     1,     2,     0,     5,     0,     2,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     0,
       1,     1,     0,     1,     1,     0,     0,     0,     8,     0,
       0,     7,     0,     2,     1,     1,     1,     2,     2,     1,
       4,     2,     1,     1,     0,     1,     0,     0,     3,     0,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     4,     3,     4,
       3,     4,     3,     4,     3,     3,     3,     4,     5,     3,
       4,     3,     3,     0,     3,     3,     2,     2,     2,     3,
       3,     0,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     0,
       1,     0,     4,     4,     5,     6,     0,     2,     0,     1,
       0,     3,     5,     3,     1,     1,     0,     2,     2,     0,
       5,     0,     2,     0,     8,     0,     0,     3,     0,     3,
       0,     0,     3,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     0,     2,     2,     0,     2,     2,     0,     2,
       0,     1,     0,     3,     0,     2,     0,     3,     0,     3,
       0,     1,     3,     3,     2,     1,     1,     0,     4,     4,
       0,     1,     1,     1,     1,     1,     0,     6,     0,     1,
       0,     8,     0,     2,     2,     2,     2,     2,     2,     0,
       2,     2,     1,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     0,     1,     0,
       4,     4,     6,     6,     8,     8,     0,     1,     0,     4,
       0,     5,     1,     3,     1,     1,     1,     0,     2,     2,
       3,     2,     3,     1,     3,     2,     1,     1,     1,     0,
       2,     0,     1,     0,     3,     0,     1,     1,     2,     1,
       1,     0,     3,     0,     5,     0,     3,     0,     2,     0,
       7,     3,     0,     2,     0,     1,     0,     7,     0,     2,
       0,     3,     3,     0,     2,     1,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     4,     1,
       1,     1,     0,     2,     1,     1,     1,     0,     3,     1,
       2,     2,     2,     1,     1,     1,     2,     2,     1,     2,
       4,     2,     0,     1,     1,     1,     1,     4,     5,     0,
       4,     0,     1,     0,     3,     0,     3,     3,     4,     0,
       4,     4,     6,     0,     1,     0,     3,     0,     5,     1,
       1,     1,     1,     0,     3,     0,     3,     2,     0,     3,
       2,     0,     4,     2,     0,     1,     1,     3,     0,     2,
       3,     3,     0,     3,     1,     3,     7,     0,    10,     0,
       2,     0,     2,     2,     3,     0,     3,     0,     1,     1,
       0,     1,     0,     4,     0,     7,     0,     1,     0,     7,
       0,     2,     3,     0,     1,     1,     0,     4,     4,     6,
       0,     2,     0,     3,     1,     2,     3,     0,     1,     0,
       3,     1,     1,     1,     1,     1,     4,     3,     4,     1,
       1,     1,     2,     3,     1,     2,     3,     3,     0,     3,
       0,     7,     0,     5,     0,     2,     0,     4,     0,     4,
       0,     2,     4,     0,     2,     4,     0,     0,     7,     0,
       4,     2,     2,     2,     2,     2,     0,     1,     0,     4,
       2,     0,     2,     2,     0,     8,     1,     2,     1,     3,
       3,     0,     3,     0,     1,     0,     4,     4,     6,     6,
       0,     1,     0,     4,     0,     1,     1,     0,     9,     0,
       3,     1,     3,     2,     2,     2,     3,     0,     3,     0,
       3,     0,     3,     0,     1,     1,     1,     8,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     5,     1,     2,
       0,     8,     0,     2,     0,     4,     3,     3,     1,     1,
       0,     1,     1,     0,     1,     2,     2,     0,     2,     0,
       2,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     1,     1,     2,     2,     3,     4,     1,     1,     2,
       2,     2,     0,     1,     1,     1,     2,     2,     2,     1,
       1,     0,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     5,     1,     5,
       1,     3,     0,     1,     1,     3,     2,     2,     3,     3,
       3,     3,     3,     1,     3,     1,     2,     2,     1,     1,
       1,     2,     1,     1,     2,     1,     0,     2,     1,     1,
       1,     3,     1,     1,     2,     1,     0,     1,     1,     1,
       1,     1,     2,     1,     4,     3,     1,     1,     2,     1,
       3,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     1,     3,     3,     4,     5,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     4,
       4,     4,     0,     3,     0,     1,     1,     3,     3,     1,
       3,     1,     3,     0,     1,     0,     2,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     2,     1,     1,     1,     1,     2,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     0,     1,     0,     3,     4,    25,     0,     5,
       0,     6,    15,    16,    17,     0,   201,     0,    19,    27,
       0,     7,    18,  1199,    23,     0,     0,   118,     0,   415,
      24,    14,  1222,  1222,  1222,     0,     0,    26,   203,     0,
       9,  1223,    22,    20,    21,    29,     0,   213,   214,     0,
     258,   206,   555,    10,    12,    28,   120,     0,     0,   362,
       0,   556,   558,     0,     0,    11,     8,     0,     0,     0,
      30,    31,    32,    33,     0,   181,   204,     0,     0,   365,
    1111,   207,   261,   215,  1062,  1176,  1176,   416,     0,    43,
      35,    53,   122,     0,   119,   208,   259,     0,     0,   368,
    1162,  1163,     0,   212,     0,   211,   262,     0,   217,  1126,
    1132,     0,     0,     0,  1214,  1121,     0,  1177,  1123,  1214,
    1124,   565,  1122,  1120,  1125,  1053,  1176,   563,  1096,   567,
    1089,  1106,  1107,  1094,  1117,  1119,  1095,     0,  1176,   419,
       0,    41,    44,    48,    42,  1222,  1251,    36,    34,     0,
    1250,     0,    68,     0,     0,     0,  1230,  1198,  1198,  1180,
    1198,  1198,     0,    52,     0,    55,    57,    58,    59,    60,
      63,    61,    62,    64,    65,    66,    67,   121,   183,   205,
     261,   363,     0,     0,   202,  1112,   261,   270,   264,     0,
     271,  1198,  1134,  1128,     0,     0,     0,  1215,     0,  1118,
       0,     0,   564,     0,  1108,  1109,     0,   570,   569,   571,
       0,     0,   417,    13,    45,  1222,     0,    47,    49,  1182,
      39,    37,     0,     0,    70,  1080,  1198,  1198,  1198,  1231,
    1198,     0,     0,  1181,     0,     0,     0,  1198,    54,    56,
    1156,   123,  1190,   190,   182,     0,   185,   187,   188,   209,
     260,   261,   366,     0,   210,   267,     0,   265,   273,   272,
     268,  1198,  1198,  1210,  1184,  1198,     0,     0,  1184,   216,
     218,   221,   222,   223,   224,   225,   226,   227,   228,     0,
       0,     0,     0,  1042,  1040,  1044,     0,  1042,     0,  1042,
       0,  1042,     0,  1098,  1097,     0,  1093,  1090,  1091,  1054,
    1042,  1040,     0,  1110,  1127,   566,   568,   420,   422,    46,
    1198,  1183,     0,    38,    40,     0,    73,     0,     0,     0,
       0,   114,  1075,   113,   102,    98,    99,     0,   116,   117,
       0,  1157,     0,  1191,  1238,   192,   191,   193,  1172,   184,
     186,   364,   261,   369,   266,   274,     0,     0,  1211,  1198,
    1185,     0,     0,  1198,  1170,     0,     0,     0,     0,   219,
     220,  1046,  1047,     0,  1043,     0,     0,     0,     0,     0,
       0,  1133,     0,  1129,     0,  1130,     0,  1131,  1101,  1092,
    1099,  1100,  1113,     0,     0,   422,     0,     0,  1198,    71,
      72,    69,    85,    81,    78,    79,    80,    77,    82,    83,
     106,   107,   109,   115,   112,   100,   103,  1165,  1164,     0,
     111,   124,  1239,   194,  1173,  1192,   367,   370,  1198,   245,
    1078,  1208,  1079,     0,  1116,   240,   257,  1166,  1171,  1167,
     246,  1073,   244,   243,   242,  1180,  1196,  1045,  1041,  1048,
    1049,  1050,  1051,  1052,  1137,  1138,  1140,  1142,  1114,     0,
       0,     0,   433,   429,   423,   424,   425,   426,   432,     0,
       0,     0,     0,    76,    75,  1236,    87,     0,    84,   108,
       0,   101,   104,   126,  1184,  1193,     0,   372,   294,   305,
     307,   297,  1248,   306,  1226,     0,   308,     0,     0,  1198,
     347,  1198,  1200,   298,   299,   300,   301,   302,   303,   304,
     310,   311,   312,   313,   314,   315,   318,   321,   324,   327,
     309,   351,   275,   276,   277,   278,   279,   280,   295,   281,
     282,   283,   284,   285,   286,   287,   288,     0,     0,  1209,
     248,   256,     0,   230,  1074,     0,   233,  1197,  1234,  1115,
       0,   428,   431,   434,   486,   531,   553,   582,   586,   597,
     606,   610,   639,   648,   650,     0,   696,   717,   753,   755,
     759,   765,   778,   797,   812,   814,   818,   826,   839,   858,
     876,   894,   905,   917,   950,   549,   604,   605,   673,   687,
    1246,     0,     0,  1147,   825,   912,   540,   681,   427,   441,
     442,   443,   444,   445,   446,   447,   448,   450,   449,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   935,   936,   484,   440,    51,    50,  1237,  1198,
       0,    86,   110,   105,  1182,     0,   189,  1060,   271,   371,
     373,   374,  1249,     0,  1227,   345,   331,   289,   360,  1233,
     348,   349,   346,     0,  1202,  1201,     0,   316,   317,   319,
     320,   322,   323,   325,   326,   291,   293,  1160,  1160,   247,
     241,   232,   231,   229,  1180,  1235,   238,     0,     0,   435,
       0,     0,     0,   584,   588,     0,     0,     0,     0,     0,
    1001,     0,  1001,     0,     0,     0,     0,     0,   767,   788,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   548,   675,   688,  1247,   683,   485,   888,   890,
    1148,     0,     0,     0,  1001,     0,     0,    92,    94,    96,
      97,    95,    93,    88,    89,  1250,  1210,     0,  1246,   165,
       0,  1210,  1198,  1178,  1203,   167,     0,   166,   125,   127,
     128,   129,   130,   131,   132,   133,   134,   164,   135,   136,
     137,   138,   139,   140,     0,     0,   195,   196,   199,  1061,
     376,   375,   350,     0,  1244,     0,   296,   352,   354,   356,
       0,   290,  1178,   328,   329,  1175,   249,   250,   251,   252,
       0,     0,   234,  1195,   240,     0,   421,   430,   529,   503,
       0,   538,   536,  1087,  1105,   560,  1104,   583,   587,   600,
       0,  1055,  1158,  1224,   503,   646,     0,   560,   655,   656,
     657,   652,   654,  1000,     0,   691,  1242,   999,  1214,  1086,
     698,  1081,  1083,   722,   719,   720,   721,   754,   862,     0,
     756,     0,   763,     0,   766,  1072,   779,   788,   781,     0,
     786,  1068,  1070,     0,  1069,     0,  1151,   952,  1058,  1224,
     952,     0,   837,   830,  1059,  1065,     0,   840,   841,   842,
     843,   844,   851,   845,   854,     0,  1063,     0,   859,   877,
    1176,     0,   896,   898,     0,   910,     0,   919,   952,  1072,
       0,  1069,   677,   676,   679,   680,   674,  1066,   891,   943,
    1216,   914,  1214,   541,     0,   544,  1086,  1149,   545,  1083,
     682,    74,    90,     0,  1198,  1203,   142,   168,  1198,     0,
    1179,  1198,  1198,  1204,  1198,  1198,  1172,  1198,  1198,   197,
       0,   198,   378,   332,  1245,   333,   361,  1248,   355,     0,
     292,  1161,     0,     0,  1174,  1180,   239,   530,   487,  1175,
       0,   511,     0,     0,   539,   532,     0,     0,  1088,   561,
     572,   585,   590,   601,   598,   603,   602,  1001,  1056,  1159,
    1057,  1225,   992,   612,   647,   640,     0,     0,   649,  1001,
     671,  1025,  1026,  1027,  1021,  1246,  1017,  1240,  1018,  1240,
    1019,  1029,  1020,  1024,  1023,  1022,  1028,  1009,  1010,  1011,
    1012,  1013,  1030,  1007,  1008,  1032,  1034,  1002,  1003,  1014,
    1015,  1016,  1006,  1243,   436,     0,   700,  1082,     0,   718,
     866,     0,     0,   764,   760,     0,   772,   769,   771,   770,
     773,   780,   783,   436,  1001,     0,     0,     0,   789,     0,
    1152,  1153,  1224,     0,   813,   799,   820,   832,   838,   827,
       0,   832,     0,  1102,  1103,   852,   855,     0,     0,  1064,
     850,     0,   849,     0,   879,     0,     0,   897,     0,   911,
     906,     0,  1176,     0,   820,   551,   678,   685,     0,     0,
     889,   944,     0,  1217,     0,   915,   916,   913,     0,  1149,
    1150,   546,     0,     0,  1220,  1220,   177,     0,  1198,   144,
     143,  1188,     0,   167,   163,     0,     0,     0,     0,   176,
       0,     0,   200,  1232,  1216,   336,  1228,   357,  1208,   255,
       0,   236,   508,   502,   499,   967,   496,   490,   492,   494,
       0,   967,   495,     0,   501,     0,   488,  1212,  1212,   506,
     507,     0,   972,  1158,     0,  1176,     0,     0,   575,   595,
     596,   589,   591,     0,   972,   436,   436,   608,   993,   994,
     995,     0,   619,     0,   972,  1158,   653,   672,  1001,   658,
     436,   651,  1031,  1241,  1033,  1035,  1004,  1005,   692,   437,
       0,  1085,  1246,   708,   709,   711,   713,   714,   710,   712,
     703,  1246,   699,     0,   742,   727,   723,   724,   725,   726,
     868,     0,     0,     0,   757,   972,  1158,  1250,     0,   784,
     790,   791,   794,     0,   787,  1071,   959,   958,   793,   799,
     953,     0,     0,   992,     0,     0,     0,   831,     0,     0,
       0,   853,   856,   857,   847,     0,  1198,   992,   899,   900,
     901,     0,   972,  1158,  1143,     0,   901,   954,     0,     0,
    1216,   684,  1067,   893,   892,   946,   945,     0,     0,   947,
     948,     0,  1085,     0,     0,   543,    91,   180,  1221,   178,
     179,   150,   151,   149,   148,     0,  1189,     0,   159,   159,
     158,   155,   169,   170,   172,   175,   153,  1076,   391,  1198,
     382,   383,  1212,     0,  1198,     0,   394,   386,  1212,   387,
     393,   388,   392,     0,   389,     0,   390,     0,   381,   380,
     377,   405,   400,   403,   402,   401,   404,   379,     0,   340,
     335,  1229,  1246,   254,  1208,  1216,   235,   436,   500,   969,
     491,   493,   967,   497,   489,   515,  1198,   516,   517,  1198,
     518,   519,   520,   521,   522,   523,   524,  1178,   525,   512,
     513,  1213,     0,     0,   504,   505,  1158,   436,   533,   974,
     972,   562,   574,   573,   436,   436,   578,     0,   594,     0,
     599,   997,   998,   609,   607,   996,   614,   618,   615,   616,
     617,   613,  1251,   967,     0,     0,   641,     0,   666,   436,
     667,   668,   661,   663,   669,  1001,   659,   436,   694,   439,
    1084,     0,     0,   715,     0,     0,   743,     0,   745,   744,
     746,   737,   738,     0,     0,   860,     0,   338,   339,  1203,
    1196,   758,   761,     0,     0,   775,   785,   782,     0,     0,
     801,   800,     0,   436,  1174,   816,   981,   982,   823,   821,
       0,  1001,   436,  1001,   828,   834,   846,   848,  1154,   886,
     977,     0,  1158,   907,     0,  1144,   920,   921,     0,   924,
     927,   931,   925,   960,  1168,   552,   550,     0,  1216,   949,
    1084,     0,   547,   172,   146,   141,   147,   145,     0,   156,
     157,  1198,     0,   171,  1077,   154,     0,  1198,   384,   385,
       0,   407,  1198,   408,   406,  1198,   334,  1176,   330,  1203,
     358,   253,     0,   968,   436,   965,   498,     0,     0,  1198,
     514,   510,   509,   972,   973,   436,   971,   534,   577,   576,
     436,   580,   592,   593,  1198,   624,   625,     0,  1198,   628,
     629,   630,   631,   632,   636,   635,   621,   622,   637,   969,
     620,   972,  1055,   972,  1055,   660,  1001,  1001,   665,   662,
     693,   695,   690,   438,   701,   704,   705,  1186,   716,   697,
     702,     0,     0,   739,   741,     0,   733,   749,   734,   735,
     728,   729,   749,   870,  1198,   864,  1218,   972,   774,   768,
       0,   795,     0,     0,   805,     0,   436,   984,     0,   817,
     815,   983,   824,   819,   822,   436,   833,   436,   835,  1155,
       0,     0,   887,   878,   436,   903,   979,     0,   972,   972,
    1143,   923,  1196,   929,  1196,   977,   436,   436,   963,   961,
     987,   988,   962,  1169,     0,   686,     0,   542,  1145,     0,
     162,     0,   173,   399,   412,   398,   409,     0,     0,  1198,
    1198,   353,   237,   970,   527,   526,     0,   535,   975,   579,
     581,   554,     0,   626,   627,     0,   623,   638,   611,   966,
     643,     0,   642,     0,   664,   670,   706,  1187,     0,   749,
     749,     0,   732,   730,   731,   736,     0,     0,   873,     0,
     863,  1219,   867,   762,   777,     0,     0,   802,  1198,   807,
     803,     0,   985,   436,   829,   836,   880,  1036,  1240,  1038,
    1240,   881,   882,   883,   884,   885,   978,   904,   895,   436,
     976,   902,   909,   908,   922,     0,  1196,   926,     0,   933,
     990,   991,   964,   951,   989,   957,   956,  1205,   942,   939,
     941,   940,   937,   938,   152,     0,     0,   174,   414,   413,
       0,   411,   410,     0,   395,   344,   341,   342,     0,     0,
     528,   634,   633,   972,   972,     0,   748,   740,   749,   751,
    1198,   871,     0,     0,   861,   869,   865,   776,     0,     0,
     810,   808,   809,   804,   986,  1033,  1035,   980,   928,     0,
     932,   934,   918,  1206,  1207,   955,  1146,     0,   160,   397,
     396,   343,   337,   359,   645,   644,   707,   747,   752,     0,
       0,   874,  1198,  1001,   806,   811,   798,     0,     0,   930,
     161,   750,   872,     0,   796,  1246,  1246,   875,  1037,  1039
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     5,     6,    16,    29,    54,    66,     7,
      14,    18,    24,    31,    11,    27,    55,    70,    71,   148,
     149,   143,    72,   144,   145,   218,    73,   163,   164,   165,
     166,   224,   316,   391,   465,   167,   397,   398,   399,   640,
     743,  1102,   744,   168,   325,   326,   327,   471,   169,   400,
     401,   170,   171,   172,   173,   174,   175,   176,    37,    75,
     177,   241,   473,   644,   759,   760,  1111,  1485,   761,  1284,
     762,   763,   764,   765,  1291,  1489,   766,   767,   768,   769,
     770,  1493,   771,   772,   773,  1106,    94,   244,   245,   246,
     247,   338,   248,   474,   776,   777,   941,    21,    50,    95,
      60,   179,   103,    81,   104,    82,   108,   191,   270,   271,
     683,   272,  1336,   804,   533,   273,   434,   274,   275,   276,
     679,   796,   797,   798,   799,   277,   278,    59,   180,   105,
     106,   107,   188,   189,   345,   190,   260,   418,   512,   513,
     514,   791,   515,   516,   517,   518,   519,   520,   784,  1125,
    1329,  1330,  1429,  1508,  1756,  1757,   521,   522,   662,   523,
     524,   525,   947,   787,   788,  1651,   526,    79,   251,    99,
     342,   184,   417,   477,   649,   650,   651,   942,  1123,  1327,
    1753,  1750,    40,   139,   308,   212,   385,   386,   454,   455,
     456,   457,   458,   688,  1188,  1189,  1409,   459,   460,   589,
     590,   690,   808,   961,  1149,  1150,  1146,  1359,  1360,   958,
     591,   691,   811,   967,   965,   592,   734,   913,   914,  1275,
     593,   722,  1259,   594,   692,    63,    85,    86,   970,  1155,
     126,   127,   210,  1158,  1376,  1531,  1661,   595,   693,   817,
     596,   694,   818,  1161,  1162,   597,   695,   819,   974,   977,
     598,   599,   600,   696,  1384,   601,   697,  1172,  1393,  1546,
    1547,  1668,   602,   698,   825,   985,   603,   699,   604,   700,
     830,   831,   990,  1179,  1180,  1402,  1403,  1558,  1181,   605,
     723,   906,   606,   735,   607,   907,  1261,   608,   724,   609,
     702,  1408,  1562,   610,   703,  1026,  1200,  1413,  1565,  1566,
    1567,  1569,   611,   704,   843,  1029,  1206,  1207,  1424,  1580,
    1581,  1208,  1421,  1422,  1423,  1574,  1209,  1682,  1809,   612,
     705,   613,   706,   850,   614,   707,   852,  1034,   615,   708,
     854,  1040,  1218,  1589,   616,   709,   856,  1043,  1437,   857,
     858,   859,  1221,  1222,   617,   710,  1232,  1594,  1699,  1780,
    1816,   618,   711,   619,   712,  1600,   620,   713,  1233,  1603,
     621,   622,   714,   872,  1061,  1235,  1454,  1455,  1059,   623,
     715,   877,   878,   879,   880,  1073,   881,   882,   883,   884,
     624,   716,   847,  1583,  1030,  1690,  1210,  1425,  1688,  1774,
     625,   717,  1074,  1247,  1610,  1613,   626,   908,  1090,   627,
     718,   891,   892,  1460,  1718,   628,   719,   895,  1080,   629,
     733,  1097,   630,   720,  1083,  1466,  1467,  1256,  1469,  1623,
    1727,  1625,  1792,   631,   632,  1742,  1092,  1267,   633,  1269,
     634,   721,  1054,  1473,  1769,  1628,  1733,  1338,  1548,  1339,
    1515,  1368,  1369,  1526,  1615,  1616,  1720,  1445,  1446,  1447,
    1629,  1630,  1631,  1167,  1168,  1169,  1170,   836,   837,   833,
     834,  1017,  1018,  1019,  1020,  1021,  1714,  1715,   283,   365,
     284,   128,   820,   978,   867,   873,   646,   647,   885,   886,
    1087,   860,   861,   862,   430,   420,  1495,   421,   226,   840,
     841,   812,   822,   295,   379,  1582,   815,   130,   131,   132,
     204,   205,   425,   133,   134,   135,   136,   193,   286,   288,
     290,   292,  1468,  1744,   731,  1101,  1052,  1611,   332,   980,
     793,   102,   409,   355,  1634,   429,   415,   962,   137,   931,
     234,   312,   351,  1678,  1287,   334,   476,   805,   538,    25,
     666,   934,  1795,   530,   349,  1362,   198,  1094,  1692,  1279,
     219,   982,   655,  1332,   230,   528,   686,   639,   413,  1184,
    1024,   945,   726,   653,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1412
static const short yypact[] =
{
   -1412,   151,   -74, -1412,  -195,   -74, -1412,    57,   798, -1412,
     412, -1412, -1412, -1412,   121,   129,   416,   720,    13,   477,
     445, -1412, -1412, -1412,   360,    18,   475,   568,   383,   559,
   -1412, -1412,   575,   575,   575,   473,   582, -1412,   272,   703,
     -74, -1412, -1412, -1412, -1412, -1412,   485, -1412, -1412,   599,
     824, -1412,   165, -1412,     9,   275,   706,   507,   619,   841,
     903, -1412, -1412,   538,   677, -1412, -1412,   547,   563,   595,
   -1412, -1412, -1412, -1412,   597,   753, -1412,   604,   717,   772,
     -27,   -43,   986, -1412, -1412,  2971,  2971, -1412,   798,    37,
      33,  1126, -1412,   620, -1412, -1412, -1412,   621,   726,   732,
   -1412, -1412,   903, -1412,   903, -1412, -1412,   993, -1412, -1412,
     628,   629,   630,   631,   778, -1412,    70, -1412, -1412,   778,
   -1412, -1412, -1412, -1412, -1412,   -27,   950, -1412, -1412, -1412,
   -1412, -1412,   632, -1412, -1412,   633, -1412,   109,  1170,   895,
     638, -1412, -1412,   642, -1412,   -67, -1412, -1412, -1412,   643,
    -186,   906, -1412,  1016,  1016,   740,   750,   840,   840,   935,
     840,   840,  1016, -1412,   381, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,   758,   -46,   -43,
     986, -1412,   656,   773, -1412, -1412,   986, -1412,    36,   665,
     104,   699,   676, -1412,   676,   676,   676, -1412,    84, -1412,
     570,  1037, -1412,   676,   672, -1412,  1043, -1412, -1412, -1412,
    3031,   687, -1412, -1412, -1412,     3,   775, -1412, -1412,   957,
   -1412, -1412,   690,   858,   881, -1412,   840,   840,   840, -1412,
     840,   903,   974, -1412,  1066,   903,   903,   840, -1412, -1412,
     848, -1412,   779,    67, -1412,   223, -1412, -1412, -1412, -1412,
   -1412,   986, -1412,   702, -1412, -1412,   704, -1412, -1412, -1412,
   -1412,   840,   840,   872,   981,   840,   561,   561,    -6, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,   569,
     676,   676,   676,   262,   721, -1412,   711,   494,   722,   558,
     730,   612,   731, -1412, -1412,    81, -1412, -1412, -1412, -1412,
     312,   571,   676, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
     840, -1412,   825, -1412, -1412,   132, -1412,   230,   419,   903,
    1103, -1412, -1412, -1412, -1412,  1066, -1412,    66, -1412, -1412,
     903, -1412,  1016, -1412,   823, -1412, -1412, -1412,  1036, -1412,
   -1412, -1412,   986, -1412, -1412, -1412,  1107,   570, -1412,   840,
   -1412,  1108,  1110,   840,  1040,   903,   321,  1108,   807, -1412,
   -1412,   746,   746,   664, -1412,   676,   676,   676,   676,   676,
     676, -1412,   -77, -1412,   676, -1412,   903, -1412, -1412, -1412,
   -1412,   633, -1412,   325,   571, -1412,  2085,  1108,   840, -1412,
   -1412,   404,    31, -1412, -1412, -1412, -1412, -1412,  1114, -1412,
     419, -1412,   829, -1412, -1412, -1412, -1412, -1412, -1412,  1108,
   -1412, -1412, -1412, -1412, -1412,   954, -1412, -1412,  2332, -1412,
   -1412,   925, -1412,  1121, -1412,   832, -1412, -1412, -1412, -1412,
     903, -1412, -1412, -1412, -1412,     6,   947, -1412,   721,   469,
     469,   746,   746,   746, -1412, -1412,   721, -1412, -1412,   685,
    2246,   759,   761, -1412, -1412, -1412, -1412, -1412,   865,  2691,
    2779,  1046,   903, -1412, -1412,   854, -1412,  1132, -1412, -1412,
     419,  1108, -1412, -1412,   981, -1412,   903,   993, -1412, -1412,
   -1412, -1412,   828, -1412,   882,  1108, -1412,   903,   903,   840,
     354,   840,    41, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412,   467,   491,   499,   509,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,   605,   -53, -1412,
   -1412, -1412,  1108,    12, -1412,  1108, -1412, -1412,   867, -1412,
    1028, -1412, -1412,  3431, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412,  1594, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
     853,   876,   839,   395, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,   840,
     461, -1412, -1412, -1412,  1702,   903,   903, -1412,   104, -1412,
     993, -1412, -1412,  1104, -1412, -1412,   856, -1412,   861, -1412,
   -1412, -1412, -1412,  3411, -1412, -1412,   419, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412,  1091, -1412,   888,   888,    40,
   -1412, -1412, -1412, -1412,   935, -1412,    92,   783,   789, -1412,
     903,  3083,   851, -1412, -1412,  3431,   903,  3431,  3431,   419,
     579,  1025, -1412,    63,  1263,   903,  3187,  3431, -1412,  2130,
     903,  3431,   903,  3431,   153,    49,   903,   903,  3208,  3288,
     903,  3431,   878,    50, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412,  1105,  1051,   903,  3444,    63,  1016, -1412, -1412, -1412,
   -1412, -1412, -1412,  1109, -1412,   859,   872,   927,   853, -1412,
     910,   872,   840,  1095,   417,   288,  1108, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412,   914,   905,   903, -1412,   952, -1412,
   -1412, -1412, -1412,  1108,   897,   903, -1412,   419, -1412,   900,
    1189, -1412,  1095, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
     837,  1146, -1412, -1412,   832,  1108, -1412, -1412,  1071,   435,
     903,  1074,  3330, -1412, -1412,   891, -1412,  3431,   903,  1073,
     822, -1412,   945,   962,  2835,  1079,   158,   891, -1412, -1412,
    1151, -1412, -1412, -1412,  1856, -1412,   923, -1412,   778, -1412,
      45, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,  3431,
   -1412,   926,  1083,  1134,   514,  -137, -1412,  2586,  1086,   439,
     933, -1412,   -27,   932,   139,   942,  -130,  1061, -1412,   962,
    1061,   903,  1098,   931, -1412, -1412,   143, -1412, -1412, -1412,
   -1412,  1235, -1412,    63, -1412,    55, -1412,    47, -1412, -1412,
    1156,  2013, -1412, -1412,  3431,  1100,  3358,  1129,  1061, -1412,
     953, -1412,  1158, -1412, -1412, -1412, -1412, -1412,    20,   972,
    1029,   644,   778, -1412,  1163, -1412,  1165,   892, -1412,  1167,
      63, -1412, -1412,   154,   840,  1067,   565, -1412,   840,   422,
   -1412,   840,   840, -1412,   840,   840,  1036,   840,   840, -1412,
    1108, -1412, -1412, -1412, -1412,  1141, -1412,   828, -1412,   419,
   -1412, -1412,   570,   570,  1183,   935, -1412, -1412, -1412,   143,
     430,   951,    16,   968, -1412, -1412,  3431,  1093, -1412, -1412,
     210, -1412,   364, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412,   566,   959, -1412, -1412,  3431,  3431, -1412,   579,
      86, -1412, -1412, -1412, -1412,   853, -1412,   988, -1412,   988,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,  1632, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412,    84,   886, -1412,  1113,   102,
     114,   987,    63, -1412, -1412,  3431, -1412, -1412, -1412, -1412,
    1228, -1412, -1412, -1412, -1412,   903,   878,  1277, -1412,   624,
   -1412, -1412,   962,  3431, -1412,  1099,   329,   446, -1412, -1412,
    3431,   446,   991, -1412, -1412, -1412, -1412,    60,   404, -1412,
   -1412,  2959, -1412,  1199,  1097,  3415,   903, -1412,  1119, -1412,
   -1412,  3431,  1156,  1106,   329,  1050, -1412,   451,  3431,  3431,
   -1412, -1412,   790, -1412,   589, -1412, -1412, -1412,    84,   892,
   -1412,  1035,   461,  1240,  1065,  1065, -1412,   255,   840, -1412,
   -1412,   938,   560, -1412, -1412,   570,  1017,   903,   903, -1412,
    1294,   903, -1412,  2159,  1029, -1412,  1262, -1412,   925, -1412,
     570,  1181, -1412, -1412, -1412,  1142, -1412,  1152,  1150, -1412,
     143,  1142, -1412,  1115, -1412,  1415, -1412,  1088,  1088,  1211,
    1111,   903,  1200,   -15,  3431,  2971,  3431,  3431,   333, -1412,
   -1412, -1412,   -25,   420,   961, -1412, -1412,  1184, -1412,   960,
   -1412,   751,  -170,  1145,  1200,   270, -1412, -1412,    21, -1412,
    1008, -1412, -1412, -1412, -1412, -1412, -1412, -1412,  1201, -1412,
      81, -1412,   853, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
    1070,   853, -1412,  3431,   170, -1412, -1412, -1412, -1412, -1412,
     122,    75,  1204,    63,    63,  1200,   271,   859,   903,  1191,
   -1412,  1271, -1412,  1160, -1412, -1412, -1412, -1412, -1412,  1099,
   -1412,  3431,    34,   566,   459,  1021,  1207, -1412,  1023,   143,
     659, -1412, -1412, -1412, -1412,  3431,   840,   566, -1412, -1412,
     146,  3431,  1200,   320,  1276,   903,    62,   624,  1042,   878,
    1029, -1412, -1412, -1412, -1412, -1412, -1412,  1102,  1112, -1412,
   -1412,    81,  1252,  1085,    63, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412,   903, -1412,   741,  1031,  1031,
   -1412, -1412, -1412, -1412,   297, -1412, -1412,   903, -1412,   840,
   -1412, -1412,  1088,   809,   840,   851, -1412, -1412,  1088, -1412,
   -1412, -1412, -1412,   903, -1412,   903, -1412,  1256, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,   903,  1164,
      75, -1412,   853, -1412,   925,  1029, -1412, -1412, -1412,   995,
   -1412, -1412,  1142, -1412, -1412, -1412,   840, -1412, -1412,   840,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,  1095, -1412,  1415,
   -1412, -1412,   851,   851, -1412, -1412,   945, -1412, -1412,   997,
    1200,  2823, -1412, -1412, -1412, -1412,  1000,  1101, -1412,  1096,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412,  1020,  1142,   998,  3431, -1412,  3431, -1412, -1412,
   -1412, -1412,  1280, -1412,  1063,    -3, -1412, -1412,  1217, -1412,
   -1412,  1047,   715,  1243,  1052,  1068, -1412,  1273, -1412, -1412,
   -1412,  2907, -1412,  3431,   368, -1412,  1092, -1412, -1412,  1067,
     947,    63, -1412,  3431,   154,    65, -1412, -1412,   903,  3431,
     347, -1412,  1239, -1412,  1183,  1231,  1157, -1412,  1227, -1412,
    1173, -1412, -1412, -1412, -1412,  1023, -1412, -1412,  1162,  1229,
    1144,  1147,   945, -1412,  3431, -1412,  1159, -1412,   143, -1412,
    1265,  1116, -1412,   -28,  1327, -1412, -1412,  3431,  1029, -1412,
    1297,    63, -1412,   297, -1412, -1412, -1412,   633,   -52, -1412,
   -1412,   840,   903, -1412, -1412, -1412,  1108,   840, -1412, -1412,
    1108, -1412,   840, -1412, -1412,   840, -1412,  1156, -1412,  1067,
    1089, -1412,   903, -1412, -1412, -1412, -1412,  1108,  1108,   840,
   -1412, -1412, -1412,   961, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412,  1259, -1412, -1412,   840, -1412, -1412,   813,   840, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412,  1020, -1412,  1257,   995,
   -1412,  1200,  1139,  1200,  1140, -1412,    -3, -1412, -1412,  1280,
   -1412, -1412, -1412,  2779, -1412,   715, -1412,  1283, -1412, -1412,
   -1412,  3431,  3431, -1412, -1412,  1307, -1412, -1412, -1412, -1412,
     368, -1412,  1230,   -84,   840, -1412,  1168,  1200, -1412, -1412,
     505, -1412,  1310,  1203,  1209,   523, -1412, -1412,  1275, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
    3431,   362, -1412, -1412, -1412,  1264,  1053,  3431,   961,  1200,
    1276, -1412,   947,  1300,   947,  1144, -1412, -1412,  1266, -1412,
    1054, -1412, -1412, -1412,  3116, -1412,   250, -1412,    32,  1185,
   -1412,   903,   903, -1412,   408, -1412,   444,   419,  1407,   840,
     840, -1412, -1412, -1412, -1412, -1412,   419, -1412, -1412, -1412,
   -1412, -1412,  1108, -1412, -1412,  1108, -1412, -1412, -1412, -1412,
   -1412,  3431, -1412,  3431, -1412, -1412, -1412, -1412,  1328, -1412,
   -1412,  3431,   624, -1412, -1412,   624,  1176,   903,    -9,   903,
     903, -1412, -1412, -1412, -1412,  1161,  3431, -1412,   840,   -24,
   -1412,  1215, -1412, -1412, -1412, -1412, -1412, -1412,   988, -1412,
     988, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412,   903,   947, -1412,   903,  1272,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,   787, -1412, -1412,
   -1412, -1412, -1412,   903, -1412,  1295,   577,   903, -1412, -1412,
    3431, -1412, -1412,  3431, -1412, -1412,  1407, -1412,   903,   419,
   -1412, -1412, -1412,   961,   961,  3431,   624,   624, -1412,  1123,
     840,   903,   903,  1186, -1412, -1412, -1412, -1412,  1118,  3431,
    1284, -1412, -1412, -1412, -1412,  1197,  1202, -1412, -1412,   903,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,   561, -1412, -1412,
   -1412, -1412,   903, -1412, -1412, -1412, -1412,   624, -1412,  3431,
     878,   903,   840, -1412, -1412, -1412, -1412,  1269,  1270, -1412,
   -1412, -1412, -1412,   878, -1412,   853,   853, -1412, -1412, -1412
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1412, -1412, -1412, -1412,   754, -1412, -1412, -1412, -1412, -1412,
    1338, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
    1278,  1340, -1412, -1412,  1288, -1412, -1412, -1412, -1412,  1274,
   -1412, -1412, -1412, -1412,   365, -1412, -1412, -1412,  1045, -1412,
   -1412, -1412,   332, -1412, -1412,  1120, -1412, -1412, -1412, -1412,
    1041, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412,   155, -1412,   518, -1412, -1412,
   -1412,   -35, -1412, -1412, -1412,    15, -1412, -1412, -1412,  1206,
   -1412, -1412, -1412, -1412, -1412,   681, -1412, -1412, -1412, -1412,
   -1412, -1412,  1279, -1412,  1421,  1349, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412,   660, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,   287,
   -1412, -1412, -1412,  1282, -1412,  -382,   812, -1412, -1412, -1412,
   -1412, -1412, -1412,   340,   343,   810,   351, -1412, -1412, -1412,
   -1412, -1412,   147, -1412, -1412,  -278,   356, -1412, -1412,   358,
   -1412,   359, -1412, -1412,   697, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412,   835, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,  1122, -1412, -1412,
   -1412, -1412, -1412, -1412,  -899, -1412, -1412,    82, -1412,  1030,
   -1412, -1412, -1412,   668,   338,   346, -1412, -1412,   138, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,   673, -1412,
     -80,  -124, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
     -45, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412,   517, -1412, -1412, -1412,    98,   -47, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,   -55,
     486, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
     -69, -1412, -1412,    94, -1412, -1412, -1412, -1196, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1116,
     662, -1412, -1412,    78, -1412, -1412,   284, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,   433, -1412,
   -1412, -1412, -1412, -1412, -1412,   460,    68, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412,   639, -1412,   641,
   -1412, -1412,   806, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412,   634,   273, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412,   -94, -1412,   274, -1412,
   -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412, -1412,
   -1412, -1412,  -717, -1412,  -957, -1412, -1412, -1003, -1412,   134,
     -21, -1129, -1412, -1412,   -93, -1412, -1412,  -166, -1412,    88,
   -1412, -1412,   -95, -1075, -1398, -1412,   367, -1026,  -680, -1145,
   -1412, -1412,   520,   -73,   -71,   -68, -1412, -1412,  1342,   504,
    2018,  -632,  -915,  -683,   -23,   675, -1172,   -57, -1412,  -861,
   -1412,  -681, -1412,   500, -1411,  -206, -1412,  -532,  -131,  -658,
    -718,  -198,    79,  -490,  -776,  -838,  -746,   124,  -189,   -60,
   -1412,  1345,  -353,  -185,  -111,  -274,   847, -1412, -1412, -1412,
   -1412, -1412, -1412, -1412, -1412,   454, -1412, -1412, -1412,  -916,
     879,  -106, -1412,  -266, -1412, -1412,   622,  -662,  -864,  -760,
    -398,  -616,  -190, -1412, -1412,   915,  -556, -1412, -1360,   -30,
   -1412,  -747, -1412, -1020,  -100,  -786,  -109,  -981, -1412,   455,
     785,  -730, -1412, -1412, -1412, -1412, -1412, -1412, -1412,  -977,
   -1412, -1412,  -741,   616,  -666
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1251
static const short yytable[] =
{
      84,   356,   202,    83,   435,   199,   138,   926,   935,   296,
     200,   297,   821,   801,   202,   298,   917,   800,  1220,   201,
     832,   381,  1185,   227,  1069,   321,  1075,   732,   774,   328,
     329,   237,   951,  1404,   461,  1380,   141,   536,  1062,   187,
     141,   900,   185,   865,    84,  1396,  1435,    83,    80,  1211,
      80,  1152,    80,  1442,   915,   875,   472,   887,   838, -1198,
     838,   875,   838,    80,    32,    80,    80,  1398,    80,   406,
    1586,   839,  1174,   838,   109,  1632,   838,   920,   357,   923,
     902,  1642,  1050,   839,    80,   109,  1432,    80, -1250, -1174,
   -1174,  1398,  1228,   350,   233,   648, -1194,   466,  1686,  1144,
     681,  1443,   916,   839,   335,   293,   380,   258,  1333,  1147,
   -1198,  1442,   664,   403,   115,    33,   444,   795,   643,    47,
    1215,  1132,  1027,  1463,   410,   146,  1626,   231,   232,   -48,
     235,   236,   656,   402,    64,   225,   216,   407,  1343,  1055,
     677,  1392,   475,  1328,  1219, -1250,    80,   109,  1639,   431,
    1427,     3,   100,  1056, -1250, -1126,    80,  -537,  1448,  1443,
     242,   279,   422,  1772,   129,   129,  1252,     4,  1070,  1027,
     447,   322,  1459,    41,  1028,   322,   322,     8,  1108,   680,
      23,  1084,   684,    17,   390,  1103,   221,   115, -1250, -1216,
    1444,   865,  1088,   101,  1428,   876,   317,   318,   319,    23,
     320,   411,  1027,    10,  1203,   129,   216,   330,   839,   207,
   -1250,   871,  1104,  1148,   311,   402,   243,   129,  1254,  1177,
    1773,    48,   445,  1687,   534,  1067, -1192,   665,  1416,  1051,
    1747,   346,   347, -1216,   392,   352, -1250,   389,   358,  1370,
     -48,  1527, -1126,    41,   986,   979,   678,   118,  1444,  1399,
       4,   839,   408,    80,  1182,   839,   637,   682,  1417,   322,
    1404,   803,  1725,  1640,  1728, -1250,  1381,  1382,   648,   259,
     322,   285,   120,   285,   285,   285,  1089,   -48, -1250,  1477,
     387,  1406,   285,   821,   645,   642,   802,   322,   839,   306,
     903, -1203,  1130,  1400,  1401,   322, -1250,  1164,   657,   535,
    1474,  1782,  1342, -1198,   821,   217,  1163,   -48, -1198,   832,
    1391,   336,   122,    34,  1511,   904,   322,  1400,  1401,   423,
     118,   467,  1229,   427,   294,  1627,  1165,  1166,    80,   109,
    1165,  1166,   110,   111,   112,   113,  1418,  1093,   114,  1516,
    1071,   337,   987,   146,   146,   120,   123,  1802,  1068,  1027,
    1072,   146,   821,  1240,  1512,  1204,   146,   208,   462,   285,
     285,   285,  1363,  1419,  1212,  1224,  1789,  1105,   124,   115,
     322,    80,   109,   146,  1214,   309,   146,   393,  1281,   378,
   -1250,   285,  1156,   116,   152,   122,  1685,  1205,   527,   125,
    1234,   125, -1182,   125,  1657,  1236,  1178,   729,   821,  1236,
     839,  1456,   322,   936,   125,   147,  1262,   125,   255,   142,
    1738,  1404,   115,  1270,  1410,   905,    84,   209,  1234,   123,
    1128,  1129,  1670,   109,  1672,   146,  1576,  1607,   658,   242,
     943, -1107,  1739,  1133,    47,   839,   875,  1740,  1513,   394,
     153,   124,  1397,  1433,   285,   285,   285,   285,   285,   285,
    1523,  1411,   956,   285,    80,   899,  1577,   146,  1693,   659,
    1414,   663,   285,   115,  1743,   737,  1157,   250,  1524,  1420,
     154,   821,    61,   254, -1203,  1528,  1529,   116,   933,  1741,
    1551,   789,  1553,  1766,  1767,   243,   155,   156,   157,  1722,
    1723,  1374,  1464,    67,   158,  1480,  1027,  1636,  1282,   824,
    1555,    19,   118,  1134,  1135,   738,  1394, -1192,  1560,   395,
     396,    62,   959,   203,   827,  1771,  1497,   995,  1587,   845,
     119,   896,  1502,   795,    20,  1136,  1283,   120, -1174, -1250,
     979,   979,    15,  1707,   932,  1190,    48,  1708,   341,  1137,
    1138,  1139, -1250,   432,  1597,   118,  1618, -1250,   660,  1619,
      68,  1434,    69,  1606,  1709,  1431,  1482,  1131,  1710,  1501,
   -1250,  1578,   475,  1375, -1250,    28,    49,   122,   730,  1260,
     120, -1174,  1807,    80,   109,    26,  1140, -1250,  1476,  1141,
     979,   839,   839,  1292,  1461,    84,    84,  1122,   778,   779,
    1461,  1510,    80,   899,  1426,   339,   118,  1519,  1334,   433,
    1811,   123,   789,   749,   960,   921,  1377,   933,  1271,   736,
     122,  1159,  1748,   661,   115,  1653,  1521,  1522,   364,   750,
    1378,   120,   689,   124,  1491,   463,  1658,   464,   116,   416,
    1621,  1659, -1174,  1379,  1804,  1805,    84, -1135,   739,   823,
     146,  1749,   839,  1648,   123,   848,   924,  1268,  1751,   864,
      84,   928,    84,   866,   874,   869,   848,    84,   146,  1449,
     889,   122,   901,   740,   159,  1160,   124,  1579,   364,   125,
    1492,  1113,  1450,    84,  1036,   146,   911,  1752,  1593,    80,
     109,  1226,  1585,   110,   111,   112,   113,   382,  1109,   114,
     870,   280,   281,   757,  1822,   123,  1037,  1702,   898,   282,
     448,  1038,   261,   741,  1227,  1694,  1704,  1827,  1705,   160,
     161,   162,  1552,  1027,  1554,  1716,    84,   124,  1695,   778,
     115,  1142,   929,  1700,    22,   946,  1110,  1730,  1731,  1025,
     359,  1785,    30,  1786,   116,  1012,  1701,   742,  1015,  1016,
      35,  1044,   360,  1039,    80,   109,   262,   118,  1045,  1143,
     821,    36,   263,   238,  1386,    38,  1047,   875,    84,     9,
    1484,   972,  1649,  1637,  1127,  1064,   675,   422,   422,  1590,
     813,  1605,   120,  1736,  1595,  1193,   813,   826,   676,  1194,
    1195,   821,  1598,  1797,   264,   851,   853,  1824,   863,   265,
     868,   372,   868,   374,    53,   376,    39,   893,   813,   839,
     868,    12,    13,  1098,  1784,   353,   354,   266,    65,   667,
     668,   874,   122,   918,   809,    41,   816,    42,    43,    44,
    1787,   353,   354,    52,  1387,    80,   109,   842,   844,   110,
     111,   112,   113,   669,   670,   114,  1191,   368,   369,   842,
     370,   671,   672,   109,   897,    45,   123,    46,  1064,   839,
     364,   673,   674,   118,    80,   814,  1388,    56,   919,   842,
     366,   367,   368,   369,    57,   370,   115,    58,   124, -1136,
      74,   119,  1288,  1289,  1290,   828,   829,  1675,   120,    76,
     116,    80,   899,   115,    77,    23,   952,   953,  1095,  1096,
     267,   968,   322,   322,  1107,    78,   971,   116,  1112,  1389,
    1390,  1115,  1116,   968,  1117,  1118,    80,  1120,  1121,  1272,
      87,  1294,  1295,  1022,   364,  1297,   381,    88,   122,    89,
    1165,  1166,  1196,  1197,   366,   367,   368,   369,  1031,   370,
     422,  1198,  1199, -1139,   963,    90,   863,   366,   367,   368,
     369,    93,   370,   268,  1192,   422,  1193,  1265,  1266,   383,
    1194,  1195,   123,    80,   109,  1242,  1243,   110,   111,   112,
     113,  1498,  1499,   114,   842,  1663,  1664,    91,   364,    92,
     893,    98,  1745,  1078,   124,   968,    96,   975,   366,   367,
     368,   369,    97,   370,  1793,  1794,   901, -1141,  1763,  -263,
    1764,   182,   178,   181,   115,   183,   187,   381,   197,   118,
    1063,   380,   192,   194,   195,   196,   203,   842,   116,   211,
     213,   842,   206,  1487,   214,   220,   118,   119,   223,   225,
     125,   228,   229,   233,   120,   240,    23,   901,   252,  1064,
     366,   367,   368,   369,   901,   370,   117,   257,   253,   437,
     299,   120,   280,   281,   842,  1153,   302,   304,   310,   311,
     282,   366,   367,   368,   369,   322,   370,   322,   322,   307,
     539,   322,   313,   314,   122,  1173,  1175,   315,   323,   324,
     322,   269,   331,   333,   343,  1371,   344,   348,  1285,  1483,
     350,   122,   380,  1063,  1828,  1829,   371,   366,   367,   368,
     369,  1494,   370,  1196,  1197,   388,  1022,   373,   123,  1534,
     728,  1535,  1198,  1199,  1536,   375,   377,   404,   414,   412,
     419,   428,   424,   426,  1216,   123,   436,   370,   392,   470,
     124,   475,  1506,   529,   531,   532,   537,   118,  1064,   152,
     543,   541,  1230,   542,   636,   638,   641,   124,   652,  1237,
     685,   654,   687,  1643,   727,   119,   725,  1645,   782,   783,
    1244,   785,   120,   790,  1249,   806,   842,   792,    84,   835,
    1253,   807,   909,   910,  1654,  1655,   125,  1263,  1264,  1223,
     146,   925,   121,    80,   109,   922,  1537,   110,   111,   112,
     113,   927,   930,   114,   937,   153,   938,   940,  1538,   944,
     949,   842,   122,   950,   954,   976,  1539,   957,   969,   901,
    1250,   964,   973,    80,   109,   979,   981,   110,   111,   112,
     113,   984,  1023,   114,   115,   154,  1458,   989,  1033,  1032,
    1035,  1540,  1042,  1046,  1048,   322,   123,  1486,   116,  1049,
    1053,   155,   156,   157,   129,  1372,  1373,   322,  1058,   158,
    1060,   875,   117,  1079,   115,  1082,  1085,   202,   124,  1086,
    1091,  1099,  1093, -1096,  1100, -1089,   117,   933,   116,  1124,
     795,  1151,  1145,  1171,  1063,  1154,    80,   109,   322,  1496,
     110,   111,   112,   113,  1500,  1366,  1183,  1541,  1202,  1217,
    1213,   899,  1415,  1231,  1239,  1245,   431,  1246,  1251,  1258,
    1255,  1274,  1277,  1278,   125,  1286,  1293,  1296,  1331,  1335,
    1337,  1341,  1340,  1361,  1147,  1344,  1652,   115,  1148,  1761,
    1441,  1367,  1762,  1064,  1383,  1166,  1517,  1395,  1405,  1518,
    1542,   116,  -557,  1412,  1457,  1407,  1430,  1436,  1438,  1439,
    1462,  1451,  1452,  1453,  1465,  1475,  1543,   842,   842,  1478,
   -1093,  1481,  1488,  1505,  1514,  1507,  1556,   118,  1525,  1530,
    1479,  1561,  1532,  1557,  1533,  1564,  1550,  1064,  1568,  1572,
    1570,  1571,  1584,  1063,  1596,   119,  1602,  1544,  1545,  1599,
    1612,  1444,   120,  1604,  1614,    84,  1609,   118,   779,  1470,
    1470,  1617,  1622,  1633,  1620, -1092,  1650,  1660,  1667,  1671,
    1673,  1677,   121,  1681,  1691,   119,  1696,  1684,   842,  1698,
    1703,  1624,   120,  1697,  1726,  1719,  1717,  1627,  1746,   159,
    1755,  1732,   122,  1770,  1765,  1783,  1791,  1796,  1808,  1777,
    1813,  1815,  1817,  1812,  1825,  1826,   140,  1818,   222,   816,
     150,   215,   322,  1241,  1276,   431,   534,  1503,   239,  1504,
     118,   469,   122,   468,  1490,   405,   123,  1114,  1638,  1588,
     129,   340,   322,   186,   160,   161,   162,   939,   249,    51,
     780,  1641,  1754,  1321,   955,   120,  1322,  1644,   124,  1064,
     256,  1760,  1646,   786,  1323,  1647,   123,  1509,  1801,  1324,
    1798,  1325,  1326,  1775,   948,   781,   816,   816,  1365,  1656,
     635,  1563,   983,  1345,  1346,  1364,  1347,  1520,   124,  1348,
     988,  1666,  1575,  1559,  1662,   122,  1176,   450,  1665,  1674,
    1676,  1683,  1201,  1440,   125,  1573,  1591,  1257,  1592,  1041,
    1065,  1238,   888,  1608,  1066,  1077,  1724,  1549,  1669,  1471,
    1472,  1820,  1729,  1781,  1601,  1734,  1385,  1187,  1711,   123,
    1712,   534,  -559,  1713,   125,   300,  1057,  1225,  1063,   303,
    1367,   846,   431,  1273,  1689,   842,  1635,   794,  1119,   775,
    1280,   124,  1223,  1126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1803,     0,    84,     0,     0,     0,
       0,   322,   322,  1349,     0,  1350,     0,     0,     0,     0,
       0,  1351,  1063,     0,     0,   701,   534,  -689,  -689,     0,
       0,  -689,  -689,  -689,  -689,   842,     0,  -689,     0,     0,
       0,     0,     0,     0,     0,     0,  1352,     0,     0,  1758,
    1759,     0,     0,     0,     0,     0,     0,    84,     0,   322,
    1776,     0,     0,     0,     0,    80,   109,     0,  -689,   110,
     111,   112,   113,     0,     0,   114,     0,     0,     0,     0,
    1679,  1680,  -689,     0,  -689,  -689,     0,  -689,     0,     0,
       0,     0,     0,  -689,     0,     0,     0,     0,  1779,  1353,
       0,     0,  1354,     0,     0,     0,   115,     0,     0,     0,
       0,  1355,     0,    84,     0,     0,   779,   322,     0,  1706,
     116,     0,   991,   992,     0,   993,  1721,     0,   322,     0,
       0,   994,     0,     0,  1063,     0,     0,     0,     0,     0,
       0,    84,    84,  1737,   779,  1356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1357,  1358,     0,     0,     0,     0,     0,     0,
    1810,     0,   322,     0,     0,     0,     0,     0,     0,  -689,
     901,    84,     0,   745,   779,     0,     0,   746,     0,     0,
    1768,     0,     0,   901,     0,  -689,     0,     0,     0,  -689,
     747,  -689,     0,     0,     0,  1778,     0,     0,   748,     0,
       0,     0,  1823,     0,     0,     0,  -689,   995,     0,  -689,
    -689,     0,     0,     0,   311,     0,  -689,     0,     0,     0,
       0,     0,     0,   996,  -689,  -689,     0,   997,  -689,   118,
    -689,     0,     0,     0,     0,     0,  -689,     0,  1186,  -689,
       0,     0,     0,     0,   998,     0,     0,   119,   999,  1799,
    -689,     0,  1800,     0,   120,     0,  -689,     0,     0,     0,
       0,     0,  1000,  1001,  1806,     0,  1002,     0,  1003,  1788,
       0,     0,  1790,     0,  1004,     0,     0,  1005,  1814,    80,
     109,     0,     0,   110,   111,   112,   113,     0,  1006,   114,
    -689,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,   749,     0,     0,     0,     0,  1821,     0,
       0,     0,  -689,     0,     0,     0,     0,     0,     0,   750,
     115,     0,   751,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,  1819,   116,     0,   991,   992,     0,   993,
       0,     0,     0,     0,     0,   994,     0,     0,     0,   752,
     124,     0,     0,   753,     0,     0,     0,     0,  -689,     0,
       0,     0,     0,     0,     0,     0,   754,     0,     0,     0,
       0,   755,     0,     0,     0,     0,     0,   756,     0,     0,
    -689,  -689,  -689,  -689,     0,  -689,     0,  -689,  -689,  -689,
    -689,  -689,     0,   757,     0,     0,   125,     0,     0,     0,
       0,     0,     0, -1190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   333,     0,  1007,  1008,
    1009,  1010,     0,  1011,     0,  1012,  1013,  1014,  1015,  1016,
       0,   995,     0,     0,     0,     0,    80,   109,     0,     0,
     110,   111,   112,   113,     0,     0,   114,   996,     0,     0,
       0,   997,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   998,     0,
       0,   119,   999,     0,     0,     0,     0,   115,   120,     0,
       0,     0,     0,     0,     0,     0,  1000,  1001,     0,     0,
    1002,   116,  1003,     0,   758,     0,     0,     0,  1004,     0,
       0,  1005,     0,     0,     0,  -418,   451,     0,   452,     0,
       0,     0,  1006,     0,     0,     0,  -439,  -439,   122,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,     0,   890,
       0,     0,   123,    80,   855,     0,     0,   110,   111,   112,
     113,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,     0,  -439,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   478,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,   479,     0,
       0,  -439,     0,     0,     0,     0,  -439,     0,   116,     0,
     118,     0,     0,     0,     0,     0,     0,  1076,     0,     0,
     125,     0,     0,     0,   480,     0,     0,     0,   119,     0,
    -418,     0,   287,   289,   291,   120,     0,     0,     0,     0,
       0,   301,  1007,  1008,  1009,  1010,     0,  1011,     0,  1012,
    1013,  1014,  1015,  1016,     0,     0,     0,  1298,  1299,     0,
    1300,   481,   482,  1301,  -439,     0,     0,   451,  -439,   452,
       0,     0,  1302,     0,     0,   122,     0,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,
    -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,  -439,   123,
       0,     0,     0,     0,     0,     0,     0,  -439,   361,   362,
     363,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,   124,     0,  -439,     0,  1303,     0,     0,     0,     0,
     384,     0,     0,     0,     0,   119,  -418,  1304,  1305,  1306,
       0,     0,   120,     0,     0,  1307,     0,   478,     0,   483,
       0,     0,  -439,     0,     0,     0,     0,  -439,   484,     0,
       0,   479,     0,     0,     0,     0,  1308,   125,     0,     0,
    1309,     0,     0,     0,     0,     0,     0,  -439,     0,     0,
       0,   540,   122,     0,     0,     0,     0,   480,     0,     0,
       0,     0,     0,   438,   439,   440,   441,   442,   443,     0,
       0,  -439,   446,   486,     0,     0,     0,     0,     0,     0,
    -439,   449,     0,     0,     0,  -439,   123,     0,     0,  -439,
       0,     0,     0,  1310,   481,   482,  1311, -1250,     0,     0,
    -439,     0,     0,     0,     0,  1312,     0,     0,   124,     0,
       0,   489,  -792,     0,     0,     0,     0,     0,     0,  -792,
       0,   146,     0,     0,     0,  -439,  -439,     0,  -439,     0,
       0,     0,  1313,     0,     0,     0,     0,   453,  -439,  1314,
       0,     0,     0,     0,   491,     0,  1315,   492,     0,     0,
       0,     0,     0,     0,   125,  1316,  1317,     0,     0,   493,
     494,   495,   496,   497,   498,   499,     0,     0,     0,     0,
       0,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,     0,     0,     0,   510,     0,  1318,  1319,     0,     0,
       0,     0,   483,     0,     0,     0,     0,     0,    23,     0,
       0,   484,     0,     0,     0, -1232,     0,     0,  -439,     0,
       0,  1320,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   485,  -439,     0,     0,     0,     0,     0,     0,     0,
       0,  -439,     0,     0,     0,     0,   486,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   487,     0,
       0,     0,     0,     0,   488,     0,     0,     0,     0,    80,
     109,     0,     0,   110,   111,   112,   113,     0,     0,   114,
       0,     0,     0,     0,   489,     0,  -439,  -439,     0,  -439,
       0,     0,     0,     0,     0,     0,   490,     0,   453,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115, -1232,     0,     0,     0,     0,     0,   491,     0,     0,
     492,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,     0,   493,   494,   495,   496,   497,   498,   499,     0,
       0,     0,     0,     0,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,     0,     0,     0,   510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   511,     0,     0,     0,
       0,     0,   544,   545,  -269,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   575,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,     0,     0,     0,   576,   120,     0,
     544,   545,   577,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,     0,     0,     0,     0,    80,   109,   122,     0,
     110,   111,   112,   113,     0,     0,   114,     0,    80,   109,
       0,     0,   110,   111,   112,   113,   575,     0,   114,     0,
     578,     0,     0,     0,   579,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,   580,     0,   115,     0,     0,
       0,     0,     0, -1250,     0,   576,     0,     0,     0,   115,
     577,   116,     0,     0,   124,     0,     0,     0,  -792,     0,
       0,     0,     0,   116,     0,  -792,     0,   146,     0,     0,
       0,     0,     0,   581,     0,     0,     0,     0,     0,   117,
    -742,  -742,   959,     0,  -742,  -742,  -742,  -742,     0,     0,
    -742,     0,     0, -1176,     0,     0,     0,     0, -1174,     0,
     125,     0,     0,     0,     0,     0,     0,     0,   578,     0,
       0,     0,   579,     0,     0,     0,     0,     0,     0,     0,
       0,  -742,     0,   580,     0,     0,     0,     0,     0,     0,
       0,     0,    80,   109,     0,  1416,   110,   111,   112,   113,
       0,     0,   114,   582,    80,   109,     0,     0,   110,   111,
     112,   113,     0,     0,   114,     0,     0,     0,     0,     0,
       0,   581,     0,     0,     0,  1417,     0,   583,     0,     0,
     118,     0,     0,   115,     0,     0,   584,     0,     0,     0,
       0,     0,   118,     0,     0,   115,     0,   116,   119,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,   116,
     119,     0, -1174,     0,    80,   109,     0,   120,   110,   111,
     112,   113,     0,     0,   114,   121,     0,     0,     0,     0,
       0,   585,   586,     0,   587,     0,     0,   117,     0,     0,
       0,   582,     0,   588,     0,   122,     0,     0,     0,     0,
       0, -1176,     0,  1418,     0,   115,     0,   122,     0,     0,
       0,     0,     0,     0,  -742,   583,    80,   109,     0,   116,
     110,   111,   112,   113,   584,     0,   114,     0,     0,   123,
    1419,     0,  -742,     0,     0,     0,     0,     0,     0,  -742,
       0,   123,     0,     0,     0,     0,     0,     0,     0,    80,
     109,   124,   875,   110,   111,   112,   113,   115,     0,   114,
       0, -1176,     0,   124,     0,     0,   118,     0,     0,   585,
     586,   116,   587,     0,     0,     0,     0,     0,   118,  -742,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
     115,   120,     0,     0,     0,     0,   119,   125,     0,     0,
       0,     0,     0,   120,   116,     0,     0,     0,     0,   125,
       0,     0,     0,  -742,     0,     0,   810,     0,     0,     0,
      80,   109,     0,   121,   110,   111,   112,   113,     0,     0,
     114,   122,     0,     0,     0,  -742,  1420,     0,   118,     0,
       0,    80,   109,   122,     0,   110,   111,   112,   113,     0,
       0,   114,     0,     0,     0,     0,   119,     0,     0,     0,
       0,   115,     0,   120,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,   123,     0,     0,
       0,  -742,   115,   305,     0,  1242,  1243,   124,     0,     0,
     118,     0,     0,     0,     0,     0,   116,     0,     0,   124,
       0,     0,     0,   122,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
     849,    80,   109,   118,     0,   110,   111,   112,   113,     0,
       0,   114,     0,   125,     0,     0,     0,   123,     0,     0,
       0,   119,     0,     0,     0,   125,     0,     0,   120,     0,
       0,     0,     0,     0,   890,   122,     0,     0,     0,   124,
       0,     0,   115,    80,   109,     0,     0,   110,   111,   112,
     113,     0,     0,   114,     0,     0,   116,     0,  1735,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,    80,   109,     0,   118,   110,   111,   112,   113,     0,
       0,   114,     0,     0,   115,   125,     0,     0,     0,     0,
       0,   124,   119,     0,     0,   118,     0,     0,   116,   120,
       0,   894,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,   119,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,   124,     0,   116,     0,    80,   109,
       0,     0,   110,   111,   112,   113,     0,   125,   114,   122,
     479,     0,     0,     0,    80,   109,     0,     0,   110,   111,
     112,   113,     0,     0,   114,     0,     0,    80,   109,     0,
     122,   110,   111,   112,   113,     0,   480,   912,     0,   115,
     125,     0,     0,   123,     0,   118,     0,     0,     0,     0,
       0,     0,     0,   116,     0,   115,     0,     0,     0,     0,
       0,     0,     0,   119,   123,   124,     0,     0,   115,   116,
     120,     0,     0,   481,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   124,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,  1081,     0,     0,
     122,   125,   120,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   119,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
       0,   483,   118,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,   123,     0,   118,     0,
     119,     0,     0,     0,     0,     0,     0,   120,     0,     0,
       0,   118,     0,   966,     0,     0,   119,     0,   124,     0,
       0,     0,   125,   120,   123,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,   486,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,  1248,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,   124,
       0,   493,   494,   495,   496,   497,   498,   499,     0,     0,
       0,     0,   124,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,     0,     0,     0,   510,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125
};

static const short yycheck[] =
{
      60,   267,   126,    60,   357,   116,    86,   748,   755,   198,
     119,   200,   695,   679,   138,   200,   734,   679,  1044,   125,
     700,   295,   999,   154,   885,   231,   890,   583,   644,   235,
     236,   162,   792,  1178,   387,  1164,     3,   435,   876,     3,
       3,   722,   102,   709,   104,  1174,  1218,   104,     3,  1030,
       3,   966,     3,    77,   734,     6,   409,   715,    13,    46,
      13,     6,    13,     3,    46,     3,     3,    70,     3,     3,
    1430,   703,   987,    13,     4,  1473,    13,   735,   268,   745,
      30,  1492,   212,   715,     3,     4,  1215,     3,    48,    49,
      50,    70,  1049,    99,    88,   477,     4,    66,   182,   960,
      88,   125,   734,   735,    37,    21,   295,     3,  1128,    93,
      97,    77,    71,   319,    44,    97,   193,    77,   471,   162,
    1035,   959,   840,  1252,   330,   311,   154,   157,   158,    92,
     160,   161,   485,   318,   125,     3,   203,    71,  1141,   869,
     193,   311,   167,  1124,  1043,   112,     3,     4,   200,   355,
      75,     0,   179,   870,   122,   292,     3,   172,  1233,   125,
     206,   191,   347,   172,    85,    86,  1081,   241,   121,   887,
     376,   231,  1247,   240,   840,   235,   236,   372,   925,   532,
     186,   898,   535,    62,   315,    31,   372,    44,   358,    75,
     214,   857,   172,   220,   119,   146,   226,   227,   228,   186,
     230,   332,   920,   146,   102,   126,   203,   237,   840,   100,
     165,    58,    58,   197,    92,   400,   262,   138,  1082,   133,
     229,   264,   299,   307,   430,   883,   251,   186,    58,   359,
    1641,   261,   262,   119,     4,   265,   122,   105,   268,  1154,
     203,  1370,   379,   240,    86,   260,   299,   177,   214,   228,
     241,   883,   186,     3,   995,   887,   462,   245,    88,   319,
    1405,   169,  1622,   315,  1624,   200,  1165,  1166,   650,   165,
     330,   192,   202,   194,   195,   196,   256,   240,   213,  1260,
     310,  1180,   203,   966,   474,   470,   684,   347,   920,   210,
     240,     3,   954,   296,   297,   355,   234,   977,   487,   293,
    1257,  1699,  1140,   309,   987,   372,   972,   270,   295,   989,
    1171,   244,   242,   295,  1334,   265,   376,   296,   297,   349,
     177,   290,  1052,   353,   240,   353,   354,   355,     3,     4,
     354,   355,     7,     8,     9,    10,   166,   223,    13,  1342,
     293,   274,   184,   311,   311,   202,   276,  1758,   293,  1067,
     303,   311,  1035,   293,  1335,   253,   311,   248,   388,   280,
     281,   282,  1148,   193,  1030,  1046,  1726,   213,   298,    44,
     430,     3,     4,   311,  1032,   372,   311,   147,   123,   298,
     234,   302,   172,    58,     3,   242,  1582,   285,   418,   344,
    1056,   344,   270,   344,  1523,  1057,   310,   582,  1081,  1061,
    1032,  1239,   462,   756,   344,   372,  1087,   344,   372,   372,
     160,  1556,    44,  1094,  1190,   365,   476,   308,  1084,   276,
     952,   953,  1551,     4,  1553,   311,    58,  1453,   488,   206,
     783,   292,   182,     3,   162,  1067,     6,   187,  1337,   209,
      59,   298,   172,   172,   365,   366,   367,   368,   369,   370,
    1366,  1192,   805,   374,     3,     4,    88,   311,  1587,   489,
    1201,   491,   383,    44,  1636,     4,   256,   180,  1367,   299,
      89,  1154,   307,   186,   186,  1374,  1375,    58,   190,   229,
    1395,   666,  1397,  1679,  1680,   262,   105,   106,   107,  1618,
    1619,   158,   172,   218,   113,  1271,  1214,  1478,   243,   697,
    1399,   372,   177,    73,    74,    44,  1172,   112,  1407,   279,
     280,   346,    77,   374,   699,  1687,  1302,   155,  1433,   704,
     195,   719,  1308,    77,   108,    95,   271,   202,    93,   200,
     260,   260,   120,   171,   117,  1025,   264,   175,   251,   109,
     110,   111,   213,   222,  1443,   177,  1462,   200,   194,  1464,
     275,  1217,   277,  1452,   192,  1213,  1274,   955,   196,  1305,
     213,   193,   167,   230,   200,   120,   294,   242,   173,   118,
     202,   125,  1768,     3,     4,    98,   146,   213,  1259,   149,
     260,  1213,  1214,  1115,  1250,   645,   646,   940,   645,   646,
    1256,  1332,     3,     4,  1210,   372,   177,  1357,  1130,   278,
    1772,   276,   787,   181,   169,   736,  1162,   190,  1098,   639,
     242,   247,   204,   259,    44,  1514,  1362,  1363,   356,   197,
     200,   202,   543,   298,   327,   221,  1525,   223,    58,   342,
    1468,  1530,   197,   213,  1763,  1764,   696,   375,   177,   696,
     311,   233,  1274,  1507,   276,   705,   746,    58,   204,   709,
     710,   751,   712,   710,   714,   712,   716,   717,   311,   200,
     717,   242,   722,   202,   283,   301,   298,   299,   356,   344,
     373,   249,   213,   733,   160,   311,   733,   233,   331,     3,
       4,    57,  1429,     7,     8,     9,    10,   375,   123,    13,
     713,   366,   367,   271,  1810,   276,   182,  1596,   721,   374,
     375,   187,     3,   242,    80,   200,  1605,  1823,  1607,   328,
     329,   330,  1395,  1431,  1397,  1614,   776,   298,   213,   776,
      44,   291,   752,   200,     4,   785,   161,  1626,  1627,   838,
     161,  1708,   372,  1710,    58,   373,   213,   276,   376,   377,
     265,   302,   173,   229,     3,     4,    47,   177,   309,   319,
    1433,   183,    53,   372,     3,   372,   862,     6,   818,     5,
      19,   818,  1509,  1481,   949,   876,   161,   952,   953,  1435,
     691,  1451,   202,  1634,  1440,    60,   697,   698,   173,    64,
      65,  1464,  1444,   206,    85,   706,   707,  1813,   709,    90,
     711,   287,   713,   289,    40,   291,   237,   718,   719,  1431,
     721,     3,     4,   912,  1703,   244,   245,   108,    54,   342,
     343,   871,   242,   734,   690,   240,   692,    32,    33,    34,
    1719,   244,   245,   120,    73,     3,     4,   703,   704,     7,
       8,     9,    10,   342,   343,    13,  1025,   368,   369,   715,
     371,   342,   343,     4,   720,   372,   276,   265,   959,  1481,
     356,   342,   343,   177,     3,     4,   105,   372,   734,   735,
     366,   367,   368,   369,   265,   371,    44,    43,   298,   375,
     164,   195,   312,   313,   314,   296,   297,  1557,   202,   372,
      58,     3,     4,    44,   265,   186,    49,    50,   244,   245,
     191,   812,   952,   953,   924,    54,   817,    58,   928,   148,
     149,   931,   932,   824,   934,   935,     3,   937,   938,  1098,
     372,  1117,  1118,   834,   356,  1121,  1190,   240,   242,   372,
     354,   355,   207,   208,   366,   367,   368,   369,   849,   371,
    1115,   216,   217,   375,   810,   372,   857,   366,   367,   368,
     369,   188,   371,   244,    58,  1130,    60,   157,   158,   378,
      64,    65,   276,     3,     4,   296,   297,     7,     8,     9,
      10,   152,   153,    13,   840,   152,   153,   372,   356,   372,
     891,   199,  1638,   894,   298,   896,   372,   155,   366,   367,
     368,   369,   265,   371,   197,   198,  1046,   375,  1671,     3,
    1673,   265,   372,   372,    44,   263,     3,  1271,   220,   177,
     876,  1190,   374,   374,   374,   374,   374,   883,    58,   114,
     372,   887,   379,  1287,   372,   372,   177,   195,   112,     3,
     344,   281,   272,    88,   202,   267,   186,  1087,   372,  1140,
     366,   367,   368,   369,  1094,   371,    86,   372,   265,   375,
       3,   202,   366,   367,   920,   966,   374,     4,   273,    92,
     374,   366,   367,   368,   369,  1115,   371,  1117,  1118,   372,
     375,  1121,   372,   205,   242,   986,   987,   186,    94,     3,
    1130,   372,   224,   294,   372,  1155,   372,   205,  1108,  1285,
      99,   242,  1271,   959,  1825,  1826,   375,   366,   367,   368,
     369,  1297,   371,   207,   208,   270,  1017,   375,   276,    79,
     261,    81,   216,   217,    84,   375,   375,     4,    72,   286,
       3,    71,     4,     3,  1035,   276,   309,   371,     4,   290,
     298,   167,  1328,   198,     3,   293,   179,   177,  1239,     3,
     265,   372,  1053,   372,    88,   281,     4,   298,   310,  1060,
     273,   259,   114,  1496,   268,   195,   293,  1500,    44,   293,
    1071,   290,   202,    62,  1075,   372,  1032,   269,  1218,   134,
    1081,   372,    57,   112,  1517,  1518,   344,  1088,  1089,  1045,
     311,   244,   222,     3,     4,    66,   156,     7,     8,     9,
      10,   271,    87,    13,   270,    59,   281,   235,   168,   292,
     290,  1067,   242,     4,    48,   373,   176,   126,   307,  1259,
    1076,   127,   129,     3,     4,   260,   244,     7,     8,     9,
      10,   132,   289,    13,    44,    89,  1246,    66,   135,   293,
      86,   201,   136,   290,   292,  1285,   276,  1287,    58,   287,
     169,   105,   106,   107,  1155,  1156,  1157,  1297,   140,   113,
     309,     6,    86,   143,    44,   116,   293,  1371,   298,    91,
     278,    88,   223,    88,   362,    88,    86,   190,    58,   118,
      77,   293,   311,   304,  1140,   172,     3,     4,  1328,  1299,
       7,     8,     9,    10,  1304,  1151,   288,   257,   165,    51,
     293,     4,  1203,   184,   293,    86,  1492,   190,   169,   239,
     184,   256,    52,   228,   344,   357,   279,     3,    36,   118,
     158,   151,   150,   215,    93,   190,  1512,    44,   197,  1662,
    1231,   350,  1665,  1424,   130,   355,  1346,   172,   310,  1349,
     300,    58,   372,   253,  1245,   124,   122,   136,    57,   169,
    1251,   310,   125,   310,    58,   293,   316,  1213,  1214,   237,
      88,   256,   311,    87,   349,   181,    66,   177,   351,   349,
     238,   134,   251,   290,   258,   308,   358,  1468,   115,    86,
     308,   293,   270,  1239,   125,   195,   139,   347,   348,   138,
     141,   214,   202,   200,   230,  1435,   214,   177,  1435,  1255,
    1256,   234,   117,    56,   225,    88,   297,   128,   131,   250,
     250,   108,   222,    86,   226,   195,    86,   167,  1274,   190,
     125,   285,   202,   200,   104,   352,   142,   353,   223,   283,
       3,   145,   242,   237,    86,   200,   144,   122,   295,   258,
     302,   137,   225,   237,   155,   155,    88,   225,   150,  1305,
      90,   143,  1492,  1068,  1102,  1641,  1642,  1313,   164,  1315,
     177,   400,   242,   398,  1289,   325,   276,   929,  1483,  1434,
    1371,   245,  1512,   104,   328,   329,   330,   776,   179,    38,
     648,  1491,  1647,  1123,   804,   202,  1123,  1497,   298,  1580,
     188,  1656,  1502,   663,  1123,  1505,   276,  1330,  1756,  1123,
    1746,  1123,  1123,  1689,   787,   650,  1362,  1363,  1150,  1519,
     460,  1409,   824,    78,    79,  1149,    81,  1359,   298,    84,
     827,  1546,  1423,  1405,  1534,   242,   989,   385,  1538,  1556,
    1565,  1580,  1026,  1229,   344,  1421,  1438,  1084,  1439,   857,
     881,  1061,   716,  1455,   883,   891,  1620,  1393,  1549,  1256,
    1256,  1797,  1625,  1699,  1446,  1630,  1169,  1017,  1611,   276,
    1611,  1747,   372,  1611,   344,   203,   871,  1047,  1424,   204,
     350,   704,  1758,  1099,  1584,  1431,  1477,   678,   936,   644,
    1105,   298,  1438,   947,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1759,    -1,  1636,    -1,    -1,    -1,
      -1,  1641,  1642,   168,    -1,   170,    -1,    -1,    -1,    -1,
      -1,   176,  1468,    -1,    -1,     1,  1802,     3,     4,    -1,
      -1,     7,     8,     9,    10,  1481,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,  1649,
    1650,    -1,    -1,    -1,    -1,    -1,    -1,  1687,    -1,  1689,
    1690,    -1,    -1,    -1,    -1,     3,     4,    -1,    44,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
    1571,  1572,    58,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,  1698,   254,
      -1,    -1,   257,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,   266,    -1,  1743,    -1,    -1,  1743,  1747,    -1,  1610,
      58,    -1,    60,    61,    -1,    63,  1617,    -1,  1758,    -1,
      -1,    69,    -1,    -1,  1580,    -1,    -1,    -1,    -1,    -1,
      -1,  1771,  1772,  1634,  1771,   300,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,
    1770,    -1,  1802,    -1,    -1,    -1,    -1,    -1,    -1,   155,
    1810,  1811,    -1,    51,  1811,    -1,    -1,    55,    -1,    -1,
    1681,    -1,    -1,  1823,    -1,   171,    -1,    -1,    -1,   175,
      68,   177,    -1,    -1,    -1,  1696,    -1,    -1,    76,    -1,
      -1,    -1,  1812,    -1,    -1,    -1,   192,   155,    -1,   195,
     196,    -1,    -1,    -1,    92,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,   171,   210,   211,    -1,   175,   214,   177,
     216,    -1,    -1,    -1,    -1,    -1,   222,    -1,   186,   225,
      -1,    -1,    -1,    -1,   192,    -1,    -1,   195,   196,  1750,
     236,    -1,  1753,    -1,   202,    -1,   242,    -1,    -1,    -1,
      -1,    -1,   210,   211,  1765,    -1,   214,    -1,   216,  1725,
      -1,    -1,  1728,    -1,   222,    -1,    -1,   225,  1779,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,   236,    13,
     276,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,  1809,    -1,
      -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,   197,
      44,    -1,   200,    -1,    -1,    -1,    -1,    -1,   276,    -1,
      -1,    -1,    -1,  1789,    58,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,   227,
     298,    -1,    -1,   231,    -1,    -1,    -1,    -1,   344,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,
      -1,   249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
     366,   367,   368,   369,    -1,   371,    -1,   373,   374,   375,
     376,   377,    -1,   271,    -1,    -1,   344,    -1,    -1,    -1,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,   366,   367,
     368,   369,    -1,   371,    -1,   373,   374,   375,   376,   377,
      -1,   155,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
       7,     8,     9,    10,    -1,    -1,    13,   171,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,   195,   196,    -1,    -1,    -1,    -1,    44,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,   211,    -1,    -1,
     214,    58,   216,    -1,   372,    -1,    -1,    -1,   222,    -1,
      -1,   225,    -1,    -1,    -1,     0,     1,    -1,     3,    -1,
      -1,    -1,   236,    -1,    -1,    -1,    11,    12,   242,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,   116,
      -1,    -1,   276,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,   298,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    19,    -1,
      -1,    96,    -1,    -1,    -1,    -1,   101,    -1,    58,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,
     344,    -1,    -1,    -1,    45,    -1,    -1,    -1,   195,    -1,
     125,    -1,   194,   195,   196,   202,    -1,    -1,    -1,    -1,
      -1,   203,   366,   367,   368,   369,    -1,   371,    -1,   373,
     374,   375,   376,   377,    -1,    -1,    -1,    78,    79,    -1,
      81,    82,    83,    84,   159,    -1,    -1,     1,   163,     3,
      -1,    -1,    93,    -1,    -1,   242,    -1,    11,    12,   174,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,   276,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   280,   281,
     282,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,
      -1,   298,    -1,    67,    -1,   156,    -1,    -1,    -1,    -1,
     302,    -1,    -1,    -1,    -1,   195,   241,   168,   169,   170,
      -1,    -1,   202,    -1,    -1,   176,    -1,     5,    -1,   180,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   101,   189,    -1,
      -1,    19,    -1,    -1,    -1,    -1,   197,   344,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,   282,    -1,    -1,
      -1,   125,   242,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,   365,   366,   367,   368,   369,   370,    -1,
      -1,   306,   374,   234,    -1,    -1,    -1,    -1,    -1,    -1,
     315,   383,    -1,    -1,    -1,   159,   276,    -1,    -1,   163,
      -1,    -1,    -1,   254,    82,    83,   257,   287,    -1,    -1,
     174,    -1,    -1,    -1,    -1,   266,    -1,    -1,   298,    -1,
      -1,   272,   302,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,   311,    -1,    -1,    -1,   360,   361,    -1,   363,    -1,
      -1,    -1,   293,    -1,    -1,    -1,    -1,   372,   212,   300,
      -1,    -1,    -1,    -1,   305,    -1,   307,   308,    -1,    -1,
      -1,    -1,    -1,    -1,   344,   316,   317,    -1,    -1,   320,
     321,   322,   323,   324,   325,   326,    -1,    -1,    -1,    -1,
      -1,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    -1,    -1,    -1,   345,    -1,   347,   348,    -1,    -1,
      -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,   189,    -1,    -1,    -1,   193,    -1,    -1,   282,    -1,
      -1,   372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   315,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,   272,    -1,   360,   361,    -1,   363,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,   372,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,   299,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
     308,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   320,   321,   322,   323,   324,   325,   326,    -1,
      -1,    -1,    -1,    -1,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    -1,    -1,    -1,   345,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   364,    -1,    -1,    -1,
      -1,    -1,    11,    12,   372,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,    96,   202,    -1,
      11,    12,   101,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,     3,     4,   242,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    -1,     3,     4,
      -1,    -1,     7,     8,     9,    10,    67,    -1,    13,    -1,
     159,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   276,    -1,    -1,   174,    -1,    44,    -1,    -1,
      -1,    -1,    -1,   287,    -1,    96,    -1,    -1,    -1,    44,
     101,    58,    -1,    -1,   298,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,    58,    -1,   309,    -1,   311,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    86,
       3,     4,    77,    -1,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    -1,   100,    -1,    -1,    -1,    -1,    93,    -1,
     344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    58,     7,     8,     9,    10,
      -1,    -1,    13,   282,     3,     4,    -1,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    88,    -1,   306,    -1,    -1,
     177,    -1,    -1,    44,    -1,    -1,   315,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    44,    -1,    58,   195,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    58,
     195,    -1,   197,    -1,     3,     4,    -1,   202,     7,     8,
       9,    10,    -1,    -1,    13,   222,    -1,    -1,    -1,    -1,
      -1,   360,   361,    -1,   363,    -1,    -1,    86,    -1,    -1,
      -1,   282,    -1,   372,    -1,   242,    -1,    -1,    -1,    -1,
      -1,   248,    -1,   166,    -1,    44,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,   177,   306,     3,     4,    -1,    58,
       7,     8,     9,    10,   315,    -1,    13,    -1,    -1,   276,
     193,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,   298,     6,     7,     8,     9,    10,    44,    -1,    13,
      -1,   308,    -1,   298,    -1,    -1,   177,    -1,    -1,   360,
     361,    58,   363,    -1,    -1,    -1,    -1,    -1,   177,   242,
      -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,
      44,   202,    -1,    -1,    -1,    -1,   195,   344,    -1,    -1,
      -1,    -1,    -1,   202,    58,    -1,    -1,    -1,    -1,   344,
      -1,    -1,    -1,   276,    -1,    -1,   103,    -1,    -1,    -1,
       3,     4,    -1,   222,     7,     8,     9,    10,    -1,    -1,
      13,   242,    -1,    -1,    -1,   298,   299,    -1,   177,    -1,
      -1,     3,     4,   242,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,
      -1,    44,    -1,   202,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,   276,    -1,    -1,
      -1,   344,    44,   222,    -1,   296,   297,   298,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,   298,
      -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
     103,     3,     4,   177,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    -1,   344,    -1,    -1,    -1,   276,    -1,    -1,
      -1,   195,    -1,    -1,    -1,   344,    -1,    -1,   202,    -1,
      -1,    -1,    -1,    -1,   116,   242,    -1,    -1,    -1,   298,
      -1,    -1,    44,     3,     4,    -1,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    -1,    58,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   276,
      -1,     3,     4,    -1,   177,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    -1,    44,   344,    -1,    -1,    -1,    -1,
      -1,   298,   195,    -1,    -1,   177,    -1,    -1,    58,   202,
      -1,   103,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,   195,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,    -1,    -1,   298,    -1,    58,    -1,     3,     4,
      -1,    -1,     7,     8,     9,    10,    -1,   344,    13,   242,
      19,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    -1,     3,     4,    -1,
     242,     7,     8,     9,    10,    -1,    45,    13,    -1,    44,
     344,    -1,    -1,   276,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,   276,   298,    -1,    -1,    44,    58,
     202,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,   298,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,   169,    -1,    -1,
     242,   344,   202,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344,   195,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,
      -1,   180,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,    -1,    -1,    -1,   276,    -1,   177,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,
      -1,   177,    -1,   293,    -1,    -1,   195,    -1,   298,    -1,
      -1,    -1,   344,   202,   276,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,   234,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   298,   242,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,   344,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,   273,    -1,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344,    -1,    -1,    -1,    -1,   276,    -1,    -1,
      -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,
      -1,   320,   321,   322,   323,   324,   325,   326,    -1,    -1,
      -1,    -1,   298,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,    -1,    -1,   345,    -1,    -1,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   381,   382,     0,   241,   383,   384,   389,   372,   384,
     146,   394,     3,     4,   390,   120,   385,    62,   391,   372,
     108,   477,     4,   186,   392,   919,    98,   395,   120,   386,
     372,   393,    46,    97,   295,   265,   183,   438,   372,   237,
     562,   240,   930,   930,   930,   372,   265,   162,   264,   294,
     478,   484,   120,   384,   387,   396,   372,   265,    43,   507,
     480,   307,   346,   605,   125,   384,   388,   218,   275,   277,
     397,   398,   402,   406,   164,   439,   372,   265,    54,   547,
       3,   483,   485,   857,   879,   606,   607,   372,   240,   372,
     372,   372,   372,   188,   466,   479,   372,   265,   199,   549,
     179,   220,   901,   482,   484,   509,   510,   511,   486,     4,
       7,     8,     9,    10,    13,    44,    58,    86,   177,   195,
     202,   222,   242,   276,   298,   344,   610,   611,   851,   872,
     877,   878,   879,   883,   884,   885,   886,   908,   610,   563,
     390,     3,   372,   401,   403,   404,   311,   372,   399,   400,
     401,   944,     3,    59,    89,   105,   106,   107,   113,   283,
     328,   329,   330,   407,   408,   409,   410,   415,   423,   428,
     431,   432,   433,   434,   435,   436,   437,   440,   372,   481,
     508,   372,   265,   263,   551,   879,   485,     3,   512,   513,
     515,   487,   374,   887,   374,   374,   374,   220,   926,   884,
     926,   901,   611,   374,   880,   881,   379,   100,   248,   308,
     612,   114,   565,   372,   372,   404,   203,   372,   405,   930,
     372,   372,   400,   112,   411,     3,   868,   868,   281,   272,
     934,   919,   919,    88,   910,   919,   919,   868,   372,   409,
     267,   441,   206,   262,   467,   468,   469,   470,   472,   482,
     509,   548,   372,   265,   509,   372,   513,   372,     3,   165,
     516,     3,    47,    53,    85,    90,   108,   191,   244,   372,
     488,   489,   491,   495,   497,   498,   499,   505,   506,   919,
     366,   367,   374,   848,   850,   872,   888,   850,   889,   850,
     890,   850,   891,    21,   240,   873,   878,   878,   883,     3,
     848,   850,   374,   881,     4,   222,   872,   372,   564,   372,
     273,    92,   911,   372,   205,   186,   412,   919,   919,   919,
     919,   865,   879,    94,     3,   424,   425,   426,   865,   865,
     919,   224,   898,   294,   915,    37,   244,   274,   471,   372,
     469,   509,   550,   372,   372,   514,   919,   919,   205,   924,
      99,   912,   919,   244,   245,   903,   903,   912,   919,   161,
     173,   850,   850,   850,   356,   849,   366,   367,   368,   369,
     371,   375,   849,   375,   849,   375,   849,   375,   298,   874,
     878,   885,   375,   378,   850,   566,   567,   919,   270,   105,
     868,   413,     4,   147,   209,   279,   280,   416,   417,   418,
     429,   430,   883,   865,     4,   425,     3,    71,   186,   902,
     865,   868,   286,   938,    72,   906,   509,   552,   517,     3,
     865,   867,   883,   919,     4,   882,     3,   919,    71,   905,
     864,   865,   222,   278,   496,   882,   309,   375,   850,   850,
     850,   850,   850,   850,   193,   299,   850,   865,   375,   850,
     567,     1,     3,   372,   568,   569,   570,   571,   572,   577,
     578,   882,   919,   221,   223,   414,    66,   290,   418,   430,
     290,   427,   882,   442,   473,   167,   916,   553,     5,    19,
      45,    82,    83,   180,   189,   219,   234,   246,   252,   272,
     284,   305,   308,   320,   321,   322,   323,   324,   325,   326,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     345,   364,   518,   519,   520,   522,   523,   524,   525,   526,
     527,   536,   537,   539,   540,   541,   546,   919,   935,   198,
     923,     3,   293,   494,   865,   293,   910,   179,   918,   375,
     125,   372,   372,   265,    11,    12,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    67,    96,   101,   159,   163,
     174,   212,   282,   306,   315,   360,   361,   363,   372,   579,
     580,   590,   595,   600,   603,   617,   620,   625,   630,   631,
     632,   635,   642,   646,   648,   659,   662,   664,   667,   669,
     673,   682,   699,   701,   704,   708,   714,   724,   731,   733,
     736,   740,   741,   749,   760,   770,   776,   779,   785,   789,
     792,   803,   804,   808,   810,   579,    88,   865,   281,   937,
     419,     4,   883,   882,   443,   912,   856,   857,   515,   554,
     555,   556,   310,   943,   259,   932,   882,   878,   879,   919,
     194,   259,   538,   919,    71,   186,   920,   342,   343,   342,
     343,   342,   343,   342,   343,   161,   173,   193,   299,   500,
     882,    88,   245,   490,   882,   273,   936,   114,   573,   872,
     581,   591,   604,   618,   621,   626,   633,   636,   643,   647,
     649,     1,   670,   674,   683,   700,   702,   705,   709,   715,
     725,   732,   734,   737,   742,   750,   761,   771,   780,   786,
     793,   811,   601,   660,   668,   293,   942,   268,   261,   883,
     173,   894,   916,   790,   596,   663,   919,     4,    44,   177,
     202,   242,   276,   420,   422,    51,    55,    68,    76,   181,
     197,   200,   227,   231,   244,   249,   255,   271,   372,   444,
     445,   448,   450,   451,   452,   453,   456,   457,   458,   459,
     460,   462,   463,   464,   911,   915,   474,   475,   857,   857,
     516,   556,    44,   293,   528,   290,   525,   543,   544,   883,
      62,   521,   269,   900,   900,    77,   501,   502,   503,   504,
     907,   944,   910,   169,   493,   917,   372,   372,   582,   877,
     103,   592,   871,   872,     4,   876,   877,   619,   622,   627,
     852,   853,   872,   857,   871,   644,   872,   883,   296,   297,
     650,   651,   838,   839,   840,   134,   837,   838,    13,   851,
     869,   870,   877,   684,   877,   883,   886,   762,   879,   103,
     703,   872,   706,   872,   710,     4,   716,   719,   720,   721,
     861,   862,   863,   872,   879,   944,   857,   854,   872,   857,
     854,    58,   743,   855,   879,     6,   146,   751,   752,   753,
     754,   756,   757,   758,   759,   858,   859,   869,   762,   857,
     116,   781,   782,   872,   103,   787,   871,   877,   854,     4,
     861,   879,    30,   240,   265,   365,   661,   665,   777,    57,
     112,   857,    13,   597,   598,   838,   851,   870,   872,   877,
     869,   868,    66,   944,   924,   244,   942,   271,   924,   919,
      87,   909,   117,   190,   921,   921,   882,   270,   281,   475,
     235,   476,   557,   882,   292,   941,   879,   542,   544,   290,
       4,   909,    49,    50,    48,   494,   882,   126,   589,    77,
     169,   583,   907,   877,   127,   594,   293,   593,   872,   307,
     608,   872,   857,   129,   628,   155,   373,   629,   853,   260,
     899,   244,   931,   583,   132,   645,    86,   184,   608,    66,
     652,    60,    61,    63,    69,   155,   171,   175,   192,   196,
     210,   211,   214,   216,   222,   225,   236,   366,   367,   368,
     369,   371,   373,   374,   375,   376,   377,   841,   842,   843,
     844,   845,   872,   289,   940,   926,   675,   870,   944,   685,
     764,   872,   293,   135,   707,    86,   160,   182,   187,   229,
     711,   720,   136,   717,   302,   309,   290,   901,   292,   287,
     212,   359,   896,   169,   812,   931,   812,   855,   140,   748,
     309,   744,   875,   877,   884,   757,   759,   869,   293,   859,
     121,   293,   303,   755,   772,   908,   184,   782,   872,   143,
     788,   169,   116,   794,   812,   293,    91,   860,   172,   256,
     778,   278,   806,   223,   927,   244,   245,   791,   926,    88,
     362,   895,   421,    31,    58,   213,   465,   919,   921,   123,
     161,   446,   919,   249,   457,   919,   919,   919,   919,   906,
     919,   919,   882,   558,   118,   529,   943,   883,   867,   867,
     907,   910,   875,     3,    73,    74,    95,   109,   110,   111,
     146,   149,   291,   319,   859,   311,   586,    93,   197,   584,
     585,   293,   852,   872,   172,   609,   172,   256,   613,   247,
     301,   623,   624,   944,   838,   354,   355,   833,   834,   835,
     836,   304,   637,   872,   852,   872,   651,   133,   310,   653,
     654,   658,   942,   288,   939,   939,   186,   842,   574,   575,
     873,   878,    58,    60,    64,    65,   207,   208,   216,   217,
     676,   680,   165,   102,   253,   285,   686,   687,   691,   696,
     766,   927,   944,   293,   869,   852,   872,    51,   712,   574,
     837,   722,   723,   877,   861,   863,    57,    80,   814,   931,
     872,   184,   726,   738,   944,   745,   907,   872,   745,   293,
     293,   414,   296,   297,   872,    86,   190,   773,   273,   872,
     877,   169,   852,   872,   908,   184,   797,   738,   239,   602,
     118,   666,   861,   872,   872,   157,   158,   807,    58,   809,
     861,   873,   878,   895,   256,   599,   422,    52,   228,   929,
     929,   123,   243,   271,   449,   919,   357,   914,   312,   313,
     314,   454,   867,   279,   865,   865,     3,   865,    78,    79,
      81,    84,    93,   156,   168,   169,   170,   176,   197,   201,
     254,   257,   266,   293,   300,   307,   316,   317,   347,   348,
     372,   523,   524,   526,   536,   539,   541,   559,   927,   530,
     531,    36,   933,   923,   867,   118,   492,   158,   817,   819,
     150,   151,   875,   817,   190,    78,    79,    81,    84,   168,
     170,   176,   201,   254,   257,   266,   300,   317,   318,   587,
     588,   215,   925,   925,   585,   584,   877,   350,   821,   822,
     852,   610,   872,   872,   158,   230,   614,   916,   200,   213,
     821,   574,   574,   130,   634,   836,     3,    73,   105,   148,
     149,   859,   311,   638,   944,   172,   821,   172,    70,   228,
     296,   297,   655,   656,   839,   310,   574,   124,   671,   576,
     874,   942,   253,   677,   942,   872,    58,    88,   166,   193,
     299,   692,   693,   694,   688,   767,   911,    75,   119,   532,
     122,   869,   821,   172,   944,   856,   136,   718,    57,   169,
     726,   872,    77,   125,   214,   827,   828,   829,   833,   200,
     213,   310,   125,   310,   746,   747,   875,   872,   919,   833,
     783,   944,   872,   821,   172,    58,   795,   796,   892,   798,
     877,   783,   798,   813,   814,   293,   861,   927,   237,   238,
     874,   256,   870,   865,    19,   447,   879,   885,   311,   455,
     455,   327,   373,   461,   865,   866,   919,   925,   152,   153,
     919,   876,   925,   877,   877,    87,   865,   181,   533,   532,
     942,   923,   927,   574,   349,   820,   817,   919,   919,   909,
     588,   876,   876,   899,   574,   351,   823,   821,   574,   574,
     349,   615,   251,   258,    79,    81,    84,   156,   168,   176,
     201,   257,   300,   316,   347,   348,   639,   640,   818,   819,
     358,   852,   853,   852,   853,   574,    66,   290,   657,   655,
     574,   134,   672,   577,   308,   678,   679,   680,   115,   681,
     308,   293,    86,   693,   695,   872,    58,    88,   193,   299,
     689,   690,   875,   763,   270,   921,   918,   852,   465,   713,
     944,   723,   872,   331,   727,   944,   125,   574,   907,   138,
     735,   829,   139,   739,   200,   838,   574,   837,   746,   214,
     774,   897,   141,   775,   230,   824,   825,   234,   899,   852,
     225,   875,   117,   799,   285,   801,   154,   353,   815,   830,
     831,   832,   834,    56,   904,   872,   927,   870,   461,   200,
     315,   919,   864,   882,   919,   882,   919,   919,   908,   921,
     297,   545,   865,   574,   882,   882,   919,   821,   574,   574,
     128,   616,   919,   152,   153,   919,   640,   131,   641,   820,
     821,   250,   821,   250,   656,   838,   679,   108,   913,   872,
     872,    86,   697,   690,   167,   697,   182,   307,   768,   919,
     765,   226,   928,   821,   200,   213,    86,   200,   190,   728,
     200,   213,   574,   125,   574,   574,   872,   171,   175,   192,
     196,   843,   844,   845,   846,   847,   574,   142,   784,   352,
     826,   872,   821,   821,   796,   918,   104,   800,   918,   824,
     574,   574,   145,   816,   832,   232,   859,   872,   160,   182,
     187,   229,   805,   856,   893,   944,   223,   864,   204,   233,
     561,   204,   233,   560,   883,     3,   534,   535,   919,   919,
     883,   882,   882,   853,   853,    86,   697,   697,   872,   814,
     237,   856,   172,   229,   769,   865,   879,   258,   872,   919,
     729,   827,   834,   200,   574,   939,   939,   574,   877,   918,
     877,   144,   802,   197,   198,   922,   122,   206,   903,   872,
     872,   535,   864,   883,   821,   821,   872,   697,   295,   698,
     919,   856,   237,   302,   872,   137,   730,   225,   225,   877,
     903,   872,   719,   919,   837,   155,   155,   719,   942,   942
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 158 "parser.y"
    {
	perform_stack = NULL;
	next_label_id = 0;
	current_linage = 0;
	current_storage = 0;
	eval_level = 0;
	eval_inc = 0;
	eval_inc2 = 0;
	prog_end = 0;
	depth = 0;
	deplev = 0;
	inspect_keyword = 0;
	samearea = 1;
	memset ((char *)eval_check, 0, sizeof(eval_check));
	entry_number = 0;
	linage_file = NULL;
	next_label_list = NULL;
	current_program = cb_build_program ();
	cb_build_registers ();
	current_program->gen_main = cb_flag_main;
  ;}
    break;

  case 3:
#line 181 "parser.y"
    {
	if (!current_program->validated) {
		current_program->validated = 1;
		cb_validate_program_body (current_program);
	}
	if (errorcount > 0) {
		YYABORT;
	}
	if (!current_program->entry_list) {
		emit_entry (current_program->program_id, 0, NULL);
	}
  ;}
    break;

  case 6:
#line 202 "parser.y"
    { cb_validate_program_environment (current_program); ;}
    break;

  case 7:
#line 203 "parser.y"
    { cb_validate_program_data (current_program); ;}
    break;

  case 13:
#line 216 "parser.y"
    {
	char			*s;

	if (CB_LITERAL_P (yyvsp[-1])) {
		s = (char *)(CB_LITERAL (yyvsp[-1])->data);
	} else {
		s = (char *)(CB_NAME (yyvsp[-1]));
	}
	if (deplev) {
		deplev--;
	}
	if (strcmp (stack_progid[deplev], s)) {
		cb_error (_("END PROGRAM '%s' is different to PROGRAM-ID '%s'"),
			s, stack_progid[deplev]);
	}
	if (depth) {
		depth--;
	}
	if (!current_program->validated) {
		current_program->validated = 1;
		cb_validate_program_body (current_program);
	}
  ;}
    break;

  case 14:
#line 248 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P (yyvsp[-3])) {
		stack_progid[deplev++] = (char *)(CB_LITERAL (yyvsp[-3])->data);
	} else {
		stack_progid[deplev++] = (char *)(CB_NAME (yyvsp[-3]));
	}
	if (prog_end) {
		struct cb_program	*newx;

		if (!current_program->validated) {
			current_program->validated = 1;
			cb_validate_program_body (current_program);
		}
		perform_stack = NULL;
		next_label_id = 0;
		current_linage = 0;
		current_storage = 0;
		eval_level = 0;
		inspect_keyword = 0;
		eval_inc = 0;
		eval_inc2 = 0;
		samearea = 1;
		memset ((char *)eval_check, 0, sizeof(eval_check));
		entry_number = 0;
		linage_file = NULL;
		next_label_list = NULL;
		newx = current_program;
		current_program = cb_build_program ();
		current_program->next_program = newx;
		cb_build_registers ();
		current_program->static_func = depth;
	} else {
		prog_end = 1;
	}
	depth++;
	current_program->program_id = cb_build_program_id (yyvsp[-3], yyvsp[-2]);
  ;}
    break;

  case 17:
#line 295 "parser.y"
    { yyval = NULL; ;}
    break;

  case 18:
#line 296 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 20:
#line 300 "parser.y"
    { current_program->flag_common = 1; ;}
    break;

  case 21:
#line 301 "parser.y"
    { current_program->flag_initial = 1; ;}
    break;

  case 22:
#line 302 "parser.y"
    { current_program->flag_recursive = 1; ;}
    break;

  case 40:
#line 356 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
  ;}
    break;

  case 41:
#line 362 "parser.y"
    { ;}
    break;

  case 50:
#line 387 "parser.y"
    {
	current_program->collating_sequence = yyvsp[0];
  ;}
    break;

  case 51:
#line 391 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  ;}
    break;

  case 68:
#line 433 "parser.y"
    {
	yyval = lookup_system_name (CB_NAME (yyvsp[0]));
	if (yyval == cb_error_node) {
		cb_error_x (yyvsp[0], _("Unknown system-name '%s'"), CB_NAME (yyvsp[0]));
	}
  ;}
    break;

  case 71:
#line 445 "parser.y"
    {
	if (CB_SYSTEM_NAME(yyvsp[-2])->token != CB_DEVICE_CONSOLE) {
		cb_error_x (yyvsp[-2], _("Invalid CRT clause"));
	}
	/* current_program->flag_screen = 1; */
  ;}
    break;

  case 72:
#line 451 "parser.y"
    { cb_define (yyvsp[0], yyvsp[-2]); ;}
    break;

  case 74:
#line 457 "parser.y"
    {
	cb_define_switch_name (yyvsp[0], yyvsp[-6], yyvsp[-3], yyvsp[-7]);
  ;}
    break;

  case 75:
#line 463 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 76:
#line 464 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 78:
#line 475 "parser.y"
    { cb_build_alphabet_name (yyvsp[-2], CB_ALPHABET_NATIVE); ;}
    break;

  case 79:
#line 476 "parser.y"
    { cb_build_alphabet_name (yyvsp[-2], CB_ALPHABET_STANDARD_1); ;}
    break;

  case 80:
#line 477 "parser.y"
    { cb_build_alphabet_name (yyvsp[-2], CB_ALPHABET_STANDARD_2); ;}
    break;

  case 81:
#line 478 "parser.y"
    { cb_build_alphabet_name (yyvsp[-2], CB_ALPHABET_EBCDIC); ;}
    break;

  case 82:
#line 480 "parser.y"
    {
	cb_tree x = cb_build_alphabet_name (yyvsp[-2], CB_ALPHABET_CUSTOM);

	CB_ALPHABET_NAME (x)->custom_list = yyvsp[0];
	current_program->alphabet_name_list =
		cb_list_add (current_program->alphabet_name_list, x);
  ;}
    break;

  case 83:
#line 490 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 84:
#line 492 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 85:
#line 496 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 86:
#line 497 "parser.y"
    { yyval = cb_build_pair (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 87:
#line 498 "parser.y"
    { yyval = cb_list (yyvsp[-1]); ;}
    break;

  case 88:
#line 499 "parser.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 90:
#line 504 "parser.y"
    { yyval = yyvsp[-2]; ;}
    break;

  case 92:
#line 509 "parser.y"
    { cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 93:
#line 510 "parser.y"
    { /* ignore */ ;}
    break;

  case 94:
#line 511 "parser.y"
    { /* ignore */ ;}
    break;

  case 95:
#line 512 "parser.y"
    { /* ignore */ ;}
    break;

  case 96:
#line 513 "parser.y"
    { cb_high = CB_VALUE (yyvsp[-1]); ;}
    break;

  case 97:
#line 514 "parser.y"
    { cb_low = CB_VALUE (yyvsp[-1]); ;}
    break;

  case 98:
#line 522 "parser.y"
    {
	PENDING ("SYMBOLIC CHARACTERS");
  ;}
    break;

  case 102:
#line 537 "parser.y"
    { ;}
    break;

  case 103:
#line 538 "parser.y"
    { ;}
    break;

  case 104:
#line 542 "parser.y"
    { ;}
    break;

  case 105:
#line 543 "parser.y"
    { ;}
    break;

  case 106:
#line 551 "parser.y"
    {
	current_program->class_name_list =
			cb_list_add (current_program->class_name_list,
			cb_build_class_name (yyvsp[-2], yyvsp[0]));
  ;}
    break;

  case 107:
#line 559 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 108:
#line 560 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 109:
#line 564 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 110:
#line 566 "parser.y"
    {
	/* if (CB_LITERAL ($1)->data[0] < CB_LITERAL ($3)->data[0]) */
	if (literal_value (yyvsp[-2]) < literal_value (yyvsp[0])) {
		yyval = cb_build_pair (yyvsp[-2], yyvsp[0]);
	} else {
		yyval = cb_build_pair (yyvsp[0], yyvsp[-2]);
	}
  ;}
    break;

  case 111:
#line 580 "parser.y"
    {
	cb_tree	l;

	l = cb_build_locale_name (yyvsp[-2], yyvsp[0]);
	if (l != cb_error_node) {
		current_program->locale_list =
			cb_list_add (current_program->locale_list, l);
	}
  ;}
    break;

  case 112:
#line 595 "parser.y"
    {
	unsigned char *s = CB_LITERAL (yyvsp[0])->data;

	if (CB_LITERAL (yyvsp[0])->size != 1) {
		cb_error_x (yyvsp[0], _("Invalid currency sign '%s'"), s);
	}
	switch (*s) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'a':
	case 'A':
	case 'b':
	case 'B':
	case 'c':
	case 'C':
	case 'd':
	case 'D':
	case 'e':
	case 'E':
	case 'n':
	case 'N':
	case 'p':
	case 'P':
	case 'r':
	case 'R':
	case 's':
	case 'S':
	case 'v':
	case 'V':
	case 'x':
	case 'X':
	case 'z':
	case 'Z':
	case '+':
	case '-':
	case ',':
	case '.':
	case '*':
	case '/':
	case ';':
	case '(':
	case ')':
	case '=':
	case '"':
	case ' ':
		cb_error_x (yyvsp[0], _("Invalid currency sign '%s'"), s);
		break;
	default:
		break;
	}
	current_program->currency_symbol = s[0];
  ;}
    break;

  case 113:
#line 662 "parser.y"
    {
	current_program->decimal_point = ',';
	current_program->numeric_separator = '.';
  ;}
    break;

  case 114:
#line 672 "parser.y"
    { current_program->cursor_pos = yyvsp[0]; ;}
    break;

  case 115:
#line 679 "parser.y"
    { current_program->crt_status = yyvsp[0]; ;}
    break;

  case 116:
#line 686 "parser.y"
    {  PENDING ("SCREEN CONTROL"); ;}
    break;

  case 117:
#line 692 "parser.y"
    {  PENDING ("EVENT STATUS"); ;}
    break;

  case 124:
#line 720 "parser.y"
    {
	organized_seen = 0;
	if (yyvsp[0] == cb_error_node) {
		YYERROR;
	}

	/* build new file */
	current_file = build_file (yyvsp[0]);
	current_file->optional = CB_INTEGER (yyvsp[-1])->val;

	/* register the file */
	current_program->file_list =
		cb_cons (CB_TREE (current_file), current_program->file_list);
  ;}
    break;

  case 125:
#line 735 "parser.y"
    {
	validate_file (current_file, yyvsp[-3]);
  ;}
    break;

  case 141:
#line 765 "parser.y"
    {
	current_file->assign = cb_build_assignment_name (current_file, yyvsp[0]);
  ;}
    break;

  case 143:
#line 772 "parser.y"
    {
	current_file->external_assign = 1;
  ;}
    break;

  case 146:
#line 781 "parser.y"
    {
	const char	*s;

	s = "$#@DUMMY@#$";
	yyval = cb_build_alphanumeric_literal ((unsigned char *)s, strlen(s));
  ;}
    break;

  case 149:
#line 798 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; ;}
    break;

  case 150:
#line 799 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; ;}
    break;

  case 151:
#line 800 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; ;}
    break;

  case 152:
#line 808 "parser.y"
    {
	struct cb_alt_key *p = cobc_malloc (sizeof (struct cb_alt_key));

	p->key = yyvsp[-2];
	p->duplicates = CB_INTEGER (yyvsp[0])->val;
	p->next = NULL;

	/* add to the end of list */
	if (current_file->alt_key_list == NULL) {
		current_file->alt_key_list = p;
	} else {
		struct cb_alt_key *l = current_file->alt_key_list;
		for (; l->next; l = l->next);
		l->next = p;
	}
  ;}
    break;

  case 153:
#line 831 "parser.y"
    {
	PENDING ("COLLATING SEQUENCE");
  ;}
    break;

  case 154:
#line 841 "parser.y"
    {
	current_file->file_status = yyvsp[-1];
	if (yyvsp[0]) {
		PENDING ("2nd FILE STATUS");
	}
  ;}
    break;

  case 156:
#line 857 "parser.y"
    { current_file->lock_mode = COB_LOCK_MANUAL; ;}
    break;

  case 157:
#line 858 "parser.y"
    { current_file->lock_mode = COB_LOCK_AUTOMATIC; ;}
    break;

  case 158:
#line 859 "parser.y"
    { current_file->lock_mode = COB_LOCK_EXCLUSIVE; ;}
    break;

  case 161:
#line 864 "parser.y"
    { current_file->lock_mode |= COB_LOCK_MULTIPLE; ;}
    break;

  case 162:
#line 865 "parser.y"
    { PENDING ("WITH ROLLBACK"); ;}
    break;

  case 165:
#line 878 "parser.y"
    {
	if (organized_seen) {
		cb_error (_("Invalid or duplicate ORGANIZED clause"));
	} else {
		current_file->organization = COB_ORG_INDEXED;
		organized_seen = 1;
	}
  ;}
    break;

  case 166:
#line 887 "parser.y"
    {
	if (organized_seen) {
		cb_error (_("Invalid or duplicate ORGANIZED clause"));
	} else {
		current_file->organization = COB_ORG_SEQUENTIAL;
		organized_seen = 1;
	}
  ;}
    break;

  case 167:
#line 896 "parser.y"
    {
	if (organized_seen) {
		cb_error (_("Invalid or duplicate ORGANIZED clause"));
	} else {
		current_file->organization = COB_ORG_RELATIVE;
		organized_seen = 1;
	}
  ;}
    break;

  case 168:
#line 905 "parser.y"
    {
	if (organized_seen) {
		cb_error (_("Invalid or duplicate ORGANIZED clause"));
	} else {
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		organized_seen = 1;
	}
  ;}
    break;

  case 169:
#line 920 "parser.y"
    {
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  ;}
    break;

  case 170:
#line 929 "parser.y"
    { /* ignored */ ;}
    break;

  case 171:
#line 936 "parser.y"
    { current_file->key = yyvsp[-1]; ;}
    break;

  case 173:
#line 940 "parser.y"
    { PENDING ("SPLIT KEYS"); ;}
    break;

  case 174:
#line 941 "parser.y"
    { PENDING ("SPLIT KEYS"); ;}
    break;

  case 175:
#line 947 "parser.y"
    { current_file->key = yyvsp[0]; ;}
    break;

  case 176:
#line 954 "parser.y"
    { /* ignored */ ;}
    break;

  case 177:
#line 961 "parser.y"
    { current_file->sharing = yyvsp[0]; ;}
    break;

  case 178:
#line 965 "parser.y"
    { yyval = NULL; PENDING ("SHARING ALL OTHER"); ;}
    break;

  case 179:
#line 966 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 180:
#line 967 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 189:
#line 997 "parser.y"
    {
	cb_tree l;

	switch (CB_INTEGER (yyvsp[-3])->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
			if (CB_VALUE (l) != cb_error_node) {
				CB_FILE (cb_ref (CB_VALUE (l)))->same_clause = samearea;
			}
		}
		samearea++;
		break;
	case 2:
		/* SAME SORT-MERGE */
		break;
	}
  ;}
    break;

  case 190:
#line 1021 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 191:
#line 1022 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 192:
#line 1023 "parser.y"
    { yyval = cb_int2; ;}
    break;

  case 193:
#line 1024 "parser.y"
    { yyval = cb_int2; ;}
    break;

  case 194:
#line 1031 "parser.y"
    {
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
  ;}
    break;

  case 198:
#line 1043 "parser.y"
    { ;}
    break;

  case 204:
#line 1070 "parser.y"
    { current_storage = CB_STORAGE_FILE; ;}
    break;

  case 206:
#line 1073 "parser.y"
    {
	/* hack for MF compatibility */
	if (cb_relaxed_syntax_check) {
		cb_warning (_("FILE SECTION header missing - assumed"));
	} else {
		cb_error (_("FILE SECTION header missing"));
	}
	current_storage = CB_STORAGE_FILE;
  ;}
    break;

  case 210:
#line 1092 "parser.y"
    {
	if (yyvsp[0] && yyvsp[0] != cb_error_node) {
		finalize_file (current_file, CB_FIELD (yyvsp[0]));
	} else {
		cb_error (_("RECORD description missing or invalid"));
	}
  ;}
    break;

  case 211:
#line 1104 "parser.y"
    {
	if (yyvsp[0] && yyvsp[0] != cb_error_node) {
		finalize_file (current_file, CB_FIELD (yyvsp[0]));
	} else {
		cb_error (_("RECORD description missing or invalid"));
	}
  ;}
    break;

  case 213:
#line 1115 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 214:
#line 1116 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 215:
#line 1126 "parser.y"
    {
	if (yyvsp[0] == cb_error_node) {
		YYERROR;
	}

	current_file = CB_FILE (cb_ref (yyvsp[0]));
	if (yyvsp[-1] == cb_int1) {
		current_file->organization = COB_ORG_SORT;
	}
  ;}
    break;

  case 219:
#line 1144 "parser.y"
    { current_file->external = 1; ;}
    break;

  case 220:
#line 1145 "parser.y"
    { PENDING ("GLOBAL"); ;}
    break;

  case 229:
#line 1161 "parser.y"
    { /* ignored */ ;}
    break;

  case 233:
#line 1170 "parser.y"
    {
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		cb_error (_("RECORD clause invalid for LINE SEQUENTIAL"));
	} else {
		current_file->record_max = cb_get_int (yyvsp[-1]);
	}
  ;}
    break;

  case 234:
#line 1178 "parser.y"
    {
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		cb_error (_("RECORD clause invalid for LINE SEQUENTIAL"));
	} else {
		current_file->record_min = cb_get_int (yyvsp[-3]);
		current_file->record_max = cb_get_int (yyvsp[-1]);
	}
  ;}
    break;

  case 235:
#line 1188 "parser.y"
    {
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		cb_error (_("RECORD clause invalid for LINE SEQUENTIAL"));
	} else {
		current_file->record_min = yyvsp[-3] ? cb_get_int (yyvsp[-3]) : 0;
		current_file->record_max = yyvsp[-2] ? cb_get_int (yyvsp[-2]) : 0;
	}
  ;}
    break;

  case 237:
#line 1200 "parser.y"
    {
	current_file->record_depending = yyvsp[0];
  ;}
    break;

  case 238:
#line 1206 "parser.y"
    { yyval = NULL; ;}
    break;

  case 239:
#line 1207 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 240:
#line 1211 "parser.y"
    { yyval = NULL; ;}
    break;

  case 241:
#line 1212 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 242:
#line 1220 "parser.y"
    {
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  ;}
    break;

  case 245:
#line 1235 "parser.y"
    {
	cb_verify (cb_value_of_clause, "VALUE OF");
  ;}
    break;

  case 246:
#line 1245 "parser.y"
    {
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  ;}
    break;

  case 247:
#line 1256 "parser.y"
    {
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL
	    && current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
		yyval = cb_error_node;
	} else {
		current_file->linage = yyvsp[-2];
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  ;}
    break;

  case 253:
#line 1284 "parser.y"
    {
	current_file->latfoot = yyvsp[-1];
  ;}
    break;

  case 254:
#line 1291 "parser.y"
    {
	current_file->lattop = yyvsp[-1];
  ;}
    break;

  case 255:
#line 1298 "parser.y"
    {
	current_file->latbot = yyvsp[0];
  ;}
    break;

  case 256:
#line 1307 "parser.y"
    { /* ignore */ ;}
    break;

  case 257:
#line 1315 "parser.y"
    {
	if (yyvsp[0] != cb_error_node) {
		cb_tree x = cb_ref (yyvsp[0]);

		if (!CB_ALPHABET_NAME_P (x)) {
			cb_error_x (yyvsp[0], _("Alphabet-name is expected '%s'"), cb_name (yyvsp[0]));
		} else if (CB_ALPHABET_NAME (x)->custom_list) {
			PENDING ("CODE-SET");
		}
	}
  ;}
    break;

  case 259:
#line 1334 "parser.y"
    { current_storage = CB_STORAGE_WORKING; ;}
    break;

  case 260:
#line 1336 "parser.y"
    {
	if (yyvsp[0]) {
		current_program->working_storage =
			cb_field_add (current_program->working_storage, CB_FIELD (yyvsp[0]));
	}
  ;}
    break;

  case 261:
#line 1345 "parser.y"
    { yyval = NULL; ;}
    break;

  case 262:
#line 1346 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 263:
#line 1350 "parser.y"
    {
	current_field = NULL;
  ;}
    break;

  case 264:
#line 1354 "parser.y"
    {
	struct cb_field *p;

	for (p = CB_FIELD (yyvsp[0]); p; p = p->sister) {
		cb_validate_field (p);
	}
	yyval = yyvsp[0];
  ;}
    break;

  case 265:
#line 1365 "parser.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 266:
#line 1367 "parser.y"
    { yyval = yyvsp[-2]; ;}
    break;

  case 267:
#line 1368 "parser.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 268:
#line 1373 "parser.y"
    {
	cb_tree x = cb_build_field_tree (yyvsp[-1], yyvsp[0], current_field, current_storage, current_file);

	if (x == cb_error_node) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
	}
  ;}
    break;

  case 269:
#line 1383 "parser.y"
    {
	if (current_field->level == 88) {
		cb_validate_88_item (current_field);
	}
	if (current_field->flag_item_78) {
		cb_validate_78_item (current_field);
	}
	yyval = CB_TREE (current_field);
  ;}
    break;

  case 271:
#line 1399 "parser.y"
    { yyval = cb_build_filler (); qualifier = NULL; ;}
    break;

  case 272:
#line 1400 "parser.y"
    { yyval = cb_build_filler (); qualifier = NULL; ;}
    break;

  case 273:
#line 1401 "parser.y"
    { yyval = yyvsp[0]; qualifier = yyvsp[0]; ;}
    break;

  case 274:
#line 1405 "parser.y"
    { yyval = NULL; ;}
    break;

  case 275:
#line 1407 "parser.y"
    { yyval = cb_true; ;}
    break;

  case 289:
#line 1431 "parser.y"
    {
	if (yyvsp[-2] != NULL) {
		cb_error_x (yyvsp[0], _("REDEFINES clause must follow entry-name"));
	}

	current_field->redefines = cb_resolve_redefines (current_field, yyvsp[0]);
	if (current_field->redefines == NULL) {
		YYERROR;
	}
  ;}
    break;

  case 290:
#line 1448 "parser.y"
    {
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("EXTERNAL not allowed here"));
		yyval = cb_error_node;
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("EXTERNAL only allowed at 01/77 level"));
		yyval = cb_error_node;
	} else {
		current_field->flag_external = 1;
		has_external = 1;
	}
  ;}
    break;

  case 291:
#line 1463 "parser.y"
    { current_field->ename = NULL; ;}
    break;

  case 292:
#line 1465 "parser.y"
    {
	struct cb_field *x = CB_FIELD(cb_build_field (cb_build_reference ((char *)(CB_LITERAL (yyvsp[0])->data))));

	current_field->ename = x->name;
 ;}
    break;

  case 293:
#line 1475 "parser.y"
    { PENDING ("GLOBAL"); ;}
    break;

  case 294:
#line 1482 "parser.y"
    { current_field->pic = CB_PICTURE (yyvsp[0]); ;}
    break;

  case 297:
#line 1494 "parser.y"
    { current_field->usage = CB_USAGE_BINARY; ;}
    break;

  case 298:
#line 1495 "parser.y"
    { current_field->usage = CB_USAGE_BINARY; ;}
    break;

  case 299:
#line 1496 "parser.y"
    { current_field->usage = CB_USAGE_FLOAT; ;}
    break;

  case 300:
#line 1497 "parser.y"
    { current_field->usage = CB_USAGE_DOUBLE; ;}
    break;

  case 301:
#line 1498 "parser.y"
    { current_field->usage = CB_USAGE_PACKED; ;}
    break;

  case 302:
#line 1499 "parser.y"
    { current_field->usage = CB_USAGE_BINARY; ;}
    break;

  case 303:
#line 1500 "parser.y"
    { current_field->usage = CB_USAGE_COMP_5; ;}
    break;

  case 304:
#line 1501 "parser.y"
    { current_field->usage = CB_USAGE_COMP_X; ;}
    break;

  case 305:
#line 1502 "parser.y"
    { current_field->usage = CB_USAGE_DISPLAY; ;}
    break;

  case 306:
#line 1503 "parser.y"
    { current_field->usage = CB_USAGE_INDEX; ;}
    break;

  case 307:
#line 1504 "parser.y"
    { current_field->usage = CB_USAGE_PACKED; ;}
    break;

  case 308:
#line 1505 "parser.y"
    { current_field->usage = CB_USAGE_POINTER; ;}
    break;

  case 309:
#line 1506 "parser.y"
    { current_field->usage = CB_USAGE_PROGRAM_POINTER; ;}
    break;

  case 310:
#line 1507 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_SHORT; ;}
    break;

  case 311:
#line 1508 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_INT; ;}
    break;

  case 312:
#line 1509 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_LONG; ;}
    break;

  case 313:
#line 1510 "parser.y"
    { current_field->usage = CB_USAGE_UNSIGNED_SHORT; ;}
    break;

  case 314:
#line 1511 "parser.y"
    { current_field->usage = CB_USAGE_UNSIGNED_INT; ;}
    break;

  case 315:
#line 1512 "parser.y"
    { current_field->usage = CB_USAGE_UNSIGNED_LONG; ;}
    break;

  case 316:
#line 1513 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_CHAR; ;}
    break;

  case 317:
#line 1514 "parser.y"
    { current_field->usage = CB_USAGE_UNSIGNED_CHAR; ;}
    break;

  case 318:
#line 1515 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_CHAR; ;}
    break;

  case 319:
#line 1516 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_SHORT; ;}
    break;

  case 320:
#line 1517 "parser.y"
    { current_field->usage = CB_USAGE_UNSIGNED_SHORT; ;}
    break;

  case 321:
#line 1518 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_SHORT; ;}
    break;

  case 322:
#line 1519 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_INT; ;}
    break;

  case 323:
#line 1520 "parser.y"
    { current_field->usage = CB_USAGE_UNSIGNED_INT; ;}
    break;

  case 324:
#line 1521 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_INT; ;}
    break;

  case 325:
#line 1522 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_LONG; ;}
    break;

  case 326:
#line 1523 "parser.y"
    { current_field->usage = CB_USAGE_UNSIGNED_LONG; ;}
    break;

  case 327:
#line 1524 "parser.y"
    { current_field->usage = CB_USAGE_SIGNED_LONG; ;}
    break;

  case 328:
#line 1532 "parser.y"
    {
	current_field->flag_sign_separate = CB_INTEGER (yyvsp[0])->val;
	current_field->flag_sign_leading  = 1;
  ;}
    break;

  case 329:
#line 1537 "parser.y"
    {
	current_field->flag_sign_separate = CB_INTEGER (yyvsp[0])->val;
	current_field->flag_sign_leading  = 0;
  ;}
    break;

  case 330:
#line 1549 "parser.y"
    {
	if (current_field->occurs_depending && !(yyvsp[-4])) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = yyvsp[-4] ? cb_get_int (yyvsp[-5]) : 1;
	current_field->occurs_max = yyvsp[-4] ? cb_get_int (yyvsp[-4]) : cb_get_int (yyvsp[-5]);
	current_field->indexes++;
	current_field->flag_occurs = 1;
  ;}
    break;

  case 331:
#line 1561 "parser.y"
    { yyval = NULL; ;}
    break;

  case 332:
#line 1562 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 334:
#line 1567 "parser.y"
    {
	current_field->occurs_depending = yyvsp[0];
  ;}
    break;

  case 335:
#line 1574 "parser.y"
    {
	if (yyvsp[0]) {
		int i, nkeys = cb_list_length (yyvsp[0]);
		struct cb_key *keys = cobc_malloc (sizeof (struct cb_key) * nkeys);
		cb_tree l = yyvsp[0];

		for (i = 0; i < nkeys; i++) {
			keys[i].dir = CB_PURPOSE_INT (l);
			keys[i].key = CB_VALUE (l);
			l = CB_CHAIN (l);
		}
		current_field->keys = keys;
		current_field->nkeys = nkeys;
	}
  ;}
    break;

  case 336:
#line 1592 "parser.y"
    { yyval = NULL; ;}
    break;

  case 337:
#line 1595 "parser.y"
    {
	cb_tree l;

	for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = yyvsp[-3];
		if (!CB_REFERENCE(CB_VALUE(l))->chain &&
		    strcasecmp(CB_NAME(CB_VALUE(l)), CB_NAME(qualifier))) {
			CB_REFERENCE(CB_VALUE(l))->chain = qualifier;
		}
	}
	yyval = cb_list_append (yyvsp[-4], yyvsp[0]);
  ;}
    break;

  case 338:
#line 1610 "parser.y"
    { yyval = cb_int (COB_ASCENDING); ;}
    break;

  case 339:
#line 1611 "parser.y"
    { yyval = cb_int (COB_DESCENDING); ;}
    break;

  case 341:
#line 1615 "parser.y"
    { current_field->index_list = yyvsp[0]; ;}
    break;

  case 342:
#line 1619 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 343:
#line 1621 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 344:
#line 1626 "parser.y"
    {
	yyval = cb_build_index (yyvsp[0]);
	if (yyval != cb_error_node) {
		CB_FIELD (cb_ref (yyval))->values = cb_list (cb_int1);
	}
  ;}
    break;

  case 345:
#line 1638 "parser.y"
    { current_field->flag_justified = 1; ;}
    break;

  case 346:
#line 1645 "parser.y"
    { current_field->flag_synchronized = 1; ;}
    break;

  case 350:
#line 1657 "parser.y"
    { current_field->flag_blank_zero = 1; ;}
    break;

  case 351:
#line 1664 "parser.y"
    { current_field->flag_item_based = 1; ;}
    break;

  case 352:
#line 1670 "parser.y"
    { current_field->values = yyvsp[0]; ;}
    break;

  case 354:
#line 1675 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 355:
#line 1676 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 356:
#line 1680 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 357:
#line 1681 "parser.y"
    { yyval = cb_build_pair (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 359:
#line 1686 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = cb_list(yyvsp[0]);
  ;}
    break;

  case 360:
#line 1699 "parser.y"
    {
	if (cb_ref (yyvsp[0]) != cb_error_node) {
		if (CB_FIELD (cb_ref (yyvsp[0]))->level == 01 ||
		    CB_FIELD (cb_ref (yyvsp[0]))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref (yyvsp[0]));
			current_field->pic = current_field->redefines->pic;
		}
	}
  ;}
    break;

  case 361:
#line 1711 "parser.y"
    {
	if (cb_ref (yyvsp[-2]) != cb_error_node && cb_ref (yyvsp[0]) != cb_error_node) {
		if (CB_FIELD (cb_ref (yyvsp[-2]))->level == 01 ||
		    CB_FIELD (cb_ref (yyvsp[-2]))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else if (CB_FIELD (cb_ref (yyvsp[0]))->level == 01 ||
		    CB_FIELD (cb_ref (yyvsp[0]))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref (yyvsp[-2]));
			current_field->rename_thru = CB_FIELD (cb_ref (yyvsp[0]));
		}
	}
  ;}
    break;

  case 363:
#line 1733 "parser.y"
    { current_storage = CB_STORAGE_LOCAL; ;}
    break;

  case 364:
#line 1735 "parser.y"
    {
	if (yyvsp[0]) {
		current_program->local_storage = CB_FIELD (yyvsp[0]);
	}
  ;}
    break;

  case 366:
#line 1748 "parser.y"
    { current_storage = CB_STORAGE_LINKAGE; ;}
    break;

  case 367:
#line 1750 "parser.y"
    {
	if (yyvsp[0]) {
		current_program->linkage_storage = CB_FIELD (yyvsp[0]);
	}
  ;}
    break;

  case 369:
#line 1763 "parser.y"
    { current_storage = CB_STORAGE_SCREEN; ;}
    break;

  case 370:
#line 1764 "parser.y"
    {
	current_field = NULL;
  ;}
    break;

  case 371:
#line 1768 "parser.y"
    {
	if (yyvsp[0]) {
		struct cb_field *p;

		for (p = CB_FIELD (yyvsp[0]); p; p = p->sister) {
			cb_validate_field (p);
		}
		current_program->screen_storage = CB_FIELD (yyvsp[0]);
		current_program->flag_screen = 1;
	}
  ;}
    break;

  case 372:
#line 1782 "parser.y"
    { yyval = NULL; ;}
    break;

  case 373:
#line 1783 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 374:
#line 1787 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 375:
#line 1789 "parser.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 376:
#line 1794 "parser.y"
    {
	cb_tree x = cb_build_field_tree (yyvsp[-1], yyvsp[0], current_field, current_storage, current_file);

	if (x == cb_error_node) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	current_field->screen_flag |= COB_SCREEN_FG_NONE;
	current_field->screen_flag |= COB_SCREEN_BG_NONE;
	if (current_field->parent) {
		current_field->screen_flag |= current_field->parent->screen_flag;
	}
  ;}
    break;

  case 377:
#line 1809 "parser.y"
    {
	if (!current_field->screen_line) {
		current_field->screen_line = cb_zero;
		current_field->screen_flag |= COB_SCREEN_LINE_CONST;
	}
	if (!current_field->screen_column) {
		current_field->screen_column = cb_zero;
		current_field->screen_flag |= COB_SCREEN_COLUMN_CONST;
	}
	yyval = CB_TREE (current_field);
  ;}
    break;

  case 380:
#line 1827 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_BLANK_LINE; ;}
    break;

  case 381:
#line 1828 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_BLANK_SCREEN; ;}
    break;

  case 382:
#line 1829 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_BELL; ;}
    break;

  case 383:
#line 1830 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_BLINK; ;}
    break;

  case 384:
#line 1831 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_ERASE_EOL; ;}
    break;

  case 385:
#line 1832 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_ERASE_EOS; ;}
    break;

  case 386:
#line 1833 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_HIGHLIGHT; ;}
    break;

  case 387:
#line 1834 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_LOWLIGHT; ;}
    break;

  case 388:
#line 1835 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_REVERSE; ;}
    break;

  case 389:
#line 1836 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_UNDERLINE; ;}
    break;

  case 390:
#line 1837 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_OVERLINE; ;}
    break;

  case 391:
#line 1838 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_AUTO; ;}
    break;

  case 392:
#line 1839 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_SECURE; ;}
    break;

  case 393:
#line 1840 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_REQUIRED; ;}
    break;

  case 394:
#line 1841 "parser.y"
    { current_field->screen_flag |= COB_SCREEN_FULL; ;}
    break;

  case 395:
#line 1843 "parser.y"
    {
	/* Nothing yet */
  ;}
    break;

  case 396:
#line 1847 "parser.y"
    {
	current_field->screen_line = yyvsp[0];
	if (CB_LITERAL_P (yyvsp[0])) {
		current_field->screen_flag |= COB_SCREEN_LINE_CONST;
	}
  ;}
    break;

  case 397:
#line 1854 "parser.y"
    {
	current_field->screen_column = yyvsp[0];
	if (CB_LITERAL_P (yyvsp[0])) {
		current_field->screen_flag |= COB_SCREEN_LINE_CONST;
	}
  ;}
    break;

  case 398:
#line 1861 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_FG_MASK;
	switch (cb_get_int (yyvsp[0])) {
	case 0:
		current_field->screen_flag |= COB_SCREEN_FG_BLACK;
		break;
	case 1:
		current_field->screen_flag |= COB_SCREEN_FG_BLUE;
		break;
	case 2:
		current_field->screen_flag |= COB_SCREEN_FG_GREEN;
		break;
	case 3:
		current_field->screen_flag |= COB_SCREEN_FG_CYAN;
		break;
	case 4:
		current_field->screen_flag |= COB_SCREEN_FG_RED;
		break;
	case 5:
		current_field->screen_flag |= COB_SCREEN_FG_MAGENTA;
		break;
	case 6:
		current_field->screen_flag |= COB_SCREEN_FG_YELLOW;
		break;
	case 7:
		current_field->screen_flag |= COB_SCREEN_FG_WHITE;
		break;
	default:
		cb_error (_("Invalid color '%d'"), cb_get_int (yyvsp[0]));
	}
  ;}
    break;

  case 399:
#line 1893 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_BG_MASK;
	switch (cb_get_int (yyvsp[0])) {
	case 0:
		current_field->screen_flag |= COB_SCREEN_BG_BLACK;
		break;
	case 1:
		current_field->screen_flag |= COB_SCREEN_BG_BLUE;
		break;
	case 2:
		current_field->screen_flag |= COB_SCREEN_BG_GREEN;
		break;
	case 3:
		current_field->screen_flag |= COB_SCREEN_BG_CYAN;
		break;
	case 4:
		current_field->screen_flag |= COB_SCREEN_BG_RED;
		break;
	case 5:
		current_field->screen_flag |= COB_SCREEN_BG_MAGENTA;
		break;
	case 6:
		current_field->screen_flag |= COB_SCREEN_BG_YELLOW;
		break;
	case 7:
		current_field->screen_flag |= COB_SCREEN_BG_WHITE;
		break;
	default:
		cb_error (_("Invalid color '%d'"), cb_get_int (yyvsp[0]));
	}
  ;}
    break;

  case 406:
#line 1931 "parser.y"
    {
	current_field->screen_from = yyvsp[0];
	current_field->screen_to = yyvsp[0];
  ;}
    break;

  case 407:
#line 1936 "parser.y"
    {
	current_field->screen_from = yyvsp[0];
  ;}
    break;

  case 408:
#line 1940 "parser.y"
    {
	current_field->screen_to = yyvsp[0];
  ;}
    break;

  case 409:
#line 1947 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_LINE_MASK;
	current_field->screen_flag |= COB_SCREEN_LINE_ABS;
  ;}
    break;

  case 410:
#line 1952 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_LINE_MASK;
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  ;}
    break;

  case 411:
#line 1957 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_LINE_MASK;
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  ;}
    break;

  case 412:
#line 1965 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_COLUMN_MASK;
	current_field->screen_flag |= COB_SCREEN_COLUMN_ABS;
  ;}
    break;

  case 413:
#line 1970 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_COLUMN_MASK;
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  ;}
    break;

  case 414:
#line 1975 "parser.y"
    {
	current_field->screen_flag &= ~COB_SCREEN_COLUMN_MASK;
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  ;}
    break;

  case 416:
#line 1988 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	cb_define_system_name ("CONSOLE");
	cb_define_system_name ("SYSIN");
	cb_define_system_name ("SYSOUT");
	cb_define_system_name ("SYSERR");
  ;}
    break;

  case 417:
#line 1997 "parser.y"
    {
	if (current_program->gen_main && !current_program->is_chained && yyvsp[-3]) {
		cb_error (_("Executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	emit_entry (current_program->program_id, 0, yyvsp[-3]); /* main entry point */
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, yyvsp[-3]);
	}
  ;}
    break;

  case 418:
#line 2007 "parser.y"
    {
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
  ;}
    break;

  case 420:
#line 2024 "parser.y"
    { in_declaratives = 1; ;}
    break;

  case 421:
#line 2027 "parser.y"
    {
	in_declaratives = 0;
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		current_paragraph = NULL;
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
		current_section = NULL;
	}
  ;}
    break;

  case 427:
#line 2060 "parser.y"
    {
	if (next_label_list) {
		cb_tree label;
		char name[16];

		sprintf (name, "L$%d", next_label_id);
		label = cb_build_reference (name);
		emit_statement (cb_build_label (label, 0));
		current_program->label_list =
			cb_list_append (current_program->label_list, next_label_list);
		next_label_list = NULL;
		next_label_id++;
	}
  ;}
    break;

  case 430:
#line 2085 "parser.y"
    {
	if (yyvsp[-3] == cb_error_node) {
		YYERROR;
	}

	/* Exit the last section */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}

	/* Begin a new section */
	current_section = CB_LABEL (cb_build_label (yyvsp[-3], NULL));
	current_section->is_section = 1;
	current_paragraph = NULL;
	emit_statement (CB_TREE (current_section));
  ;}
    break;

  case 431:
#line 2114 "parser.y"
    {
	cb_tree label;

	yyval = cb_build_section_name (yyvsp[-1], 1);
	/* if ($1 == cb_error_node) */
	if (yyval == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}

	/* Begin a new paragraph */
	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->is_section = 1;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label (yyval, current_section));
	if (current_section) {
		current_section->children =
			cb_cons (CB_TREE (current_paragraph), current_section->children);
	}
	emit_statement (CB_TREE (current_paragraph));
  ;}
    break;

  case 432:
#line 2149 "parser.y"
    {
	if (yyvsp[0] != cb_error_node) {
		cb_error_x (yyvsp[0], _("Unknown statement '%s'"), CB_NAME (yyvsp[0]));
	}
	YYERROR;
  ;}
    break;

  case 433:
#line 2158 "parser.y"
    { yyval = cb_build_section_name (yyvsp[0], 0); ;}
    break;

  case 435:
#line 2162 "parser.y"
    { /* ignore */ ;}
    break;

  case 436:
#line 2171 "parser.y"
    {
	yyval = current_program->exec_list;
	current_program->exec_list = NULL;
  ;}
    break;

  case 437:
#line 2175 "parser.y"
    {
	yyval = CB_TREE (current_statement);
	current_statement->need_terminator = 1;
	current_statement = NULL;
  ;}
    break;

  case 438:
#line 2181 "parser.y"
    {
	yyval = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = yyvsp[-2];
	current_statement = CB_STATEMENT (yyvsp[-1]);
  ;}
    break;

  case 439:
#line 2189 "parser.y"
    {
	cb_tree label;

	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->is_section = 1;
		emit_statement (CB_TREE (current_section));
	}
	if (!current_paragraph) {
		label = cb_build_reference ("MAIN PARAGRAPH");
		current_paragraph = CB_LABEL (cb_build_label (label, NULL));
		emit_statement (CB_TREE (current_paragraph));
		current_section->children =
			cb_cons (CB_TREE (current_paragraph), current_section->children);
	}
  ;}
    break;

  case 485:
#line 2255 "parser.y"
    {
	if (cb_verify (cb_next_sentence_phrase, "NEXT SENTENCE")) {
		cb_tree label;
		char	name[16];

		BEGIN_STATEMENT ("NEXT SENTENCE");
		sprintf (name, "L$%d", next_label_id);
		label = cb_build_reference (name);
		next_label_list = cb_list_add (next_label_list, label);
		emit_statement (cb_build_goto (label, 0));
	}
  ;}
    break;

  case 486:
#line 2275 "parser.y"
    { BEGIN_STATEMENT ("ACCEPT"); dispattrs = 0; ;}
    break;

  case 488:
#line 2281 "parser.y"
    { cb_emit_accept (yyvsp[-2], yyvsp[-1]); ;}
    break;

  case 489:
#line 2283 "parser.y"
    {
	PENDING ("ACCEPT .. FROM ESCAPE KEY");
  ;}
    break;

  case 490:
#line 2286 "parser.y"
    { cb_emit_accept_date (yyvsp[-2]); ;}
    break;

  case 491:
#line 2287 "parser.y"
    { cb_emit_accept_date_yyyymmdd (yyvsp[-3]); ;}
    break;

  case 492:
#line 2288 "parser.y"
    { cb_emit_accept_day (yyvsp[-2]); ;}
    break;

  case 493:
#line 2289 "parser.y"
    { cb_emit_accept_day_yyyyddd (yyvsp[-3]); ;}
    break;

  case 494:
#line 2290 "parser.y"
    { cb_emit_accept_day_of_week (yyvsp[-2]); ;}
    break;

  case 495:
#line 2291 "parser.y"
    { cb_emit_accept_time (yyvsp[-2]); ;}
    break;

  case 496:
#line 2292 "parser.y"
    { cb_emit_accept_command_line (yyvsp[-2]); ;}
    break;

  case 497:
#line 2293 "parser.y"
    { cb_emit_accept_environment (yyvsp[-3]); ;}
    break;

  case 498:
#line 2295 "parser.y"
    { 
	cb_emit_display (cb_list (yyvsp[-1]), cb_true, NULL, NULL, 0L);
	cb_emit_accept_environment (yyvsp[-4]);
  ;}
    break;

  case 499:
#line 2299 "parser.y"
    { cb_emit_accept_arg_number (yyvsp[-2]); ;}
    break;

  case 500:
#line 2300 "parser.y"
    { cb_emit_accept_arg_value (yyvsp[-3]); ;}
    break;

  case 501:
#line 2301 "parser.y"
    { cb_emit_accept_mnemonic (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 502:
#line 2302 "parser.y"
    { cb_emit_accept_name (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 503:
#line 2306 "parser.y"
    { yyval = NULL; ;}
    break;

  case 504:
#line 2307 "parser.y"
    { yyval = cb_build_pair (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 505:
#line 2308 "parser.y"
    { yyval = cb_build_pair (yyvsp[0], yyvsp[-1]); ;}
    break;

  case 506:
#line 2309 "parser.y"
    { yyval = cb_build_pair (yyvsp[0], NULL); ;}
    break;

  case 507:
#line 2310 "parser.y"
    { yyval = cb_build_pair (NULL, yyvsp[0]); ;}
    break;

  case 508:
#line 2311 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 509:
#line 2315 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 510:
#line 2319 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 531:
#line 2358 "parser.y"
    { BEGIN_STATEMENT ("ADD"); ;}
    break;

  case 533:
#line 2365 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], '+', cb_build_binary_list (yyvsp[-3], '+'));
  ;}
    break;

  case 534:
#line 2369 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_list (yyvsp[-4], '+'));
  ;}
    break;

  case 535:
#line 2373 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, yyvsp[-2], yyvsp[-4], yyvsp[-1]);
  ;}
    break;

  case 537:
#line 2379 "parser.y"
    { cb_list_add (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 538:
#line 2383 "parser.y"
    { terminator_warning (); ;}
    break;

  case 540:
#line 2393 "parser.y"
    { BEGIN_STATEMENT ("ALLOCATE"); ;}
    break;

  case 542:
#line 2399 "parser.y"
    {
	cb_emit_allocate (NULL, yyvsp[0], yyvsp[-4], yyvsp[-2]);
  ;}
    break;

  case 543:
#line 2403 "parser.y"
    {
	cb_emit_allocate (yyvsp[-2], yyvsp[0], NULL, yyvsp[-1]);
  ;}
    break;

  case 544:
#line 2409 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 545:
#line 2410 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 546:
#line 2413 "parser.y"
    { yyval = NULL; ;}
    break;

  case 547:
#line 2414 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 548:
#line 2424 "parser.y"
    {
	cb_error (_("ALTER statement is obsolete and unsupported"));
  ;}
    break;

  case 553:
#line 2442 "parser.y"
    { BEGIN_STATEMENT ("CALL"); ;}
    break;

  case 554:
#line 2446 "parser.y"
    {
	cb_emit_call (yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1]);
  ;}
    break;

  case 555:
#line 2452 "parser.y"
    { yyval = NULL; ;}
    break;

  case 556:
#line 2453 "parser.y"
    { call_mode = cb_int (CB_CALL_BY_REFERENCE); ;}
    break;

  case 557:
#line 2454 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 558:
#line 2456 "parser.y"
    {
	call_mode = cb_int (CB_CALL_BY_REFERENCE);
	current_program->is_chained = 1;
  ;}
    break;

  case 559:
#line 2460 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 560:
#line 2464 "parser.y"
    { yyval = NULL; ;}
    break;

  case 561:
#line 2465 "parser.y"
    { call_mode = cb_int (CB_CALL_BY_REFERENCE); ;}
    break;

  case 562:
#line 2466 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 563:
#line 2470 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 564:
#line 2472 "parser.y"
    { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 565:
#line 2477 "parser.y"
    {
	if (call_mode != cb_int (CB_CALL_BY_REFERENCE)) {
		cb_error (_("OMITTED only allowed with BY REFERENCE"));
	}
	yyval = cb_build_pair (call_mode, cb_null);
  ;}
    break;

  case 566:
#line 2484 "parser.y"
    {
	if (call_mode != cb_int (CB_CALL_BY_REFERENCE)) {
		cb_error (_("OMITTED only allowed with BY REFERENCE"));
	}
	yyval = cb_build_pair (call_mode, cb_null);
  ;}
    break;

  case 567:
#line 2490 "parser.y"
    { yyval = cb_build_pair (call_mode, yyvsp[0]); ;}
    break;

  case 568:
#line 2491 "parser.y"
    { yyval = cb_build_pair (call_mode, yyvsp[0]); ;}
    break;

  case 569:
#line 2496 "parser.y"
    {
	call_mode = cb_int (CB_CALL_BY_REFERENCE);
  ;}
    break;

  case 570:
#line 2500 "parser.y"
    {
	if (current_program->is_chained) {
		cb_error (_("BY CONTENT not allowed in CHAINED program"));
	} else {
		call_mode = cb_int (CB_CALL_BY_CONTENT);
	}
  ;}
    break;

  case 571:
#line 2508 "parser.y"
    {
	if (current_program->is_chained) {
		cb_error (_("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = cb_int (CB_CALL_BY_VALUE);
	}
  ;}
    break;

  case 572:
#line 2518 "parser.y"
    { yyval = NULL; ;}
    break;

  case 573:
#line 2519 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 574:
#line 2520 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 575:
#line 2524 "parser.y"
    { yyval = NULL; ;}
    break;

  case 576:
#line 2525 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 577:
#line 2526 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 578:
#line 2530 "parser.y"
    { yyval = NULL; ;}
    break;

  case 579:
#line 2532 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 580:
#line 2536 "parser.y"
    { terminator_warning (); ;}
    break;

  case 582:
#line 2546 "parser.y"
    { BEGIN_STATEMENT ("CANCEL"); ;}
    break;

  case 585:
#line 2552 "parser.y"
    {
	cb_emit_cancel (yyvsp[0]);
  ;}
    break;

  case 586:
#line 2563 "parser.y"
    { BEGIN_STATEMENT ("CLOSE"); ;}
    break;

  case 589:
#line 2570 "parser.y"
    {
	BEGIN_IMPLICIT_STATEMENT ();
	cb_emit_close (yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 590:
#line 2577 "parser.y"
    { yyval = cb_int (COB_CLOSE_NORMAL); ;}
    break;

  case 591:
#line 2578 "parser.y"
    { yyval = cb_int (COB_CLOSE_UNIT); ;}
    break;

  case 592:
#line 2579 "parser.y"
    { yyval = cb_int (COB_CLOSE_UNIT_REMOVAL); ;}
    break;

  case 593:
#line 2580 "parser.y"
    { yyval = cb_int (COB_CLOSE_NO_REWIND); ;}
    break;

  case 594:
#line 2581 "parser.y"
    { yyval = cb_int (COB_CLOSE_LOCK); ;}
    break;

  case 597:
#line 2592 "parser.y"
    { BEGIN_STATEMENT ("COMPUTE"); ;}
    break;

  case 599:
#line 2599 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-3], 0, yyvsp[-1]);
  ;}
    break;

  case 600:
#line 2605 "parser.y"
    { terminator_warning (); ;}
    break;

  case 604:
#line 2617 "parser.y"
    {
	BEGIN_STATEMENT ("COMMIT");
	cb_emit_commit ();
  ;}
    break;

  case 605:
#line 2630 "parser.y"
    {
	BEGIN_STATEMENT ("CONTINUE");
	cb_emit_continue ();
  ;}
    break;

  case 606:
#line 2642 "parser.y"
    { BEGIN_STATEMENT ("DELETE"); ;}
    break;

  case 607:
#line 2645 "parser.y"
    {
	cb_emit_delete (yyvsp[-3]);
  ;}
    break;

  case 608:
#line 2651 "parser.y"
    { terminator_warning (); ;}
    break;

  case 610:
#line 2661 "parser.y"
    { BEGIN_STATEMENT ("DISPLAY"); dispattrs = 0; ;}
    break;

  case 611:
#line 2664 "parser.y"
    {
	cb_emit_display (yyvsp[-5], yyvsp[-3], yyvsp[-2], yyvsp[-4], dispattrs);
  ;}
    break;

  case 612:
#line 2670 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 613:
#line 2671 "parser.y"
    { yyval = cb_build_display_upon (yyvsp[0]); ;}
    break;

  case 614:
#line 2672 "parser.y"
    { yyval = cb_build_display_upon_direct (yyvsp[0]); ;}
    break;

  case 615:
#line 2673 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 616:
#line 2674 "parser.y"
    { yyval = cb_true; ;}
    break;

  case 617:
#line 2675 "parser.y"
    { yyval = cb_int3; ;}
    break;

  case 618:
#line 2676 "parser.y"
    { yyval = cb_int4; ;}
    break;

  case 619:
#line 2680 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 620:
#line 2681 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 621:
#line 2682 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 624:
#line 2692 "parser.y"
    { dispattrs |= COB_SCREEN_BELL; ;}
    break;

  case 625:
#line 2693 "parser.y"
    { dispattrs |= COB_SCREEN_BLINK; ;}
    break;

  case 626:
#line 2694 "parser.y"
    { dispattrs |= COB_SCREEN_ERASE_EOL; ;}
    break;

  case 627:
#line 2695 "parser.y"
    { dispattrs |= COB_SCREEN_ERASE_EOS; ;}
    break;

  case 628:
#line 2696 "parser.y"
    { dispattrs |= COB_SCREEN_HIGHLIGHT; ;}
    break;

  case 629:
#line 2697 "parser.y"
    { dispattrs |= COB_SCREEN_LOWLIGHT; ;}
    break;

  case 630:
#line 2698 "parser.y"
    { dispattrs |= COB_SCREEN_REVERSE; ;}
    break;

  case 631:
#line 2699 "parser.y"
    { dispattrs |= COB_SCREEN_UNDERLINE; ;}
    break;

  case 632:
#line 2700 "parser.y"
    { dispattrs |= COB_SCREEN_OVERLINE; ;}
    break;

  case 633:
#line 2702 "parser.y"
    {
	dispattrs &= ~COB_SCREEN_FG_MASK;
	switch (cb_get_int (yyvsp[0])) {
	case 0:
		dispattrs |= COB_SCREEN_FG_BLACK;
		break;
	case 1:
		dispattrs |= COB_SCREEN_FG_BLUE;
		break;
	case 2:
		dispattrs |= COB_SCREEN_FG_GREEN;
		break;
	case 3:
		dispattrs |= COB_SCREEN_FG_CYAN;
		break;
	case 4:
		dispattrs |= COB_SCREEN_FG_RED;
		break;
	case 5:
		dispattrs |= COB_SCREEN_FG_MAGENTA;
		break;
	case 6:
		dispattrs |= COB_SCREEN_FG_YELLOW;
		break;
	case 7:
		dispattrs |= COB_SCREEN_FG_WHITE;
		break;
	default:
		cb_error (_("Invalid color '%d'"), cb_get_int (yyvsp[0]));
	}
  ;}
    break;

  case 634:
#line 2734 "parser.y"
    {
	dispattrs &= ~COB_SCREEN_BG_MASK;
	switch (cb_get_int (yyvsp[0])) {
	case 0:
		dispattrs |= COB_SCREEN_BG_BLACK;
		break;
	case 1:
		dispattrs |= COB_SCREEN_BG_BLUE;
		break;
	case 2:
		dispattrs |= COB_SCREEN_BG_GREEN;
		break;
	case 3:
		dispattrs |= COB_SCREEN_BG_CYAN;
		break;
	case 4:
		dispattrs |= COB_SCREEN_BG_RED;
		break;
	case 5:
		dispattrs |= COB_SCREEN_BG_MAGENTA;
		break;
	case 6:
		dispattrs |= COB_SCREEN_BG_YELLOW;
		break;
	case 7:
		dispattrs |= COB_SCREEN_BG_WHITE;
		break;
	default:
		cb_error (_("Invalid color '%d'"), cb_get_int (yyvsp[0]));
	}
  ;}
    break;

  case 635:
#line 2765 "parser.y"
    { dispattrs |= COB_SCREEN_BLANK_LINE; ;}
    break;

  case 636:
#line 2766 "parser.y"
    { dispattrs |= COB_SCREEN_BLANK_SCREEN; ;}
    break;

  case 639:
#line 2779 "parser.y"
    { BEGIN_STATEMENT ("DIVIDE"); ;}
    break;

  case 641:
#line 2786 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], '/', yyvsp[-3]);
  ;}
    break;

  case 642:
#line 2790 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_op (yyvsp[-3], '/', yyvsp[-5]));
  ;}
    break;

  case 643:
#line 2794 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_op (yyvsp[-5], '/', yyvsp[-3]));
  ;}
    break;

  case 644:
#line 2798 "parser.y"
    {
	cb_emit_divide (yyvsp[-5], yyvsp[-7], yyvsp[-3], yyvsp[-1]);
  ;}
    break;

  case 645:
#line 2802 "parser.y"
    {
	cb_emit_divide (yyvsp[-7], yyvsp[-5], yyvsp[-3], yyvsp[-1]);
  ;}
    break;

  case 646:
#line 2808 "parser.y"
    { terminator_warning (); ;}
    break;

  case 648:
#line 2818 "parser.y"
    { BEGIN_STATEMENT ("ENTRY"); ;}
    break;

  case 649:
#line 2820 "parser.y"
    {
	if (cb_verify (cb_entry_statement, "ENTRY")) {
		emit_entry ((char *)(CB_LITERAL (yyvsp[-1])->data), 1, yyvsp[0]);
	}
  ;}
    break;

  case 650:
#line 2834 "parser.y"
    {
	BEGIN_STATEMENT ("EVALUATE");
	eval_level++;
	for (eval_inc = 0; eval_inc < 64; eval_inc++) {
		eval_check[eval_level][eval_inc] = 0;
	}
	eval_inc = 0;
	eval_inc2 = 0;
  ;}
    break;

  case 651:
#line 2845 "parser.y"
    {
	cb_emit_evaluate (yyvsp[-2], yyvsp[-1]);
	eval_level--;
  ;}
    break;

  case 652:
#line 2852 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 653:
#line 2854 "parser.y"
    { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 654:
#line 2859 "parser.y"
    {
	yyval = yyvsp[0];
	if (CB_REFERENCE_P(yyvsp[0])) {
		eval_check[eval_level][eval_inc++] = 0;
	} else {
		eval_check[eval_level][eval_inc++] = 1;
	}
  ;}
    break;

  case 655:
#line 2868 "parser.y"
    {
	yyval = cb_true;
	eval_check[eval_level][eval_inc++] = 2;
  ;}
    break;

  case 656:
#line 2873 "parser.y"
    {
	yyval = cb_false;
	eval_check[eval_level][eval_inc++] = 3;
  ;}
    break;

  case 657:
#line 2880 "parser.y"
    { yyval = NULL; ;}
    break;

  case 658:
#line 2882 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 659:
#line 2887 "parser.y"
    { yyval = cb_cons (yyvsp[0], yyvsp[-1]); eval_inc2 = 0; ;}
    break;

  case 660:
#line 2889 "parser.y"
    { yyval = cb_cons (yyvsp[0], NULL); eval_inc2 = 0; ;}
    break;

  case 661:
#line 2893 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 662:
#line 2895 "parser.y"
    { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 663:
#line 2899 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 664:
#line 2901 "parser.y"
    { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 665:
#line 2906 "parser.y"
    {
	cb_tree not = cb_int0;
	cb_tree e1;
	cb_tree e2 = yyvsp[0];

	/* in case the first token is NOT */
	if (CB_PURPOSE_INT (yyvsp[-1]) == '!') {
		if (eval_check[eval_level][eval_inc2] < 2) {
			not = cb_int1;
			yyvsp[-1] = CB_CHAIN (yyvsp[-1]);
		}
	}

	/* build expr now */
	e1 = cb_build_expr (yyvsp[-1]);

	if (e2 == NULL) {
		/* WHEN expr */
		eval_inc2++;
 /*
		if (not == cb_int1 && CB_BINARY_OP_P (e1)
		    && (CB_BINARY_OP (e1)->op == '&' || CB_BINARY_OP (e1)->op == '|')) {
			cb_error_x (e1, _("FIXME: failed to compile \"WHEN NOT ... AND/OR ...\""));
			cb_error_x (e1, _("FIXME: change it into \"WHEN (NOT ... AND/OR ...)\" for now"));
		}
 */
		yyval = cb_build_pair (not, cb_build_pair (e1, 0));
	} else {
		/* WHEN expr THRU expr */
		yyval = cb_build_pair (not, cb_build_pair (e1, e2));
		eval_inc2++;
	}
  ;}
    break;

  case 666:
#line 2939 "parser.y"
    { yyval = cb_any; eval_inc2++; ;}
    break;

  case 667:
#line 2940 "parser.y"
    { yyval = cb_true; eval_inc2++; ;}
    break;

  case 668:
#line 2941 "parser.y"
    { yyval = cb_false; eval_inc2++; ;}
    break;

  case 669:
#line 2944 "parser.y"
    { yyval = NULL; ;}
    break;

  case 670:
#line 2945 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 671:
#line 2949 "parser.y"
    { terminator_warning (); ;}
    break;

  case 673:
#line 2959 "parser.y"
    { BEGIN_STATEMENT ("EXIT"); ;}
    break;

  case 675:
#line 2964 "parser.y"
    { /* nothing */ ;}
    break;

  case 676:
#line 2965 "parser.y"
    { cb_emit_exit (0); ;}
    break;

  case 677:
#line 2967 "parser.y"
    {
	struct cb_perform *p;
	char name[64];

	if (!perform_stack) {
		cb_error (_("EXIT PERFORM is only valid with inline PERFORM"));
	} else {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->exit_label) {
			sprintf (name, "EXIT PERFORM %d", cb_id);
			p->exit_label = cb_build_reference (name);
			CB_LABEL (cb_build_label (p->exit_label, 0))->need_begin = 1;
		}
		cb_emit_goto (cb_list (p->exit_label), 0);
	}
  ;}
    break;

  case 678:
#line 2984 "parser.y"
    {
	struct cb_perform *p;
	char name[64];

	if (!perform_stack) {
		cb_error (_("EXIT PERFORM is only valid with inline PERFORM"));
	} else {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->cycle_label) {
			sprintf (name, "EXIT PERFORM CYCLE %d", cb_id);
			p->cycle_label = cb_build_reference (name);
			CB_LABEL (cb_build_label (p->cycle_label, 0))->need_begin = 1;
		}
		cb_emit_goto (cb_list (p->cycle_label), 0);
	}
  ;}
    break;

  case 679:
#line 3001 "parser.y"
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_section) {
		cb_error (_("EXIT SECTION is only valid with an active SECTION"));
	} else {
		if (!current_section->exit_label) {
			sprintf (name, "EXIT SECTION %d", cb_id);
			plabel = cb_build_reference(name);
			current_section->exit_label = cb_build_label (plabel, NULL);
			current_section->exit_label_ref = plabel;
			CB_LABEL (current_section->exit_label)->need_begin = 1;
		}
		cb_emit_goto (cb_list (current_section->exit_label_ref), 0);
	}
  ;}
    break;

  case 680:
#line 3019 "parser.y"
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_paragraph) {
		cb_error (_("EXIT PARAGRAPH is only valid with an active PARAGRAPH"));
	} else {
		if (!current_paragraph->exit_label) {
			sprintf (name, "EXIT PARAGRAPH %d", cb_id);
			plabel = cb_build_reference(name);
			current_paragraph->exit_label = cb_build_label (plabel, NULL);
			current_paragraph->exit_label_ref = plabel;
			CB_LABEL (current_paragraph->exit_label)->need_begin = 1;
		}
		cb_emit_goto (cb_list (current_paragraph->exit_label_ref), 0);
	}
  ;}
    break;

  case 681:
#line 3044 "parser.y"
    { BEGIN_STATEMENT ("FREE"); ;}
    break;

  case 682:
#line 3046 "parser.y"
    {
	cb_emit_free (yyvsp[0])
  ;}
    break;

  case 683:
#line 3057 "parser.y"
    { BEGIN_STATEMENT ("GO TO"); ;}
    break;

  case 684:
#line 3059 "parser.y"
    {
	cb_emit_goto (yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 685:
#line 3065 "parser.y"
    { yyval = NULL; ;}
    break;

  case 686:
#line 3066 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 687:
#line 3075 "parser.y"
    { BEGIN_STATEMENT ("GOBACK"); ;}
    break;

  case 688:
#line 3076 "parser.y"
    {
	cb_emit_exit (1);
  ;}
    break;

  case 689:
#line 3087 "parser.y"
    { BEGIN_STATEMENT ("IF"); ;}
    break;

  case 690:
#line 3090 "parser.y"
    {
	cb_emit_if (yyvsp[-4], yyvsp[-2], yyvsp[-1]);
  ;}
    break;

  case 692:
#line 3097 "parser.y"
    { yyval = NULL; ;}
    break;

  case 693:
#line 3098 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 694:
#line 3102 "parser.y"
    { terminator_warning (); ;}
    break;

  case 696:
#line 3112 "parser.y"
    { BEGIN_STATEMENT ("INITIALIZE"); ;}
    break;

  case 697:
#line 3114 "parser.y"
    {
	cb_emit_initialize (yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 698:
#line 3120 "parser.y"
    { yyval = NULL; ;}
    break;

  case 699:
#line 3121 "parser.y"
    { yyval = cb_true; ;}
    break;

  case 700:
#line 3125 "parser.y"
    { yyval = NULL; ;}
    break;

  case 701:
#line 3126 "parser.y"
    { yyval = cb_true; ;}
    break;

  case 702:
#line 3127 "parser.y"
    { yyval = yyvsp[-2]; ;}
    break;

  case 703:
#line 3131 "parser.y"
    { yyval = NULL; ;}
    break;

  case 704:
#line 3133 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 705:
#line 3137 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 706:
#line 3139 "parser.y"
    { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 707:
#line 3143 "parser.y"
    { yyval = cb_build_pair (yyvsp[-3], yyvsp[0]); ;}
    break;

  case 708:
#line 3147 "parser.y"
    { yyval = cb_int (CB_CATEGORY_ALPHABETIC); ;}
    break;

  case 709:
#line 3148 "parser.y"
    { yyval = cb_int (CB_CATEGORY_ALPHANUMERIC); ;}
    break;

  case 710:
#line 3149 "parser.y"
    { yyval = cb_int (CB_CATEGORY_NUMERIC); ;}
    break;

  case 711:
#line 3150 "parser.y"
    { yyval = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); ;}
    break;

  case 712:
#line 3151 "parser.y"
    { yyval = cb_int (CB_CATEGORY_NUMERIC_EDITED); ;}
    break;

  case 713:
#line 3152 "parser.y"
    { yyval = cb_int (CB_CATEGORY_NATIONAL); ;}
    break;

  case 714:
#line 3153 "parser.y"
    { yyval = cb_int (CB_CATEGORY_NATIONAL_EDITED); ;}
    break;

  case 715:
#line 3157 "parser.y"
    { yyval = NULL; ;}
    break;

  case 716:
#line 3158 "parser.y"
    { yyval = cb_true; ;}
    break;

  case 717:
#line 3168 "parser.y"
    {
	BEGIN_STATEMENT ("INSPECT");
	sending_id = 0;
	inspect_keyword = 0;
  ;}
    break;

  case 719:
#line 3177 "parser.y"
    { yyval = yyvsp[0]; sending_id = 0; ;}
    break;

  case 720:
#line 3178 "parser.y"
    { yyval = yyvsp[0]; sending_id = 1; ;}
    break;

  case 721:
#line 3179 "parser.y"
    { yyval = yyvsp[0]; sending_id = 1; ;}
    break;

  case 724:
#line 3187 "parser.y"
    { cb_emit_inspect (yyvsp[-2], yyvsp[0], cb_int0, 0); ;}
    break;

  case 725:
#line 3188 "parser.y"
    { cb_emit_inspect (yyvsp[-2], yyvsp[0], cb_int1, 1); ;}
    break;

  case 726:
#line 3189 "parser.y"
    { cb_emit_inspect (yyvsp[-2], yyvsp[0], cb_int0, 2); ;}
    break;

  case 727:
#line 3195 "parser.y"
    { cb_init_tarrying (); ;}
    break;

  case 728:
#line 3196 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 729:
#line 3200 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 730:
#line 3201 "parser.y"
    { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 731:
#line 3205 "parser.y"
    { yyval = cb_build_tarrying_data (yyvsp[-1]); ;}
    break;

  case 732:
#line 3206 "parser.y"
    { yyval = cb_build_tarrying_characters (yyvsp[0]); ;}
    break;

  case 733:
#line 3207 "parser.y"
    { yyval = cb_build_tarrying_all (); ;}
    break;

  case 734:
#line 3208 "parser.y"
    { yyval = cb_build_tarrying_leading (); ;}
    break;

  case 735:
#line 3209 "parser.y"
    { yyval = cb_build_tarrying_trailing (); ;}
    break;

  case 736:
#line 3210 "parser.y"
    { yyval = cb_build_tarrying_value (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 737:
#line 3216 "parser.y"
    { yyval = yyvsp[0]; inspect_keyword = 0; ;}
    break;

  case 738:
#line 3220 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 739:
#line 3221 "parser.y"
    { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 740:
#line 3226 "parser.y"
    {
	yyval = cb_build_replacing_characters (yyvsp[-1], yyvsp[0]);
	inspect_keyword = 0;
  ;}
    break;

  case 741:
#line 3230 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 742:
#line 3234 "parser.y"
    { /* Nothing */ ;}
    break;

  case 743:
#line 3235 "parser.y"
    { inspect_keyword = 1; ;}
    break;

  case 744:
#line 3236 "parser.y"
    { inspect_keyword = 2; ;}
    break;

  case 745:
#line 3237 "parser.y"
    { inspect_keyword = 3; ;}
    break;

  case 746:
#line 3238 "parser.y"
    { inspect_keyword = 4; ;}
    break;

  case 747:
#line 3243 "parser.y"
    {
	switch (inspect_keyword) {
		case 1:
			yyval = cb_build_replacing_all (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		case 2:
			yyval = cb_build_replacing_leading (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		case 3:
			yyval = cb_build_replacing_first (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		case 4:
			yyval = cb_build_replacing_trailing (yyvsp[-3], yyvsp[-1], yyvsp[0]);
			break;
		default:
			cb_error (_("INSPECT missing a keyword"));
			yyval = cb_error_node;
			break;
	}
  ;}
    break;

  case 748:
#line 3268 "parser.y"
    { yyval = cb_build_converting (yyvsp[-3], yyvsp[-1], yyvsp[0]); ;}
    break;

  case 749:
#line 3274 "parser.y"
    { yyval = cb_build_inspect_region_start (); ;}
    break;

  case 750:
#line 3276 "parser.y"
    { yyval = cb_build_inspect_region (yyvsp[-3], yyvsp[-2], yyvsp[0]); ;}
    break;

  case 753:
#line 3287 "parser.y"
    { BEGIN_STATEMENT ("MERGE"); ;}
    break;

  case 755:
#line 3297 "parser.y"
    { BEGIN_STATEMENT ("MOVE"); ;}
    break;

  case 757:
#line 3303 "parser.y"
    {
	cb_emit_move (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 758:
#line 3307 "parser.y"
    {
	cb_emit_move_corresponding (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 759:
#line 3318 "parser.y"
    { BEGIN_STATEMENT ("MULTIPLY"); ;}
    break;

  case 761:
#line 3325 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], '*', yyvsp[-3]);
  ;}
    break;

  case 762:
#line 3329 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_op (yyvsp[-5], '*', yyvsp[-3]));
  ;}
    break;

  case 763:
#line 3335 "parser.y"
    { terminator_warning (); ;}
    break;

  case 765:
#line 3345 "parser.y"
    { BEGIN_STATEMENT ("OPEN"); ;}
    break;

  case 768:
#line 3352 "parser.y"
    {
	cb_tree l;
	for (l = yyvsp[-1]; l; l = CB_CHAIN (l)) {
		if (CB_VALUE (l) != cb_error_node) {
			BEGIN_IMPLICIT_STATEMENT ();
			cb_emit_open (CB_VALUE (l), yyvsp[-3], yyvsp[-2]);
		}
	}
  ;}
    break;

  case 769:
#line 3364 "parser.y"
    { yyval = cb_int (COB_OPEN_INPUT); ;}
    break;

  case 770:
#line 3365 "parser.y"
    { yyval = cb_int (COB_OPEN_OUTPUT); ;}
    break;

  case 771:
#line 3366 "parser.y"
    { yyval = cb_int (COB_OPEN_I_O); ;}
    break;

  case 772:
#line 3367 "parser.y"
    { yyval = cb_int (COB_OPEN_EXTEND); ;}
    break;

  case 773:
#line 3371 "parser.y"
    { yyval = NULL; ;}
    break;

  case 774:
#line 3372 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 776:
#line 3376 "parser.y"
    { /* ignored */ ;}
    break;

  case 777:
#line 3377 "parser.y"
    { PENDING ("OPEN ... WITH LOCK"); ;}
    break;

  case 778:
#line 3386 "parser.y"
    { BEGIN_STATEMENT ("PERFORM"); ;}
    break;

  case 780:
#line 3392 "parser.y"
    {
	cb_emit_perform (yyvsp[0], yyvsp[-1]);
  ;}
    break;

  case 781:
#line 3396 "parser.y"
    {
	perform_stack = cb_cons (yyvsp[0], perform_stack);
  ;}
    break;

  case 782:
#line 3400 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform (yyvsp[-3], yyvsp[-1]);
  ;}
    break;

  case 783:
#line 3405 "parser.y"
    {
	cb_emit_perform (yyvsp[-1], NULL);
  ;}
    break;

  case 784:
#line 3411 "parser.y"
    { terminator_error (); ;}
    break;

  case 786:
#line 3417 "parser.y"
    {
	CB_REFERENCE (yyvsp[0])->length = cb_true; /* return from $1 */
	yyval = cb_build_pair (yyvsp[0], yyvsp[0]);
  ;}
    break;

  case 787:
#line 3422 "parser.y"
    {
	CB_REFERENCE (yyvsp[0])->length = cb_true; /* return from $3 */
	yyval = cb_build_pair (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 788:
#line 3430 "parser.y"
    {
	yyval = cb_build_perform_once (NULL);
  ;}
    break;

  case 789:
#line 3434 "parser.y"
    {
	yyval = cb_build_perform_times (yyvsp[-1]);
	current_program->loop_counter++;
  ;}
    break;

  case 790:
#line 3439 "parser.y"
    {
	cb_tree varying = cb_list (cb_build_perform_varying (0, 0, 0, yyvsp[0]));
	yyval = cb_build_perform_until (yyvsp[-2], varying);
  ;}
    break;

  case 791:
#line 3444 "parser.y"
    {
	yyval = cb_build_perform_until (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 792:
#line 3450 "parser.y"
    { yyval = CB_BEFORE; ;}
    break;

  case 793:
#line 3451 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 794:
#line 3455 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 795:
#line 3457 "parser.y"
    { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 796:
#line 3462 "parser.y"
    {
	yyval = cb_build_perform_varying (yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 797:
#line 3473 "parser.y"
    { BEGIN_STATEMENT ("READ"); ;}
    break;

  case 798:
#line 3476 "parser.y"
    {
	if (yyvsp[-7] != cb_error_node) {
		if (yyvsp[-3] && (CB_FILE(cb_ref(yyvsp[-7]))->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error (_("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if (yyvsp[-2] &&
		      (CB_FILE(cb_ref(yyvsp[-7]))->organization != COB_ORG_RELATIVE &&
		       CB_FILE(cb_ref(yyvsp[-7]))->organization != COB_ORG_INDEXED)) {
			cb_error (_("KEY clause invalid with this file type"));
		} else if (current_statement->handler_id == COB_EC_I_O_INVALID_KEY &&
		      (CB_FILE(cb_ref(yyvsp[-7]))->organization != COB_ORG_RELATIVE &&
		       CB_FILE(cb_ref(yyvsp[-7]))->organization != COB_ORG_INDEXED)) {
			cb_error (_("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read (yyvsp[-7], yyvsp[-6], yyvsp[-4], yyvsp[-2], yyvsp[-3]);
		}
	}
  ;}
    break;

  case 799:
#line 3496 "parser.y"
    { yyval = NULL; ;}
    break;

  case 800:
#line 3497 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 801:
#line 3501 "parser.y"
    { yyval = NULL; ;}
    break;

  case 802:
#line 3503 "parser.y"
    {
	yyval = cb_int3;
  ;}
    break;

  case 803:
#line 3507 "parser.y"
    {
	yyval = cb_int1;
  ;}
    break;

  case 804:
#line 3511 "parser.y"
    {
	yyval = cb_int2;
  ;}
    break;

  case 805:
#line 3517 "parser.y"
    { yyval = NULL; ;}
    break;

  case 806:
#line 3518 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 810:
#line 3527 "parser.y"
    { terminator_warning (); ;}
    break;

  case 812:
#line 3537 "parser.y"
    { BEGIN_STATEMENT ("RELEASE"); ;}
    break;

  case 813:
#line 3539 "parser.y"
    {
	cb_emit_release (yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 814:
#line 3550 "parser.y"
    { BEGIN_STATEMENT ("RETURN"); ;}
    break;

  case 815:
#line 3553 "parser.y"
    {
	cb_emit_return (yyvsp[-4], yyvsp[-2]);
  ;}
    break;

  case 816:
#line 3559 "parser.y"
    { terminator_warning (); ;}
    break;

  case 818:
#line 3569 "parser.y"
    { BEGIN_STATEMENT ("REWRITE"); ;}
    break;

  case 819:
#line 3572 "parser.y"
    {
	if (yyvsp[-4] != cb_error_node) {
		cb_emit_rewrite (yyvsp[-4], yyvsp[-3], yyvsp[-2]);
	}
  ;}
    break;

  case 820:
#line 3580 "parser.y"
    { yyval = NULL; ;}
    break;

  case 821:
#line 3582 "parser.y"
    {
	yyval = cb_int1;
  ;}
    break;

  case 822:
#line 3586 "parser.y"
    {
	yyval = cb_int2;
  ;}
    break;

  case 823:
#line 3592 "parser.y"
    { terminator_warning (); ;}
    break;

  case 825:
#line 3603 "parser.y"
    {
	BEGIN_STATEMENT ("ROLLBACK");
	cb_emit_rollback ();
  ;}
    break;

  case 826:
#line 3615 "parser.y"
    { BEGIN_STATEMENT ("SEARCH"); ;}
    break;

  case 828:
#line 3622 "parser.y"
    {
	cb_emit_search (yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 829:
#line 3626 "parser.y"
    {
	cb_emit_search_all (yyvsp[-4], yyvsp[-3], yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 830:
#line 3632 "parser.y"
    { yyval = NULL; ;}
    break;

  case 831:
#line 3633 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 832:
#line 3637 "parser.y"
    { yyval = NULL; ;}
    break;

  case 833:
#line 3638 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 834:
#line 3642 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 835:
#line 3643 "parser.y"
    { yyval = yyvsp[-1]; CB_IF (yyvsp[-1])->stmt2 = yyvsp[0]; ;}
    break;

  case 836:
#line 3647 "parser.y"
    { yyval = cb_build_if (yyvsp[-1], yyvsp[0], 0); ;}
    break;

  case 837:
#line 3651 "parser.y"
    { terminator_warning (); ;}
    break;

  case 839:
#line 3661 "parser.y"
    { BEGIN_STATEMENT ("SET"); ;}
    break;

  case 846:
#line 3677 "parser.y"
    {
	cb_emit_setenv (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 847:
#line 3686 "parser.y"
    {
	cb_emit_set_to (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 848:
#line 3695 "parser.y"
    {
	cb_emit_set_up_down (yyvsp[-3], yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 849:
#line 3701 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 850:
#line 3702 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 853:
#line 3714 "parser.y"
    {
	cb_emit_set_on_off (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 856:
#line 3728 "parser.y"
    {
	cb_emit_set_true (yyvsp[-2]);
  ;}
    break;

  case 857:
#line 3732 "parser.y"
    {
	cb_emit_set_false (yyvsp[-2]);
  ;}
    break;

  case 858:
#line 3743 "parser.y"
    { BEGIN_STATEMENT ("SORT"); ;}
    break;

  case 860:
#line 3749 "parser.y"
    {
	cb_emit_sort_init (yyvsp[-3], yyvsp[-2], yyvsp[0]);
	if (CB_FILE_P (cb_ref (yyvsp[-3])) && yyvsp[-2] == NULL) {
		cb_error (_("File sort requires KEY phrase"));
	}
	yyval = yyvsp[-3]; /* used in sort_input/sort_output */
  ;}
    break;

  case 861:
#line 3757 "parser.y"
    {
	cb_emit_sort_finish (yyvsp[-6]);
  ;}
    break;

  case 862:
#line 3764 "parser.y"
    {
	yyval = NULL;
  ;}
    break;

  case 863:
#line 3769 "parser.y"
    {
	cb_tree l;

	if (yyvsp[0] == NULL) {
		yyvsp[0] = cb_list (NULL);
	}
	for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = yyvsp[-2];
	}
	yyval = cb_list_append (yyvsp[-4], yyvsp[0]);
  ;}
    break;

  case 864:
#line 3783 "parser.y"
    { yyval = NULL; ;}
    break;

  case 865:
#line 3784 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 867:
#line 3788 "parser.y"
    { /* nothing */ ;}
    break;

  case 868:
#line 3792 "parser.y"
    { yyval = cb_null; ;}
    break;

  case 869:
#line 3793 "parser.y"
    { yyval = cb_ref (yyvsp[0]); ;}
    break;

  case 870:
#line 3798 "parser.y"
    {
	if (CB_FILE_P (cb_ref (yyvsp[0]))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  ;}
    break;

  case 871:
#line 3804 "parser.y"
    {
	if (!CB_FILE_P (cb_ref (yyvsp[-2]))) {
		cb_error (_("USING invalid with table SORT"));
	} else {
		cb_emit_sort_using (yyvsp[-2], yyvsp[0]);
	}
  ;}
    break;

  case 872:
#line 3812 "parser.y"
    {
	if (!CB_FILE_P (cb_ref (yyvsp[-4]))) {
		cb_error (_("INPUT PROCEDURE invalid with table SORT"));
	} else {
		cb_emit_sort_input (yyvsp[0]);
	}
  ;}
    break;

  case 873:
#line 3823 "parser.y"
    {
	if (CB_FILE_P (cb_ref (yyvsp[-1]))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  ;}
    break;

  case 874:
#line 3829 "parser.y"
    {
	if (!CB_FILE_P (cb_ref (yyvsp[-3]))) {
		cb_error (_("GIVING invalid with table SORT"));
	} else {
		cb_emit_sort_giving (yyvsp[-3], yyvsp[0]);
	}
  ;}
    break;

  case 875:
#line 3837 "parser.y"
    {
	if (!CB_FILE_P (cb_ref (yyvsp[-5]))) {
		cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
	} else {
		cb_emit_sort_output (yyvsp[0]);
	}
  ;}
    break;

  case 876:
#line 3852 "parser.y"
    { BEGIN_STATEMENT ("START"); ;}
    break;

  case 877:
#line 3853 "parser.y"
    { yyval = cb_int (COB_EQ); ;}
    break;

  case 878:
#line 3856 "parser.y"
    {
	if (CB_FILE_P (cb_ref (yyvsp[-4]))) {
		if (CB_FILE (cb_ref (yyvsp[-4]))->organization != COB_ORG_INDEXED &&
		     CB_FILE (cb_ref (yyvsp[-4]))->organization != COB_ORG_RELATIVE) {
			cb_error (_("START not allowed on SEQUENTIAL files"));
			yyval = cb_error_node;
		} else {
			cb_emit_start (yyvsp[-4], yyvsp[-3], yyvsp[-2]);
		}
	} else {
		cb_error_x (yyvsp[-4], _("'%s' not file name"), CB_NAME (yyvsp[-4]));
		yyval = cb_error_node;
	}
  ;}
    break;

  case 879:
#line 3873 "parser.y"
    { yyval = NULL; ;}
    break;

  case 880:
#line 3874 "parser.y"
    { yyvsp[-4] = yyvsp[-1]; yyval = yyvsp[0]; ;}
    break;

  case 881:
#line 3878 "parser.y"
    { yyval = cb_int ((yyvsp[-1] == cb_int1) ? COB_NE : COB_EQ); ;}
    break;

  case 882:
#line 3879 "parser.y"
    { yyval = cb_int ((yyvsp[-1] == cb_int1) ? COB_LE : COB_GT); ;}
    break;

  case 883:
#line 3880 "parser.y"
    { yyval = cb_int ((yyvsp[-1] == cb_int1) ? COB_GE : COB_LT); ;}
    break;

  case 884:
#line 3881 "parser.y"
    { yyval = cb_int ((yyvsp[-1] == cb_int1) ? COB_LT : COB_GE); ;}
    break;

  case 885:
#line 3882 "parser.y"
    { yyval = cb_int ((yyvsp[-1] == cb_int1) ? COB_GT : COB_LE); ;}
    break;

  case 886:
#line 3886 "parser.y"
    { terminator_warning (); ;}
    break;

  case 888:
#line 3896 "parser.y"
    { BEGIN_STATEMENT ("STOP"); ;}
    break;

  case 889:
#line 3898 "parser.y"
    {
	cb_emit_stop_run (yyvsp[0]);
  ;}
    break;

  case 890:
#line 3902 "parser.y"
    {
	cb_verify (cb_stop_literal_statement, "STOP literal");
  ;}
    break;

  case 891:
#line 3908 "parser.y"
    { yyval = current_program->cb_return_code; ;}
    break;

  case 892:
#line 3909 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 893:
#line 3910 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 894:
#line 3919 "parser.y"
    { BEGIN_STATEMENT ("STRING"); ;}
    break;

  case 895:
#line 3922 "parser.y"
    {
	cb_emit_string (yyvsp[-5], yyvsp[-3], yyvsp[-2]);
  ;}
    break;

  case 896:
#line 3928 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 897:
#line 3929 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 898:
#line 3933 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 899:
#line 3934 "parser.y"
    { yyval = cb_build_pair (cb_int0, 0); ;}
    break;

  case 900:
#line 3935 "parser.y"
    { yyval = cb_build_pair (yyvsp[0], 0); ;}
    break;

  case 901:
#line 3939 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 902:
#line 3940 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 903:
#line 3944 "parser.y"
    { terminator_warning (); ;}
    break;

  case 905:
#line 3954 "parser.y"
    { BEGIN_STATEMENT ("SUBTRACT"); ;}
    break;

  case 907:
#line 3961 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], '-', cb_build_binary_list (yyvsp[-3], '+'));
  ;}
    break;

  case 908:
#line 3965 "parser.y"
    {
	cb_emit_arithmetic (yyvsp[-1], 0, cb_build_binary_list (cb_cons (yyvsp[-3], yyvsp[-5]), '-'));
  ;}
    break;

  case 909:
#line 3969 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, yyvsp[-2], yyvsp[-4], yyvsp[-1]);
  ;}
    break;

  case 910:
#line 3975 "parser.y"
    { terminator_warning (); ;}
    break;

  case 912:
#line 3985 "parser.y"
    { BEGIN_STATEMENT ("UNLOCK"); ;}
    break;

  case 913:
#line 3986 "parser.y"
    { PENDING ("UNLOCK"); ;}
    break;

  case 917:
#line 4001 "parser.y"
    { BEGIN_STATEMENT ("UNSTRING"); ;}
    break;

  case 918:
#line 4005 "parser.y"
    {
	cb_emit_unstring (yyvsp[-6], yyvsp[-5], yyvsp[-4], yyvsp[-3], yyvsp[-2]);
  ;}
    break;

  case 919:
#line 4011 "parser.y"
    { yyval = NULL; ;}
    break;

  case 920:
#line 4013 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 921:
#line 4017 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 922:
#line 4019 "parser.y"
    { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 923:
#line 4024 "parser.y"
    {
	yyval = cb_build_unstring_delimited (yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 924:
#line 4030 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 925:
#line 4032 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 926:
#line 4037 "parser.y"
    {
	yyval = cb_build_unstring_into (yyvsp[-2], yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 927:
#line 4043 "parser.y"
    { yyval = NULL; ;}
    break;

  case 928:
#line 4044 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 929:
#line 4048 "parser.y"
    { yyval = NULL; ;}
    break;

  case 930:
#line 4049 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 931:
#line 4053 "parser.y"
    { yyval = NULL; ;}
    break;

  case 932:
#line 4054 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 933:
#line 4058 "parser.y"
    { terminator_warning (); ;}
    break;

  case 937:
#line 4075 "parser.y"
    {
	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (!current_section) {
		cb_error (_("SECTION header missing before USE statement"));
	} else {
		current_section->need_begin = 1;
		current_section->need_return = 1;
		CB_EXCEPTION_ENABLE (COB_EC_I_O) = 1;
	}
  ;}
    break;

  case 938:
#line 4090 "parser.y"
    {
	cb_tree l;

	for (l = yyvsp[0]; l; l = CB_CHAIN (l)) {
		if (CB_VALUE (l) != cb_error_node) {
			CB_FILE (cb_ref (CB_VALUE (l)))->handler = current_section;
		}
	}
  ;}
    break;

  case 939:
#line 4099 "parser.y"
    { current_program->file_handler[COB_OPEN_INPUT]  = current_section; ;}
    break;

  case 940:
#line 4100 "parser.y"
    { current_program->file_handler[COB_OPEN_OUTPUT] = current_section; ;}
    break;

  case 941:
#line 4101 "parser.y"
    { current_program->file_handler[COB_OPEN_I_O]    = current_section; ;}
    break;

  case 942:
#line 4102 "parser.y"
    { current_program->file_handler[COB_OPEN_EXTEND] = current_section; ;}
    break;

  case 947:
#line 4110 "parser.y"
    {
	PENDING ("USE FOR DEBUGGING");
  ;}
    break;

  case 950:
#line 4126 "parser.y"
    { BEGIN_STATEMENT ("WRITE"); ;}
    break;

  case 951:
#line 4129 "parser.y"
    {
	if (yyvsp[-5] != cb_error_node) {
		cb_emit_write (yyvsp[-5], yyvsp[-4], yyvsp[-2], yyvsp[-3]);
	}
  ;}
    break;

  case 952:
#line 4137 "parser.y"
    { yyval = NULL; ;}
    break;

  case 953:
#line 4138 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 954:
#line 4143 "parser.y"
    {
	yyval = cb_int0;
  ;}
    break;

  case 955:
#line 4147 "parser.y"
    {
	yyval = cb_build_write_advancing_lines (yyvsp[-3], yyvsp[-1]);
  ;}
    break;

  case 956:
#line 4151 "parser.y"
    {
	yyval = cb_build_write_advancing_mnemonic (yyvsp[-2], yyvsp[0]);
  ;}
    break;

  case 957:
#line 4155 "parser.y"
    {
	yyval = cb_build_write_advancing_page (yyvsp[-2]);
  ;}
    break;

  case 958:
#line 4161 "parser.y"
    { yyval = CB_BEFORE; ;}
    break;

  case 959:
#line 4162 "parser.y"
    { yyval = CB_AFTER; ;}
    break;

  case 963:
#line 4171 "parser.y"
    { terminator_warning (); ;}
    break;

  case 965:
#line 4187 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
  ;}
    break;

  case 966:
#line 4195 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
  ;}
    break;

  case 968:
#line 4201 "parser.y"
    { current_statement->handler1 = yyvsp[0]; ;}
    break;

  case 970:
#line 4205 "parser.y"
    { current_statement->handler2 = yyvsp[0]; ;}
    break;

  case 971:
#line 4215 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
  ;}
    break;

  case 973:
#line 4221 "parser.y"
    { current_statement->handler1 = yyvsp[0]; ;}
    break;

  case 975:
#line 4225 "parser.y"
    { current_statement->handler2 = yyvsp[0]; ;}
    break;

  case 976:
#line 4236 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
  ;}
    break;

  case 978:
#line 4242 "parser.y"
    { current_statement->handler1 = yyvsp[0]; ;}
    break;

  case 980:
#line 4246 "parser.y"
    { current_statement->handler2 = yyvsp[0]; ;}
    break;

  case 981:
#line 4256 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = yyvsp[0];
  ;}
    break;

  case 982:
#line 4261 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = yyvsp[0];
  ;}
    break;

  case 983:
#line 4266 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = yyvsp[-1];
	current_statement->handler2 = yyvsp[0];
  ;}
    break;

  case 984:
#line 4274 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 985:
#line 4275 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 986:
#line 4279 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 987:
#line 4289 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = yyvsp[0];
  ;}
    break;

  case 988:
#line 4294 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = yyvsp[0];
  ;}
    break;

  case 989:
#line 4299 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = yyvsp[-1];
	current_statement->handler2 = yyvsp[0];
  ;}
    break;

  case 990:
#line 4307 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 991:
#line 4311 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 994:
#line 4325 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = yyvsp[0];
  ;}
    break;

  case 995:
#line 4330 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = yyvsp[0];
  ;}
    break;

  case 996:
#line 4336 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = yyvsp[-1];
	current_statement->handler2 = yyvsp[0];
  ;}
    break;

  case 997:
#line 4344 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 998:
#line 4348 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 999:
#line 4363 "parser.y"
    {
	yyval = cb_build_cond (yyvsp[0]);
  ;}
    break;

  case 1000:
#line 4370 "parser.y"
    {
	yyval = cb_build_expr (yyvsp[0]);
  ;}
    break;

  case 1001:
#line 4376 "parser.y"
    {
	current_expr = NULL;
  ;}
    break;

  case 1002:
#line 4380 "parser.y"
    {
	yyval = cb_list_reverse (current_expr);
  ;}
    break;

  case 1006:
#line 4392 "parser.y"
    { push_expr ('x', yyvsp[0]); ;}
    break;

  case 1007:
#line 4394 "parser.y"
    { push_expr ('(', 0); ;}
    break;

  case 1008:
#line 4395 "parser.y"
    { push_expr (')', 0); ;}
    break;

  case 1009:
#line 4397 "parser.y"
    { push_expr ('+', 0); ;}
    break;

  case 1010:
#line 4398 "parser.y"
    { push_expr ('-', 0); ;}
    break;

  case 1011:
#line 4399 "parser.y"
    { push_expr ('*', 0); ;}
    break;

  case 1012:
#line 4400 "parser.y"
    { push_expr ('/', 0); ;}
    break;

  case 1013:
#line 4401 "parser.y"
    { push_expr ('^', 0); ;}
    break;

  case 1014:
#line 4403 "parser.y"
    { push_expr ('=', 0); ;}
    break;

  case 1015:
#line 4404 "parser.y"
    { push_expr ('>', 0); ;}
    break;

  case 1016:
#line 4405 "parser.y"
    { push_expr ('<', 0); ;}
    break;

  case 1017:
#line 4406 "parser.y"
    { push_expr (']', 0); ;}
    break;

  case 1018:
#line 4407 "parser.y"
    { push_expr ('[', 0); ;}
    break;

  case 1019:
#line 4408 "parser.y"
    { push_expr ('~', 0); ;}
    break;

  case 1020:
#line 4410 "parser.y"
    { push_expr ('!', 0); ;}
    break;

  case 1021:
#line 4411 "parser.y"
    { push_expr ('&', 0); ;}
    break;

  case 1022:
#line 4412 "parser.y"
    { push_expr ('|', 0); ;}
    break;

  case 1023:
#line 4414 "parser.y"
    { push_expr ('O', 0); ;}
    break;

  case 1024:
#line 4415 "parser.y"
    { push_expr ('9', 0); ;}
    break;

  case 1025:
#line 4416 "parser.y"
    { push_expr ('A', 0); ;}
    break;

  case 1026:
#line 4417 "parser.y"
    { push_expr ('L', 0); ;}
    break;

  case 1027:
#line 4418 "parser.y"
    { push_expr ('U', 0); ;}
    break;

  case 1028:
#line 4421 "parser.y"
    { push_expr ('P', 0); ;}
    break;

  case 1029:
#line 4422 "parser.y"
    { push_expr ('N', 0); ;}
    break;

  case 1040:
#line 4434 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 1041:
#line 4435 "parser.y"
    { yyval = cb_list_add (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 1044:
#line 4443 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1045:
#line 4444 "parser.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 1046:
#line 4445 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1047:
#line 4446 "parser.y"
    { yyval = cb_build_binary_op (cb_zero, '-', yyvsp[0]); ;}
    break;

  case 1048:
#line 4447 "parser.y"
    { yyval = cb_build_binary_op (yyvsp[-2], '+', yyvsp[0]); ;}
    break;

  case 1049:
#line 4448 "parser.y"
    { yyval = cb_build_binary_op (yyvsp[-2], '-', yyvsp[0]); ;}
    break;

  case 1050:
#line 4449 "parser.y"
    { yyval = cb_build_binary_op (yyvsp[-2], '*', yyvsp[0]); ;}
    break;

  case 1051:
#line 4450 "parser.y"
    { yyval = cb_build_binary_op (yyvsp[-2], '/', yyvsp[0]); ;}
    break;

  case 1052:
#line 4451 "parser.y"
    { yyval = cb_build_binary_op (yyvsp[-2], '^', yyvsp[0]); ;}
    break;

  case 1053:
#line 4463 "parser.y"
    {
	if (current_linage > 1) {
		cb_error (_("LINAGE-COUNTER must be qualified here"));
		yyval = cb_error_node;
	} else if (current_linage == 0) {
		cb_error (_("Invalid LINAGE-COUNTER usage"));
		yyval = cb_error_node;
	} else {
		yyval = linage_file->linage_ctr;
	}
  ;}
    break;

  case 1054:
#line 4475 "parser.y"
    {
	if (CB_FILE_P (cb_ref (yyvsp[0]))) {
		yyval = CB_FILE (cb_ref (yyvsp[0]))->linage_ctr;
	} else {
		cb_error_x (yyvsp[0], _("'%s' not file name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  ;}
    break;

  case 1055:
#line 4489 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1056:
#line 4491 "parser.y"
    { yyval = cb_list_append (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 1057:
#line 4495 "parser.y"
    { yyval = cb_build_pair (yyvsp[0], yyvsp[-1]); ;}
    break;

  case 1059:
#line 4508 "parser.y"
    {
	cb_tree x = cb_ref (yyvsp[0]);

	if (!CB_FIELD_P (x)) {
		yyval = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x (yyvsp[0], _("'%s' not indexed"), cb_name (yyvsp[0]));
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		yyval = cb_error_node;
	} else {
		yyval = yyvsp[0];
	}
  ;}
    break;

  case 1060:
#line 4526 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 1061:
#line 4527 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 1062:
#line 4532 "parser.y"
    {
	if (CB_FILE_P (cb_ref (yyvsp[0]))) {
		yyval = yyvsp[0];
	} else {
		cb_error_x (yyvsp[0], _("'%s' not file name"), CB_NAME (yyvsp[0]));
		yyval = cb_error_node;
	}
  ;}
    break;

  case 1063:
#line 4545 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 1064:
#line 4547 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 1065:
#line 4551 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1066:
#line 4557 "parser.y"
    { yyval = NULL; ;}
    break;

  case 1067:
#line 4559 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 1068:
#line 4564 "parser.y"
    {
	yyval = yyvsp[0];
	CB_REFERENCE (yyval)->offset = CB_TREE (current_section);
	current_program->label_list = cb_cons (yyval, current_program->label_list);
  ;}
    break;

  case 1072:
#line 4579 "parser.y"
    {
	yyval = cb_build_reference ((char *)(CB_LITERAL (yyvsp[0])->data));
	yyval->source_file = yyvsp[0]->source_file;
	yyval->source_line = yyvsp[0]->source_line;
  ;}
    break;

  case 1073:
#line 4589 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 1074:
#line 4590 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 1075:
#line 4595 "parser.y"
    {
	yyval = yyvsp[0];
	current_program->reference_list = cb_cons (yyval, current_program->reference_list);
  ;}
    break;

  case 1076:
#line 4602 "parser.y"
    { yyval = NULL; ;}
    break;

  case 1077:
#line 4603 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1080:
#line 4615 "parser.y"
    {
	yyval = yyvsp[0];
	if (CB_REFERENCE (yyval)->word->count > 0) {
		redefinition_error (yyval);
		yyval = cb_error_node;
	}
  ;}
    break;

  case 1081:
#line 4634 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 1082:
#line 4635 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 1084:
#line 4640 "parser.y"
    { yyval = cb_build_ppointer (yyvsp[0]); ;}
    break;

  case 1085:
#line 4641 "parser.y"
    { yyval = cb_build_address (yyvsp[0]); ;}
    break;

  case 1087:
#line 4646 "parser.y"
    { yyval = cb_list (yyvsp[0]); ;}
    break;

  case 1088:
#line 4647 "parser.y"
    { yyval = cb_list_add (yyvsp[-1], yyvsp[0]); ;}
    break;

  case 1090:
#line 4652 "parser.y"
    { yyval = cb_build_length (yyvsp[0]); ;}
    break;

  case 1091:
#line 4653 "parser.y"
    { yyval = cb_build_length (yyvsp[0]); ;}
    break;

  case 1092:
#line 4654 "parser.y"
    { yyval = cb_build_ppointer (yyvsp[0]); ;}
    break;

  case 1093:
#line 4655 "parser.y"
    { yyval = cb_build_address (yyvsp[0]); ;}
    break;

  case 1099:
#line 4667 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1100:
#line 4668 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1101:
#line 4669 "parser.y"
    { yyval = cb_null; ;}
    break;

  case 1106:
#line 4694 "parser.y"
    { yyval = cb_build_identifier (yyvsp[0]); ;}
    break;

  case 1107:
#line 4698 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1108:
#line 4699 "parser.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 1109:
#line 4700 "parser.y"
    { yyval = yyvsp[-1]; ;}
    break;

  case 1110:
#line 4701 "parser.y"
    { yyval = yyvsp[-2]; ;}
    break;

  case 1111:
#line 4705 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1112:
#line 4706 "parser.y"
    { yyval = yyvsp[-2]; CB_REFERENCE (yyvsp[-2])->chain = yyvsp[0]; ;}
    break;

  case 1113:
#line 4711 "parser.y"
    {
	yyval = yyvsp[-3];
	CB_REFERENCE (yyvsp[-3])->subs = cb_list_reverse (yyvsp[-1]);
  ;}
    break;

  case 1114:
#line 4719 "parser.y"
    {
	CB_REFERENCE (yyvsp[-4])->offset = yyvsp[-2];
  ;}
    break;

  case 1115:
#line 4723 "parser.y"
    {
	CB_REFERENCE (yyvsp[-5])->offset = yyvsp[-3];
	CB_REFERENCE (yyvsp[-5])->length = yyvsp[-1];
  ;}
    break;

  case 1117:
#line 4738 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1118:
#line 4740 "parser.y"
    {
	yyval = yyvsp[0];
	if (CB_LITERAL_P (yyvsp[0])) {
		CB_LITERAL (yyvsp[0])->all = 1;
	}
  ;}
    break;

  case 1119:
#line 4749 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1120:
#line 4750 "parser.y"
    { yyval = cb_space; ;}
    break;

  case 1121:
#line 4751 "parser.y"
    { yyval = cb_zero; ;}
    break;

  case 1122:
#line 4752 "parser.y"
    { yyval = cb_quote; ;}
    break;

  case 1123:
#line 4753 "parser.y"
    { yyval = cb_high; ;}
    break;

  case 1124:
#line 4754 "parser.y"
    { yyval = cb_low; ;}
    break;

  case 1125:
#line 4755 "parser.y"
    { yyval = cb_null; ;}
    break;

  case 1126:
#line 4759 "parser.y"
    { yyval = yyvsp[0]; ;}
    break;

  case 1127:
#line 4760 "parser.y"
    { yyval = cb_concat_literals (yyvsp[-2], yyvsp[0]); ;}
    break;

  case 1128:
#line 4769 "parser.y"
    {
	yyval = cb_build_intrinsic (yyvsp[-1], yyvsp[0]);
  ;}
    break;

  case 1129:
#line 4773 "parser.y"
    {
	yyval = cb_build_intrinsic (yyvsp[-3], yyvsp[-1]);
  ;}
    break;

  case 1130:
#line 4777 "parser.y"
    {
	yyval = cb_build_intrinsic (yyvsp[-3], yyvsp[-1]);
  ;}
    break;

  case 1131:
#line 4781 "parser.y"
    {
	yyval = cb_build_intrinsic (yyvsp[-3], yyvsp[-1]);
  ;}
    break;

  case 1132:
#line 4787 "parser.y"
    { yyval = NULL; ;}
    break;

  case 1133:
#line 4788 "parser.y"
    { yyval = yyvsp[-1];   ;}
    break;

  case 1134:
#line 4792 "parser.y"
    { yyval = NULL; ;}
    break;

  case 1135:
#line 4793 "parser.y"
    { yyval = yyvsp[0];   ;}
    break;

  case 1136:
#line 4799 "parser.y"
    {
	cb_tree	x;

	x = cb_list (yyvsp[0]);
	yyval = cb_list_add (x, cb_int0);
  ;}
    break;

  case 1137:
#line 4806 "parser.y"
    {
	cb_tree	x;

	x = cb_list (yyvsp[-2]);
	yyval = cb_list_add (x, cb_int1);
  ;}
    break;

  case 1138:
#line 4813 "parser.y"
    {
	cb_tree	x;

	x = cb_list (yyvsp[-2]);
	yyval = cb_list_add (x, cb_int2);
  ;}
    break;

  case 1139:
#line 4823 "parser.y"
    {
	cb_tree	x;

	x = cb_list (yyvsp[0]);
	yyval = cb_list_add (x, cb_null);
  ;}
    break;

  case 1140:
#line 4830 "parser.y"
    {
	cb_tree	x;

	x = cb_list (yyvsp[-2]);
	yyval = cb_list_add (x, yyvsp[0]);
  ;}
    break;

  case 1141:
#line 4840 "parser.y"
    {
	cb_tree	x;

	x = cb_list (yyvsp[0]);
	yyval = cb_list_add (x, cb_null);
  ;}
    break;

  case 1142:
#line 4847 "parser.y"
    {
	cb_tree	x;

	x = cb_list (yyvsp[-2]);
	yyval = cb_list_add (x, cb_ref(yyvsp[0]));
  ;}
    break;

  case 1143:
#line 4864 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1144:
#line 4865 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1145:
#line 4869 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1146:
#line 4870 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1147:
#line 4874 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1148:
#line 4875 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1149:
#line 4879 "parser.y"
    { yyval = NULL; ;}
    break;

  case 1150:
#line 4880 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1151:
#line 4884 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1152:
#line 4885 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1153:
#line 4886 "parser.y"
    { yyval = cb_int2; ;}
    break;

  case 1154:
#line 4890 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1155:
#line 4891 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1156:
#line 4895 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1157:
#line 4896 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1158:
#line 4900 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1159:
#line 4901 "parser.y"
    { yyval = cb_int1; ;}
    break;

  case 1160:
#line 4905 "parser.y"
    { yyval = cb_int0; ;}
    break;

  case 1161:
#line 4906 "parser.y"
    { yyval = cb_int1; ;}
    break;


    }

/* Line 991 of yacc.c.  */
#line 9673 "parser.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__) \
    && !defined __cplusplus
  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 4961 "parser.y"


static void
emit_entry (const char *name, const int encode, cb_tree using_list)
{
	cb_tree	l, label;
	int	parmnum;
	char	buff[256];

	sprintf (buff, "E$%s", name);
	label = cb_build_label (cb_build_reference (buff), NULL);
	if (encode) {
		CB_LABEL (label)->name = (unsigned char *)(cb_encode_program_id (name));
		CB_LABEL (label)->orig_name = (unsigned char *)name;
	} else {
		CB_LABEL (label)->name = (unsigned char *)name;
		CB_LABEL (label)->orig_name = (unsigned char *)current_program->orig_source_name;
	}
	CB_LABEL (label)->need_begin = 1;
	CB_LABEL (label)->is_entry = 1;
	emit_statement (label);

	parmnum = 1;
	for (l = using_list; l; l = CB_CHAIN (l)) {
		cb_tree x = CB_VALUE (l);
		if (x != cb_error_node && cb_ref (x) != cb_error_node) {
			struct cb_field *f = CB_FIELD (cb_ref (x));
			if (f->level != 01 && f->level != 77) {
				cb_error_x (x, _("'%s' not level 01 or 77"), cb_name (x));
			}
			if (!current_program->is_chained) {
				if (f->storage != CB_STORAGE_LINKAGE) {
					cb_error_x (x, _("'%s' is not in LINKAGE SECTION"), cb_name (x));
				}
				if (f->flag_item_based || f->flag_external) {
					cb_error_x (x, _("'%s' can not be BASED/EXTERNAL"), cb_name (x));
				}
			} else {
				if (f->storage != CB_STORAGE_WORKING) {
					cb_error_x (x, _("'%s' is not in WORKING-STORAGE SECTION"), cb_name (x));
				}
				f->flag_chained = 1;
				f->param_num = parmnum;
				parmnum++;
			}
			if (f->redefines) {
				cb_error_x (x, _("'%s' REDEFINES field not allowed here"), cb_name (x));
			}
		}
	}
	for (l = current_program->entry_list; l; l = CB_CHAIN (l)) {
		if (strcmp ((char *)name, (char *)(CB_LABEL(CB_PURPOSE(l))->name)) == 0) {
			cb_error_x (CB_TREE (current_statement), _("ENTRY '%s' duplicated"), name);
		}
	}

	entry_number++;

	current_program->entry_list = cb_list_append (current_program->entry_list,
							cb_build_pair (label, using_list));
}

static void
terminator_warning (void)
{
	if (cb_warn_terminator && current_statement->need_terminator) {
		cb_warning_x (CB_TREE (current_statement),
			_("%s statement not terminated by END-%s"),
			current_statement->name, current_statement->name);
	}
}

static void
terminator_error (void)
{
	cb_error_x (CB_TREE (current_statement),
			_("%s statement not terminated by END-%s"),
			current_statement->name, current_statement->name);
}

static int
literal_value (cb_tree x)
{
	if (x == cb_space) {
		return ' ';
	} else if (x == cb_zero) {
		return '0';
	} else if (x == cb_quote) {
		return '"';
	} else if (x == cb_null) {
		return 0;
	} else if (CB_TREE_CLASS (x) == CB_CLASS_NUMERIC) {
		return cb_get_int (x);
	} else {
		return CB_LITERAL (x)->data[0];
	}
}

