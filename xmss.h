#ifndef XMSS_H
#define XMSS_H

#include <stdint.h>

#define HASH_SIZE 32
#define TREE_HEIGHT 4

void xmss_keygen(uint8_t *pk, uint8_t *sk);
void xmss_sign(uint8_t *signature, const uint8_t *message, uint8_t *sk);
int xmss_verify(uint8_t *signature, const uint8_t *message, uint8_t *pk);

#endif
