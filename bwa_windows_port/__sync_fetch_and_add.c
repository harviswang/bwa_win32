#include <windows.h>

long __sync_fetch_and_add(long *x, long delta)
{
	return InterlockedExchange(x, *x + delta);
}