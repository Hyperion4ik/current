# $FreeBSD: releng/11.1/lib/libc/aarch64/Makefile.inc 315044 2017-03-11 02:51:29Z brooks $
#
# Machine dependent definitions for the arm 64-bit architecture.
#

# Long double is quad precision
GDTOASRCS+=strtorQ.c
SRCS+=machdep_ldisQ.c
SYM_MAPS+=${LIBC_SRCTOP}/aarch64/Symbol.map