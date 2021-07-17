//该程序的功能：是比较a,b,c的大小，并找出，最大，最小值
//p1,p2是作为形参的指针，接收max和min的地址
//画出myfun()函数中，执行指针变量的变化过程

#include <stdio.h>

void myfun(int x, int y,int z,int* p1, int* p2) {
	*p1 = x > y ? (x > z ? x : z) : (y > z ? y : z);
	*p2 = x < y ? (x < z ? x : z) : (y < z ? y : z);
}

void main()
{
	int a, b, c, max, min;
	printf("请输入a,b,c\n");
	scanf("%d,%d,%d", &a, &b, &c);
	myfun(a, b, c, &max, &min);
	printf("max=%d\tmin=%d\n", max, min);
}