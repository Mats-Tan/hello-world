//�ó���Ĺ��ܣ��ǱȽ�a,b,c�Ĵ�С�����ҳ��������Сֵ
//p1,p2����Ϊ�βε�ָ�룬����max��min�ĵ�ַ
//����myfun()�����У�ִ��ָ������ı仯����

#include <stdio.h>

void myfun(int x, int y,int z,int* p1, int* p2) {
	*p1 = x > y ? (x > z ? x : z) : (y > z ? y : z);
	*p2 = x < y ? (x < z ? x : z) : (y < z ? y : z);
}

void main()
{
	int a, b, c, max, min;
	printf("������a,b,c\n");
	scanf("%d,%d,%d", &a, &b, &c);
	myfun(a, b, c, &max, &min);
	printf("max=%d\tmin=%d\n", max, min);
}