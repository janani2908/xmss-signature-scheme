#include <stdint.h>

void simple_hash(const uint8_t *input, int len, uint8_t *output)
{
    for(int i=0;i<32;i++)
        output[i] = 0;

    for(int i=0;i<len;i++)
        output[i % 32] ^= input[i];
}
