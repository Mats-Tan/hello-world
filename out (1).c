#include "bank.h"

int denglu()
{
	FILE* fp;
	char ch;
	fp = fopen("denglu.txt", "r");
	if (fp == NULL) {
		puts("open file failure!");
		puts("rebuliding...");
		fp = fopen("denglu.txt", "w");
		//�������ɵ��ļ���ʽ����Ĭ�ϵ� UTF_8,��������ʹ�õ��� ANSI,
		//���ļ��������Ϊ�������ɵ���
		printf("��ǰ�����ɵ��ļ���Ϊ�������ļ���д����\n");
		exit(0);
	}
	Sleep(1000);
	system("cls");
	fscanf(fp, "%c", &ch);
	while (!feof(fp))
	{
		putchar(ch);
		fscanf(fp, "%c", &ch);
	}
	fclose(fp);

	printf("\n��������ѡ��ѡ��ǰ�����ֽ���ѡ��\n");
}

int out()
{
	FILE* fp;
	char ch;
	fp = fopen("out.txt", "r");
	if (fp == NULL) {
		puts("open file failure!");
		puts("rebuliding...");
		Sleep(10000);
		fp = fopen("out.txt", "w");
		puts("�Ѵ���һ�����н��棬����д���ݺ�����");
		fclose(fp);
		exit(0);
		//�������ɵ��ļ���ʽ����Ĭ�ϵ� UTF_8,��������ʹ�õ��� ANSI,
		//���ļ��������Ϊ�������ɵ���
	}

	fscanf(fp, "%c", &ch);
	while (!feof(fp))
	{
		putchar(ch);
		fscanf(fp, "%c", &ch);
	}
	fclose(fp);

	printf("\n��������ѡ��ѡ��ǰ�����ֽ���ѡ��\n");
}
void caozuo(int id) {
	int x;
SHOW_OUT:
	system("cls");
	out();
	scanf("%d", &x);
	switch (x) {
	case 1:
		get_money();
		puts("\nȡ�������ɣ������ص�ѡ�����");
		Sleep(500);
		system("pause");
		goto SHOW_OUT;
	case 2:
		in_money();
		puts("\n��������ɣ������ص�ѡ�����");
		Sleep(1000);
		system("pause");
		goto SHOW_OUT;
	case 3:
		check_money();
		puts("\n��ѯ������ɣ������ص�ѡ�����");
		Sleep(500);
		system("pause");
		goto SHOW_OUT;
	case 4:
		puts("\n�����˳�����");
		//money_into_bank(id);
		Sleep(500);
		puts("3");
		Sleep(500);
		puts("2");
		Sleep(500);
		puts("1");
	default:break;
	}
}
