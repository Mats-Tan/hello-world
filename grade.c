#include <stdlib.h>

int sort(int x,int stu[][3]) {
	int b[5] = { 0 },i=0,max=0,n=1;
	int* p = NULL;

	for (; i < 5; i++) {
		b[i] = stu[i][x];
	}


	for (;n<5;n++) {
		if (b[i] > b[i - 1]) {
			b[i] = b[i] ^ b[i - 1];
			b[i-1] = b[i] ^ b[i - 1];
			b[i]= b[i] ^ b[i - 1];
		}
		i--;
		if (i < 0)
			break;
	}


	for (i=0,n=0;;) {
		if (b[i] >= 60)
			n++;
		else
			;
		i++;
		if (i > 3)
			break;
	}

	return n;

}
main() {
	int stu[4][3] = { {12,34,9},{90,95,100},{62,59,99},{73,85,91} };
	int x=0, i=0;
	
	puts("������Ҫ��������Ŀγ�");
	
	puts("------------------------");
	puts("\t1.����");
	puts("\t2.��ѧ");
	puts("\t3.Ӣ��");
	puts("------------------------");
	scanf("%d", &x);
	if (x == 1 || x == 2 || x == 3)
		printf("�ÿ�Ŀ�ļ�������Ϊ%d\n",sort(x-1, stu));//�����x��1��2��3����ʵ�ʴ��������0Ϊ��һλ������
	else
		puts("error");
	system("pause");
}