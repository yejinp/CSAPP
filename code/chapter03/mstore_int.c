long mult2(long, long);
int mult2_int(int, int);

void multstore(long x, long y, long *dest) {
	long	t = mult2(x, y);
	*dest = t;
}
void multstore_int(int x, int y, int *dest) {
	int t = mult2_int(y, x);
	*dest = t;
}
