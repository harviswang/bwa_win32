#ifndef _WIN_GETTIMEOFDAY_H
#define _WIN_GETTIMEOFDAY_H

struct timezone
{
	int tz_minuteswest; /* minutes W of Greenwich */
	int tz_dsttime;     /* type of dst correction*/
};
#endif /* _WIN_GETTIMEOFDAY_H */