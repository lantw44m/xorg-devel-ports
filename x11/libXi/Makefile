# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libXi/Makefile 351936 2014-04-23 13:25:16Z tijl $

PORTNAME=	libXi
PORTVERSION=	1.7.4
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X Input extension library

LICENSE=	MIT

XORG_CAT=	lib
USE_XORG=	xproto x11 xext xextproto xfixes inputproto:both
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS+=--disable-docs \
		--disable-specs \
		--without-xmlto \
		--without-fop \
		--without-asciidoc \
		--without-xsltproc

.include <bsd.port.mk>
