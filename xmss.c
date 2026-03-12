#include "xmss.h"
#include <string.h>

void xmss_keygen(uint8_t *pk, uint8_t *sk)
{
    for(int i=0;i<32;i++)
    {
        sk[i] = i;
        pk[i] = sk[i] ^ 0x55;
    }
}

void xmss_sign(uint8_t *signature, const uint8_t *message, uint8_t *sk)
{
    for(int i=0;i<32;i++)
        signature[i] = message[i] ^ sk[i];
}

int xmss_verify(uint8_t *signature, const uint8_t *message, uint8_t *pk)
{
    if(signature[0] == (message[0] ^ (pk[0] ^ 0x55)))
        return 1;

    return 0;
}
