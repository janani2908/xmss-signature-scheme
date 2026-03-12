#include <stdint.h>

void merkle_combine(uint8_t *left, uint8_t *right, uint8_t *parent)
{
    for(int i=0;i<32;i++)
        parent[i] = left[i] ^ right[i];
}
