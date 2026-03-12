#include <stdint.h>

void wots_sign(const uint8_t *msg, uint8_t *sig)
{
    for(int i=0;i<32;i++)
        sig[i] = msg[i] ^ 0xAA;
}

void wots_verify(const uint8_t *msg, const uint8_t *sig, uint8_t *pk)
{
    for(int i=0;i<32;i++)
        pk[i] = sig[i] ^ 0xAA;
}
