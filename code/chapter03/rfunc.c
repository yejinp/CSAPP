long rfunc(unsigned long x){
	if(0 == x)
		return 0;
	
	unsigned long nx = x>>2;
	long rv = rfunc(nx);
	return x +rv ;
}
