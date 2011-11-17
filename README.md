OpenCOBOL

HOMEPAGE

[http://www.opencobol.org/](http://www.opencobol.org/)

ABOUT

OpenCOBOL is an open-source COBOL compiler, which translates COBOL programs to C code and compiles them using GCC.

This package contains the following subdirectories:

 * cobc - COBOL compiler
 * libcob - COBOL run-time library
 * bin - COBOL driver program
 * lib - static library and common headers
 * config - configuration files
 * po - international messages
 * texi - Texinfo files
 * tests - Test suite

All programs except those in lib and libcob are distributed under the GNU General Public License.  See COPYING for details.

Programs in lib and libcob are distributed under the GNU Lesser General Public License.  See COPYING.LIB for details.

See AUTHORS for the author of each file.

REQUIREMENTS

OpenCOBOL requires the following external libraries to be installed:

 * [GMP](http://gmplib.org) (libgmp) 4.1.2 or later

libgmp is used to implement decimal arithmetic.

GNU MP is distributed under GNU Lesser General Public License.

 * [Libtool](http://www.gnu.org/software/libtool/libtool.html) (libltdl)

libltdl is used to implement dynamic CALL statements.

Libtool is distributed under GNU Lesser General Public License.

libltdl is NOT needed when installing on Linux or Windows (including Cygwin and MingW)

If Indexed-Sequential file I/O is used

 * [Berkeley DB](http://www.oracle.com/technetwork/database/berkeleydb/downloads/) (libdb) 1.85 or later

Once Berkeley DB is installed, inform the configure script:

	$ ./configure CPPFLAGS="-I/usr/local/BerkeleyDB.5.2/include/" LDFLAGS="-L/usr/local/BerkeleyDB.5.2/lib/"
	$ make
	$ make install

Version 1.85 is known to have problems.

libdb is used to implement indexed file I/O and SORT/MERGE.

Berkeley DB is distributed under the original BSD License (1.85) or their own open-source license (2.x or later).  Note that, as of 2.x, if you linked your software with Berkeley DB, you must distribute the source code of your software along with your software, or you have to pay royalty to Sleepycat Software, Inc.

If SCREEN I/O is used or extended ACCEPT/DISPLAY is used:

 * Unix curses (Windows Cygwin/MingW)

  or

 * [Ncurses](http://www.gnu.org/software/ncurses/ncurses.html) (libncurses) 5.2 or later

libncurses is used to implement SCREEN SECTION and extended ACCEPT/DISPLAY.

Ncurses is distributed under a BSD style license.