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
	
	puts("请输入要降序排序的课程");
	
	puts("------------------------");
	puts("\t1.语文");
	puts("\t2.数学");
	puts("\t3.英语");
	puts("------------------------");
	scanf("%d", &x);
	if (x == 1 || x == 2 || x == 3)
		printf("该科目的及格人数为%d\n",sort(x-1, stu));//输入的x是1、2、3，但实际存入的是以0为第一位的数组
	else
		puts("error");
	system("pause");
}