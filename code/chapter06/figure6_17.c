#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define		N	1024
#define		M	512

int	array[N][M];
int	loop_count = 1;

int sumvec1()
{
	int i, j;
	int sum;

	for(i = 0; i < N; i++) {
		for(j = 0; j < M; j++) {
			sum += array[i][j];
		}
	} 
	
}

int sumvec2()
{
	int i, j;
	int sum;

	for(j = 0; j < M; j++) {
		for(i = 0; i < N; i++) {
			sum += array[i][j];
		}
	} 
	
}

void print_time_interval(struct timeval *start, struct timeval *end)
{

	if(start->tv_sec == end->tv_sec) {
		printf("%d ms\n", end->tv_usec - start->tv_sec);
	} else {

	}
}

int main(int argc, char **argv)
{

	struct timeval start, end;
	
	gettimeofday(&start);
	gettimeofday(&end);

}
