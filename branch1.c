#include <stdio.h>
#include <stdlib.h>
extern float allmoney;
float money=0.00;
void getmoney()
{
	system("cls");
	printf("������ȡ����:\n");
	scanf("%f", &money);

	if (allmoney-money < 0){
		printf("���㣬��ĵ�ǰ���Ϊ%.2f", allmoney); 
	}
	else {
		allmoney -= money;
		printf("���Ŀ������ڳ��⣬���ڳ�����ȡ�������ֽ�\n�ܹ�����%.2fԪ\n", money);
		printf("ʣ����%.2f\n", allmoney);
	}
	
}
void inmoney()
{
	system("cls");
	printf("��������Ҫת���˻��Ľ��:\n");
	scanf("%f", &money);
	allmoney += money;
	printf("��ת��ɹ�����ǰ���Ϊ%.2f\n", allmoney);
	
}
void seaech()
{
	system("cls");
	printf("�������Ϊ%.2f", allmoney);
}