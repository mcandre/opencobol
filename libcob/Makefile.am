lib_LTLIBRARIES = libcob.la
libcob_la_SOURCES = common.c call.c strings.c move.c numeric.c \
	intrinsic.c fileio.c termio.c screenio.c

AM_CFLAGS = -DSUPER_OPTIMIZE
libcob_la_CFLAGS = $(AM_CFLAGS) $(LIBCOB_CFLAGS) -I$(top_srcdir)
libcob_la_LIBADD = $(LIBCOB_LIBS)
libcob_la_LDFLAGS = -version-info 1:0:0 -no-undefined
AM_LDFLAGS = $(COB_EXPORT_DYN)

EXTRA_DIST = coblocal.h
pkgincludedir = $(includedir)/libcob
pkginclude_HEADERS = byteswap.h common.h move.h numeric.h exception.def \
	termio.h fileio.h screenio.h strings.h call.h intrinsic.h \
	codegen.h system.def
