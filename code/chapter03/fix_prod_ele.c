#define  N 16
typedef int fix_matric[N][N];

int  fix_prod_ele(fix_matric A, fix_matric B, long i, long k) 
{
	long j;
	int result = 0;

	for(j = 0; j < N; j++) {
		result += A[i][i]*B[j][k];
	}

	return result;
}

int fix_prod_ele_opt(fix_matric A, fix_matric B, long i, long k) 
{
	int *Aptr = &A[i][0];
	int *Bptr = &B[0][k];
	int *Bend = &B[N][k];

	int result = 0;

	do {
		result += *Aptr * *Bptr;
		Aptr ++;
		Bptr += N;
	} while(Bptr != Bend);

	return result;
}
