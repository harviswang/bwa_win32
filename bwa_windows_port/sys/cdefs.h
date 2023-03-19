#ifndef _CDEFS_H_
#define _CDEFS_H_

#define __FBSDID(x)

#if defined(__cplusplus)
#define	__BEGIN_DECLS	extern "C" {
#define	__END_DECLS	}
#else
#define	__BEGIN_DECLS
#define	__END_DECLS
#endif

#include "bwa_win32.h"

#endif /* _CDEFS_H_ */