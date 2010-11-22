# New ports collection makefile for:	xf86-video-intel
# Date Created:				28 May 2007
# Whom:					lesi@FreeBSD.org
#
# $FreeBSD: ports/x11-drivers/xf86-video-intel/Makefile,v 1.15 2009/05/13 00:35:27 rnoland Exp $
#

PORTNAME=	xf86-video-intel
PORTVERSION=	2.7.1
PORTREVISION=	2
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Driver for Intel integrated graphics chipsets

CONFLICTS=	xf86-video-i810-[0-9]*

ONLY_FOR_ARCHS=	amd64 i386
USE_GL=		gl

XORG_CAT=	driver
USE_XORG=	xvmc xineramaproto xextproto x11 xf86driproto glproto
MAN4=		intel.4x

.include <bsd.port.mk>