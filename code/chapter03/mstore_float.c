float mult2(float, float);

void multstore(float x, float y, float *dest) {
	float t = mult2(x, y);
	*dest = t;
}
