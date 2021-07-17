#include <stdio.h>
int show(int n,int a)
{
	printf("(%d,%d)",n,a);
	return a;
}
void main()
{
	int a;
	a = show(1, 1) || show(2, 2) && show(3, 3); printf("a=%d\n", a);
	return 0;
}