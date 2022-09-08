#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include "locale_impl.h"
#include "libc.h"

locale_t __duplocale(locale_t old)
{
	assert(false && "not implemented in mswasm-cheri-128");
// 	locale_t new = malloc(sizeof *new);
// 	if (!new) return NULL;
// 	if (old == LC_GLOBAL_LOCALE) old = &libc.global_locale;
// 	*new = *old;
// 	return new;
}

weak_alias(__duplocale, duplocale);
