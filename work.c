#include "bank.h"

static float money;
extern float allmoney;
extern char id[1000];
void get_money()
{
	printf("������ȡ����:\n");
	scanf("%f", &money);

	if (allmoney - money < 0) {
		printf("���㣬��ĵ�ǰ���Ϊ%.2f", allmoney);
		keep_money(id,allmoney);
		Sleep(1000);
	}
	else {
		allmoney -= money;
		bmoney -= money;//�������ڵ��ܿ�����в���
		printf("���Ŀ������ڳ��⣬���ڳ�����ȡ�������ֽ�\n�ܹ�����%.2fԪ\n", allmoney);
		printf("ʣ����%.2f\n", allmoney);
		keep_money(id,allmoney);
		Sleep(1000);
	}

}
void in_money()
{
	printf("��������Ҫת���˻��Ľ��:\n");
	scanf("%f", &money);
	allmoney += money;
	bmoney += money;//�������ڵ��ܿ�����в���
	printf("��ת��ɹ�����ǰ���Ϊ%.2f\n", allmoney);
	keep_money(id,allmoney);
	Sleep(1000);

}
void check_money()
{
	printf("�������Ϊ%.2f", allmoney);
	keep_money(id);
	Sleep(1000);
}
