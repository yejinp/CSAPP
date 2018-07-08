#include <stdio.h>

void inplace_swap(int *x, int *y)
{
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int
main()
{
	int a = 9, b = 10, c = 9;

	printf("before swap: a = %d, b = %d, c = %d\n", a, b, c);
	inplace_swap(&a, &b);
	inplace_swap(&c, &b);
	
	printf("after  swap: a = %d, b = %d, c = %d\n", a, b, c);

}
