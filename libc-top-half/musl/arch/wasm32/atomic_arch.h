#ifdef _REENTRANT
#error "multiple threads not supported in musl yet"
#endif

#define a_barrier() (__sync_synchronize())
#define a_cas(p, t, s) (__sync_val_compare_and_swap((p), (t), (s)))
#define a_crash() (__builtin_trap())
#define a_clz_32 __builtin_clz
#define a_clz_64 __builtin_clzll
#define a_ctz_32 __builtin_ctz
#define a_ctz_64 __builtin_ctzll

// added for ms-wasm, thread-unsafe, but ...
#define a_ll_p a_ll_p
static inline void *a_ll_p(volatile void *p)
{
    return *(void* volatile*)p;
}

// added for ms-wasm, thread-unsafe, but ...
#define a_sc_p a_sc_p
static inline int a_sc_p(volatile int *p, void *v)
{
    *(void* volatile*)p = v;
    return 1;
}

static inline void a_pre_llsc() {}
static inline void a_post_llsc() {}
