#include <stdio.h>

int fun(int *p1,int *p2) {//形参是两个int*型指针，他们接收实参的地址
	int da=*p1, db=*p2;
	da = da - db;
	*p1 = da;

}

main() {
	int a = 0, b = 0;
	puts("请在英文状态下输入两个数a,b进行减法运算");
	scanf("%d,%d", &a, &b);
	fun(&a, &b);//要将变量的地址传递给形参指针变量
	printf("%d\n", a);
}