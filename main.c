#include <stdio.h>
#include <stdint.h>
#include "xmss.h"

int main()
{
    uint8_t pk[32];
    uint8_t sk[32];
    uint8_t signature[32];

    uint8_t message[32] = "Hello XMSS";

    xmss_keygen(pk, sk);

    xmss_sign(signature, message, sk);

    int valid = xmss_verify(signature, message, pk);

    if(valid)
        printf("Signature valid\n");
    else
        printf("Signature invalid\n");

    return 0;
}
