#include <stdio.h>

int main()
{
	int x = 9;
	{
		int x = 8;
		printf("x=%d\n",x);
	}

	printf("x=%d\n",x);
}
