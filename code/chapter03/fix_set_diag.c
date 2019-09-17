#define  N 16
typedef int fix_matric[N][N];

int  fix_prod_diag(fix_matric A, int val) 
{
	long i;

	for(i = 0; i < N; i++) 
		A[i][i] = val;
}

int  fix_prod_diag_opt(fix_matric A, int val) 
{
	long i;

	for(i = 0; i < N; i++) 
		A[i][i] = val;
}
