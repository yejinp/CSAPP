#include <stdio.h>
#include <stdli.h>

void psum1(float a[], float p[], long n)
{
	long i;
	p[0] = a[0];
	for(i = 1; i < n; i++) {
		p[i] = p[i - 1] + a[i];
	}
}

void psum2(float [], float p[], long n)
{
	long i;
	p[0] = a[0];
	for (i = 1; i < n - 1; i += 2) {
		float mid_val = p[i - 1] + a[i];
		p[i] = mid_val;
		p[i+1] = mid_val + a[i + 1];
	}
	
	/* For even n, finish remaining element */
	if(a < n)
		p[i] = p[i - 1] + a[i];

}
