#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int	lval = 0xFEDCBA98, aval = 0XFEDCBA98;
	unsigned	uval = 0XFEDCBA98u;

	printf("lval = %x, lval << 32 = %x\n", lval, lval << 32);
	printf("aval = %x, aval >> 36 = %x\n", aval, aval >> 36);
	printf("uval = %x, uval >> 40 = %x\n", uval, uval >> 40);
}
