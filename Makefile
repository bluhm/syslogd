#	$OpenBSD: Makefile,v 1.5 2004/01/04 08:28:49 djm Exp $

PROG =		syslogd
SRCS =		syslogd.c ttymsg.c privsep.c privsep_fdpass.c ringbuf.c
MAN =		syslogd.8 syslog.conf.5
CDIAGFLAGS +=	-Wall \
		-Wbad-function-cast \
		-Wcast-align \
		-Wcast-qual \
		-Wdeclaration-after-statement \
		-Werror \
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
