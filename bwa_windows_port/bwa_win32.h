#ifndef _BWA_WIN32_H_
#define _BWA_WIN32_H_

/* #define __func__ __FUNCTION__ */ /* not useful */

/** port win32 need header file */
#include <windows.h> /* MAX_PATH */

#include <winsock.h> /* struct timeval */

#include "getopt.h" /* getopt */

#include "getrusage-windows.h" /* getrusage */

#include "win-gettimeofday.h" /* gettimeofday */

#include "mmap_win32.h" /* mmap */

#include "__sync_fetch_and_add.h" /* __sync_fetch_and_add */

#endif /* _BWA_WIN32_H */