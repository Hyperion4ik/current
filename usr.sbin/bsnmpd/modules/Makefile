# $FreeBSD: releng/11.1/usr.sbin/bsnmpd/modules/Makefile 313239 2017-02-04 17:10:19Z ngie $

.include <src.opts.mk>

.PATH: ${SRCTOP}/contrib/bsnmp/snmpd

.if ${MK_ATM} != "no"
_snmp_atm= snmp_atm
.endif

SUBDIR=	${_snmp_atm} \
	snmp_bridge \
	snmp_hostres \
	snmp_lm75 \
	snmp_mibII \
	snmp_target \
	snmp_usm \
	snmp_vacm \

.if ${MK_HAST} != "no"
SUBDIR+=snmp_hast
.endif

.if ${MK_PF} != "no"
SUBDIR+=snmp_pf
.endif

.if ${MK_NETGRAPH_SUPPORT} != "no"
SUBDIR+=snmp_netgraph
.endif

.if ${MK_WIRELESS} != "no"
SUBDIR+=snmp_wlan
.endif

INCS=	snmpmod.h
INCSDIR= ${INCLUDEDIR}/bsnmp

SUBDIR_TARGETS+=	smilint

.include <bsd.prog.mk>
