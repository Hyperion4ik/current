# $FreeBSD: releng/11.1/sys/modules/bhnd/Makefile 319182 2017-05-30 04:11:12Z ngie $

.PATH: ${SRCTOP}/sys/dev/bhnd
.PATH: ${SRCTOP}/sys/dev/bhnd/nvram

KMOD=	bhnd
SRCS=	bhnd.c bhnd_subr.c \
	bhnd_sprom.c bhnd_sprom_subr.c \
	nvram_subr.c \
	bhnd_nvram_map.h bhnd_nvram_map_data.h

SRCS+=	bhnd_bus_if.c bhnd_bus_if.h \
	bhnd_chipc_if.c bhnd_chipc_if.h \
	bhnd_nvram_if.c bhnd_nvram_if.h

SRCS+=	device_if.h bus_if.h

SUBDIR=	bcma \
	bcma_bhndb \
	bhndb \
	bhndb_pci \
	cores \
	siba \
	siba_bhndb

.include <bsd.kmod.mk>
.include <bsd.subdir.mk>
