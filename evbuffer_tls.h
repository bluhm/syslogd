/*	$OpenBSD$ */

/*
 * Copyright (c) 2014 Alexander Bluhm <bluhm@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _EVBUFFER_TLS_H_
#define _EVBUFFER_TLS_H_

#include <event.h>
#include <tls.h>

struct buffertls {
	struct bufferevent	*bt_bufev;
	struct tls		*bt_ctx;
};

struct buffertls	*buffertls_new(int, evbuffercb, evbuffercb, everrorcb,
    void *, struct tls *);
void			 buffertls_free(struct buffertls *);
void			 buffertls_setfd(struct buffertls *, int);

#endif /* _EVBUFFER_TLS_H_ */