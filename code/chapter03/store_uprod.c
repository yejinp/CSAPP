#include <inttypes.h>

typedef unsigned __int128 uint128_t;

// gcc -S -Og store_uprod.c
void store_uprod(uint128_t *dest, uint64_t x, uint64_t y)
{
	*dest = x * (uint128_t) y;
}
