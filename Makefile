#	$OpenBSD: Makefile,v 1.6 2014/10/05 18:14:01 bluhm Exp $

PROG=	syslogd
SRCS=	syslogd.c ttymsg.c privsep.c privsep_fdpass.c ringbuf.c
MAN=	syslogd.8 syslog.conf.5
LDADD=	-levent
DPADD=	${LIBEVENT}
CDIAGFLAGS+=	-Wall -Werror \
		-Wbad-function-cast \
		-Wcast-align \
		-Wcast-qual \
		-Wdeclaration-after-statement \
		-Wextra \
		-Wmissing-declarations \
		-Wmissing-prototypes \
		-Wpointer-arith \
		-Wshadow \
		-Wsign-compare \
		-Wstrict-prototypes \
		-Wuninitialized \
		-Wunused -Wno-unused-parameter  

.include <bsd.prog.mk>
