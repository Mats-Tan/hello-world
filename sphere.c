#include <stdio.h>
#define PI 3.1415926

float volumn(float r)
{
	float v;
	v = 4.0 / 3.0 * PI * r * r * r;
	return v;
}