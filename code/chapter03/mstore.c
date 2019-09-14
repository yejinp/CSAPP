long mult2(long, long);

void multstore(long x, long y, long *dest) {
//	long	t = mult2(x, y);
	long	t = mult2(y, x);
	*dest = t;
}
