bin_PROGRAMS = cobc
cobc_SOURCES = cobc.c cobc.h config.c tree.c tree.h reserved.c error.c \
	parser.c parser.h scanner.c field.c typeck.c codegen.c \
	ppparse.c ppparse.h pplex.c config.def flag.def warning.def \
	call.def

cobc_CFLAGS = -I$(top_srcdir)
cobc_LDADD = $(COBC_LIBS) $(top_builddir)/lib/libsupport.a

BUILT_SOURCES = parser.c parser.h scanner.c ppparse.c ppparse.h pplex.c
EXTRA_DIST = ppparse.y pplex.l parser.y scanner.l
CLEANFILES = parser.output

%.c: %.l
	flex -s -o$@ $<

%.c: %.y
	bison -o $@ $<
