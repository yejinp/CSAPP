// gcc -S -og shift_left4_rightn.c 
long shift_left4_rightn(long x, long n)
{
	x <<= 4;
	x >>= n;
	return x;
}
