# $FreeBSD: releng/11.1/usr.bin/svn/lib/libsvn_ra_serf/Makefile 289180 2015-10-12 09:53:55Z peter $

.include "${.CURDIR}/../Makefile.inc"

.PATH:	${SVNDIR}/libsvn_ra_serf

INTERNALLIB=	yes
LIB=		svn_ra_serf

SRCS=		blame.c blncache.c commit.c eagain_bucket.c \
		get_deleted_rev.c get_file.c get_lock.c getdate.c \
		getlocations.c getlocationsegments.c getlocks.c \
		inherited_props.c lock.c log.c merge.c mergeinfo.c \
		multistatus.c options.c property.c replay.c sb_bucket.c \
		serf.c stat.c update.c util.c util_error.c xml.c

CFLAGS+=	-I${SVNDIR}/include -I${SVNDIR} -I${.CURDIR}/../.. \
		-I${.CURDIR}/../libapr \
		-I${APR}/include/arch/unix \
		-I${APR}/include \
		-I${.CURDIR}/../libapr_util \
		-I${APRU}/include/private \
		-I${APRU}/include \
		-I${SERF}

.include <bsd.lib.mk>
