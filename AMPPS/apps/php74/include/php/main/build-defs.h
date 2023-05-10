/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  'ZLIB_CFLAGS=-I/Applications/AMPPS/apps/include' 'ZLIB_LIBS=-L/Applications/AMPPS/apps/lib -lz' '--prefix=/Applications/AMPPS/apps/php74' '--with-config-file-path=/Applications/AMPPS/apps/php74/etc' '--with-config-file-scan-dir=/Applications/AMPPS/apps/php74/etc/php.d' '--includedir=/Applications/AMPPS/apps/php74/include' '--libdir=/Applications/AMPPS/apps/php74/lib' '--enable-opcache=yes' '--with-jpeg=shared,/Applications/AMPPS/apps' '--with-png-dir=/Applications/AMPPS/apps' '--with-freetype=/Applications/AMPPS/apps' '--enable-inline-optimization' '--disable-debug' '--enable-cli' '--enable-cgi' '--enable-force-cgi-redirect' '--enable-fastcgi' '--enable-discard-path' '--enable-filepro' '--enable-fpm' '--enable-ipv6' '--enable-path-info-check' '--enable-magic-quotes' '--enable-track-vars' '--enable-trans-sid' '--enable-yp' '--enable-zts' '--without-gdbm' '--enable-xslt=/Applications/AMPPS/apps' '--with-xsl=shared,/Applications/AMPPS/apps' '--with-tidy=shared,/Applications/AMPPS/apps' '--with-pear=shared,/Applications/AMPPS/apps/php74/lib/php' '--enable-sockets=shared,/Applications/AMPPS/apps' '--with-mime-magic' '--enable-fileinfo' '--enable-zend-multibyte' '--with-zlib-dir=/Applications/AMPPS/apps' '--with-zlib=shared,/Applications/AMPPS/apps' '--enable-zlib=shared,/Applications/AMPPS/apps' '--with-zip=shared,/Applications/AMPPS/apps' '--with-libxml=shared,/Applications/AMPPS/apps' '--with-expat=/Applications/AMPPS/apps' '--with-xml' '--enable-xmlreader' '--enable-xmlwriter' '--with-simplexml' '--with-ncurses=shared,/Applications/AMPPS/apps/bin/ncurses6-config' '--enable-gd=shared,/Applications/AMPPS/apps' '--with-external-gd=no' '--enable-gd-native-ttf' '--with-gettext=shared,/Applications/AMPPS/apps' '--with-bz2=shared,/Applications/AMPPS/apps' '--enable-bcmath=shared' '--enable-calendar=shared' '--enable-ctype=shared' '--enable-filter' '--enable-exif=shared' '--enable-ftp=shared' '--enable-hash' '--enable-json' '--enable-shmop=shared' '--disable-sigchild' '--enable-sysvsem=shared' '--enable-sysvshm=shared' '--enable-reflection=shared' '--enable-session' '--enable-spl' '--enable-tokenizer=shared' '--enable-wddx=shared' '--enable-mysqlnd=shared' '--with-mysql=shared,mysqlnd' '--with-mysqli=shared,mysqlnd' '--with-ldap=shared,/Applications/AMPPS/apps' '--with-mhash=shared,/Applications/AMPPS/apps' '--with-curl=shared,/Applications/AMPPS/apps' '--enable-dba=shared' '--enable-dbase=shared' '--with-fdf=shared' '--enable-pdo=shared' '--with-pdo-mysql=shared,mysqlnd' '--with-pdo-mssql=shared,/Applications/AMPPS/apps' '--with-pdo-sqlite=shared,/Applications/AMPPS/apps' '--with-pdo-sqlite-external' '--with-sqlite=shared,/Applications/AMPPS/apps' '--with-sqlite3=shared,/Applications/AMPPS/apps' '--enable-soap=shared' '--enable-pcntl=shared' '--enable-dbx=shared' '--with-gmp=shared,/Applications/AMPPS/apps' '--with-iconv=shared,/Applications/AMPPS/apps' '--with-imap=shared,/Applications/AMPPS/apps/lib/imap-2007f' '--with-imap-ssl=shared,/Applications/AMPPS/apps' '--with-kerberos' '--with-pdf=shared' '--enable-phar' '--enable-mailparse' '--enable-intl=shared' '--enable-mbstring=shared' '--enable-mbstr-enc-trans' '--enable-mbregex' '--enable-mbregex-backtrack' '--with-icu-dir=/Applications/AMPPS/apps' '--with-ssh2=shared,/Applications/AMPPS/apps' '--with-pkgconfigdir=/Applications/AMPPS/apps/lib/pkgconfig' '--with-openssl=shared,/Applications/AMPPS/apps' '--with-openssl-dir=/Applications/AMPPS/apps' '--enable-wddx' '--with-mcrypt=shared,/Applications/AMPPS/apps' 'PKG_CONFIG_PATH=/Applications/AMPPS/apps/lib/pkgconfig' 'LIBXML_CFLAGS=-I/Applications/AMPPS/apps/include/libxml2' 'LIBXML_LIBS=-L/Applications/AMPPS/apps/lib -lxml2' 'KERBEROS_CFLAGS=-I/Applications/AMPPS/apps/include' 'KERBEROS_LIBS=-L/Applications/AMPPS/apps/lib -lkrb5 -lk5crypto -lgssapi_krb5' 'OPENSSL_CFLAGS=-I/Applications/AMPPS/apps/include/openssl' 'OPENSSL_LIBS=-L/Applications/AMPPS/apps/lib' 'SQLITE_CFLAGS=-I/Applications/AMPPS/apps/include' 'SQLITE_LIBS=-L/Applications/AMPPS/apps/lib -lsqlite3' 'CURL_CFLAGS=-I/Applications/AMPPS/apps/include' 'CURL_LIBS=-L/Applications/AMPPS/apps/lib -lcurl' 'PNG_CFLAGS=-I/Applications/AMPPS/apps/include' 'PNG_LIBS=-L/Applications/AMPPS/apps/lib -lpng' 'JPEG_CFLAGS=-I/Applications/AMPPS/apps/include' 'JPEG_LIBS=-L/Applications/AMPPS/apps/lib -ljpeg' 'FREETYPE2_CFLAGS=-I/Applications/AMPPS/apps/include/freetype2' 'FREETYPE2_LIBS=-L/Applications/AMPPS/apps/lib -lfreetype' 'GDLIB_CFLAGS=-I/Applications/AMPPS/apps/include' 'GDLIB_LIBS=-L/Applications/AMPPS/apps/lib -lgd' 'ICU_CFLAGS=-I/Applications/AMPPS/apps/include' 'ICU_LIBS=-L/Applications/AMPPS/apps/lib -licui18n -licuuc -licudata' 'ONIG_CFLAGS=-I/Applications/AMPPS/apps/include' 'ONIG_LIBS=-L/Applications/AMPPS/apps/lib -lonig' 'EXPAT_CFLAGS=-I/Applications/AMPPS/apps/include' 'EXPAT_LIBS=-L/Applications/AMPPS/apps/lib -lexpat' 'XSL_CFLAGS=-I/Applications/AMPPS/apps/include' 'XSL_LIBS=-L/Applications/AMPPS/apps/lib -lxslt' 'LIBZIP_CFLAGS=-I/Applications/AMPPS/apps/include' 'LIBZIP_LIBS=-L/Applications/AMPPS/apps/lib -lzip'"
#define PHP_ODBC_CFLAGS	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PEAR_INSTALLDIR         "/Applications/AMPPS/apps/php74/lib/php"
#define PHP_INCLUDE_PATH	".:/Applications/AMPPS/apps/php74/lib/php"
#define PHP_EXTENSION_DIR       "/Applications/AMPPS/apps/php74/lib/extensions/no-debug-non-zts-20190902"
#define PHP_PREFIX              "/Applications/AMPPS/apps/php74"
#define PHP_BINDIR              "/Applications/AMPPS/apps/php74/bin"
#define PHP_SBINDIR             "/Applications/AMPPS/apps/php74/sbin"
#define PHP_MANDIR              "/Applications/AMPPS/apps/php74/php/man"
#define PHP_LIBDIR              "/Applications/AMPPS/apps/php74/lib"
#define PHP_DATADIR             "/Applications/AMPPS/apps/php74/share/php"
#define PHP_SYSCONFDIR          "/Applications/AMPPS/apps/php74/etc"
#define PHP_LOCALSTATEDIR       "/Applications/AMPPS/apps/php74/var"
#define PHP_CONFIG_FILE_PATH    "/Applications/AMPPS/apps/php74/etc"
#define PHP_CONFIG_FILE_SCAN_DIR    "/Applications/AMPPS/apps/php74/etc/php.d"
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
