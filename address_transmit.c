#include <stdio.h>

int fun(int *p1,int *p2) {//�β�������int*��ָ�룬���ǽ���ʵ�εĵ�ַ
	int da=*p1, db=*p2;
	da = da - db;
	*p1 = da;

}

main() {
	int a = 0, b = 0;
	puts("����Ӣ��״̬������������a,b���м�������");
	scanf("%d,%d", &a, &b);
	fun(&a, &b);//Ҫ�������ĵ�ַ���ݸ��β�ָ�����
	printf("%d\n", a);
}