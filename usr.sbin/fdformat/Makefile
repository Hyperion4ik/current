# $FreeBSD: releng/11.1/usr.sbin/fdformat/Makefile 319119 2017-05-29 10:15:41Z ngie $

.PATH: ${.CURDIR:H}/fdread

PROG=	fdformat
SRCS=	fdformat.c fdutil.c

CFLAGS+= -I${.CURDIR:H}/fdread

.if ${MACHINE} == "pc98"
CFLAGS+= -DPC98
.endif

.include <bsd.prog.mk>
