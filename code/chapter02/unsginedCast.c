#include <stdio.h>

int
main()
{
	unsigned	u = 4294967295u;  //UMax
	int  tu = (int) u;
	printf("u = %u, tu = %d\n", u, tu);
	return 0;
}
