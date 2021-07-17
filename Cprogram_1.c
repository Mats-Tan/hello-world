#include <stdio.h>
void buter(void);
void buter(void)
{
	printf("success\n");
}

main()
{
	int a, b, sum;
	a = 123; b = 456;
	printf("sum=%d\n", sum = a + b);
	buter();
	return 0;
}

////{
////	int a, b, sum;
////	a = 123; b = 456; sum = a + b;
////	printf("sum=%d\n", sum);
////}
//{
//	int a;int b;int sum;
//	a = 123; b = 456;
//	printf("sum=%d\n", sum = a + b);
//}