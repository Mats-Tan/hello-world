#include <stdio.h>
#include <stdlib.h>

int slen(char(*p)[]) {
	int i = 0;
	for (; (*p)[i] != '\0'; i++);
	return i;
}

void main() {
	char name[40];
	puts("����Ӣ�����뷨�������������ĺ���ƴ��");
	scanf("%s", name);
	printf("\n���������%d����ĸ���,�����ַ����ĳ�����%d\n", slen(name),slen(name)+1);

	system("pause");
}