#include "sphere.c"
void main()
{
	float r, v;
	printf("r=");
	scanf("%f", &r);
	v = volumn(r);
	printf("PI=%f\nvolumn=%f\n", PI, v);
}