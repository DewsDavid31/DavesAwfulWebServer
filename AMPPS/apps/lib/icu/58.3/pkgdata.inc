GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.58.3.dylib
COMPILE=clang -DU_ATTRIBUTE_DEPRECATED= -I/Applications/AMPPS/apps/include   -DU_HAVE_ATOMIC=1 -DU_HAVE_STRTOD_L=1  -O2 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings  -Qunused-arguments -Wno-parentheses-equality -fno-common -c
LIBFLAGS=-I/Applications/AMPPS/apps/include  -dynamic
GENLIB=clang -dynamiclib -dynamic -O2 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings  -Qunused-arguments -Wno-parentheses-equality -L/Applications/AMPPS/apps/lib -Wl,-rpath,/Applications/AMPPS/apps/lib 
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,58 -Wl,-current_version -Wl,58.3 -install_name /Applications/AMPPS/apps/lib/
RPATH_FLAGS=
BIR_LDFLAGS=
AR=ar
ARFLAGS=r -c
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
