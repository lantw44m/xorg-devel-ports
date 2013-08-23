--- tests/test-helpers.c.orig	2013-08-20 12:38:27.000000000 +0200
+++ tests/test-helpers.c	2013-08-20 12:39:45.000000000 +0200
@@ -20,6 +20,12 @@
  * OF THIS SOFTWARE.
  */
 
+#include "../config.h"
+
+#ifdef HAVE_SYS_PARAM_H
+#include <sys/param.h>
+#endif
+
 #include <assert.h>
 #include <errno.h>
 #include <dirent.h>
@@ -28,6 +34,16 @@
 
 #include "test-runner.h"
 
+#ifdef __FreeBSD__
+/* FreeBSD uses fdescfs (which must be mounted using:
+ *    mount -t fdescfs fdescfs /dev/fd
+ * before the test suite can be run). */
+#define OPEN_FDS_DIR "/dev/fd"
+#else
+/* Linux. */
+#define OPEN_FDS_DIR "/proc/self/fd"
+#endif
+
 int
 count_open_fds(void)
 {
@@ -35,8 +51,8 @@
 	struct dirent *ent;
 	int count = 0;
 
-	dir = opendir("/proc/self/fd");
-	assert(dir && "opening /proc/self/fd failed.");
+	dir = opendir(OPEN_FDS_DIR);
+	assert(dir && "opening " OPEN_FDS_DIR " failed.");
 
 	errno = 0;
 	while ((ent = readdir(dir))) {
@@ -45,7 +61,7 @@
 			continue;
 		count++;
 	}
-	assert(errno == 0 && "reading /proc/self/fd failed.");
+	assert(errno == 0 && "reading " OPEN_FDS_DIR " failed.");
 
 	closedir(dir);
 
