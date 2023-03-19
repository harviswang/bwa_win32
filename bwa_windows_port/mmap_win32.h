#ifndef _MMAP_WIN32_H
#define _MMAP_WIN32_H

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h> /* off_t */

#define MAP_NOCACHE  (0)
#define MAP_NOEXTEMD 0x0100 /* for MAP_FILE, don't change file size */
#define MAP_FAILED   ((void *)-1)
#ifndef O_RDONLY
#define O_RDONLY     0x0000
#endif
#ifndef O_RDWR
#define O_RDWR       0x0002
#endif

#define PROT_READ  0x1 /* Page can be read. */
#define PROT_WRITE 0x2 /* Page can be written */
#define PROT_EXEC  0x4 /* Page can be executed. */
#define PROT_NONE  0x0 /* Page can not be accessed. */

#define MAP_SHARED  0x01 /* Share changes. */
#define MAP_PRIVATE 0x02 /* Changes are provate. */
#define MAP_FIXED   0x10 /* Interpret addr exactly. */

#define DLLEXP

	DLLEXP long getpagesize(void);
	DLLEXP long getregionsize(void);
	DLLEXP void *mmap(void *start, size_t len, int prot, int flags, int fd, off_t offset);
	DLLEXP int munmap(void *start, size_t len);


#ifdef __cplusplus
}
#endif

#endif /* _MMAP_WIN32_H */