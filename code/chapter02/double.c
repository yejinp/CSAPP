#include <stdio.h>

#include <stdlib.h>

int main()
{

	double d = - 9.9;
	long *ld = (long *)(&d); 
	int l = 8 * sizeof(d), i;
	printf("sizeof(double)=%d\n", l/8);
	for (i = 1; i < l; i++)
	{
		printf("%1d ",((*ld)>>i) & 1);
	}

	printf("\n");
}
