# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libX11/Makefile 351936 2014-04-23 13:25:16Z tijl $

PORTNAME=	libX11
PORTVERSION=	1.6.2
PORTREVISION=	2
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X11 library

LICENSE=	MIT

USES=		perl5
XORG_CAT=	lib
USE_XORG=	bigreqsproto xau xcmiscproto xdmcp xextproto xtrans \
		kbproto:both inputproto xf86bigfontproto xproto:both \
		xcb
USE_PERL5=	build

CONFIGURE_ARGS+=	--datadir=${PREFIX}/lib \
			--without-xmlto \
			--disable-specs
CONFIGURE_ENV+=	ac_cv_path_PS2PDF=""

post-patch:
	@${REINPLACE_CMD} 's/test.*-traditional.*;/true;/' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} '/^install-data-am:/,/^$$/ \
		s/install-specDATA//' ${WRKSRC}/nls/Makefile.in

.include <bsd.port.mk>
