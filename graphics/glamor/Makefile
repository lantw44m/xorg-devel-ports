# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD$

PORTNAME=	glamor-egl
PORTVERSION=	0.6.0
CATEGORIES=	graphics

MAINTAINER=	x11@FreeBSD.org
COMMENT=	2D graphics common driver for the X Window System

LIB_DEPENDS=	libdrm.so:${PORTSDIR}/graphics/libdrm

GNU_CONFIGURE=	yes
USES=		libtool:keepla pathfix pkgconfig tar:bzip2
USE_GL=		gl egl
XORG_CAT=       driver
USE_XORG=	xorg-server dri3proto presentproto pixman
INSTALL_TARGET=	install-strip

# needs libgbm >=9
CONFIGURE_ARGS+=--disable-glamor-dri3
# needs libglesv2
CONFIGURE_ARGS+=--disable-glamor-gles2

.include <bsd.port.mk>
