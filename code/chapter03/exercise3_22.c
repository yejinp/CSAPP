#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int32_t		n32 = 1, n32_1;
	int64_t		n64 = 1, n64_1;
	int i = 0;
	while(1) {
		i++;
		if (i * n32 < n32) {
			break;
		}
		n32 = n32 * i;
	}
	printf("i=%d\n",i - 1);

	i = 0;
	while(1) {
		i++;
		if (i * n64 < n64) {
			break;
		}
		n64 = n64 * i;
	}
	printf("i=%d\n",i - 1);
}
