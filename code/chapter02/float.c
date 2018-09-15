#include <stdio.h>

#include <stdlib.h>

int main()
{

	float f = - 9.9;
	long *lf = (long *)(&f); 
	int l = 8 * sizeof(f), i;
	printf("sizeof(float)=%d\n", l/8);
	for (i = 1; i < l; i++)
	{
		printf("%1d ",((*lf)>>i) & 1);
	}

	printf("\n");
}
