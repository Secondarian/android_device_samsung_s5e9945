#include <stddef.h>

extern void *OPENSSL_sk_delete(void *sk, size_t where);
void *sk_delete(void *sk, size_t where) {
    return OPENSSL_sk_delete(sk, where);
}

extern void *OPENSSL_sk_dup(void *sk);
void *sk_dup(void *sk) {
    return OPENSSL_sk_dup(sk);
}
