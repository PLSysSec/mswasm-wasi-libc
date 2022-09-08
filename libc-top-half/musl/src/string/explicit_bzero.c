#define _BSD_SOURCE
#include <string.h>
#include <assert.h>
#include <stdbool.h>

void explicit_bzero(void *d, size_t n)
{
	assert(false && "not implemented in mswasm-cheri-128");
	// d = memset(d, 0, n);
	// __asm__ __volatile__ ("" : : "r"(d) : "memory");
}
