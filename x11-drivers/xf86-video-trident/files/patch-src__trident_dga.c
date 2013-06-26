From 48c15909691e28ad2c188a2978b1c8ef3d9d8760 Mon Sep 17 00:00:00 2001
From: Timo Aaltonen <tjaalton@ubuntu.com>
Date: Wed, 26 Sep 2012 08:01:26 +0000
Subject: Fix loading the driver without XAA

---
diff --git a/src/trident_dga.c b/src/trident_dga.c
index 0263aa7..c4b5b9a 100644
--- src/trident_dga.c
+++ src/trident_dga.c
@@ -37,10 +37,10 @@
 static Bool TRIDENT_OpenFramebuffer(ScrnInfoPtr, char **, unsigned char **, 
 					int *, int *, int *);
 static Bool TRIDENT_SetMode(ScrnInfoPtr, DGAModePtr);
-static void TRIDENT_Sync(ScrnInfoPtr);
 static int  TRIDENT_GetViewport(ScrnInfoPtr);
 static void TRIDENT_SetViewport(ScrnInfoPtr, int, int, int);
 #ifdef HAVE_XAA_H
+static void TRIDENT_Sync(ScrnInfoPtr);
 static void TRIDENT_FillRect(ScrnInfoPtr, int, int, int, int, unsigned long);
 static void TRIDENT_BlitRect(ScrnInfoPtr, int, int, int, int, int, int);
 #if 0
@@ -56,8 +56,8 @@ DGAFunctionRec TRIDENTDGAFuncs = {
    TRIDENT_SetMode,
    TRIDENT_SetViewport,
    TRIDENT_GetViewport,
-   TRIDENT_Sync,
 #ifdef HAVE_XAA_H
+   TRIDENT_Sync,
    TRIDENT_FillRect,
    TRIDENT_BlitRect,
 #if 0
--
cgit v0.9.0.2-2-gbebe
