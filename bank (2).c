#include <stdio.h>
#include <stdlib.h>
#include "branch.h"

int n;
float allmoney=1000.00;
//void getmoney();
//void inmoney();
//void seaech();
main()
{
	int j;
BEGIN:
	printf("1 ȡ��\n");
	printf("2 ���\n");
	printf("3 ��ѯ\n");
	printf("4 �˳�\n");
	printf("\n������0~3�е�һ������\n");
	scanf("%d", &n);
	switch (n) {
	case 1:
		system("cls");
		getmoney();
	printf("�Ƿ��������\n");
	printf("���������밴1���˳��밴0\n");
	scanf("%d", &j);
	if (j)
	{
		system("cls");
		goto BEGIN;
	}
	else
		;
		break;
	case 2:
		system("cls");
		inmoney();
		printf("�Ƿ��������\n");
		printf("���������밴1���˳��밴0\n");
		scanf("%d", &j);
		if (j)
		{
			system("cls");
			goto BEGIN;
		}
		else
			;
		break;
	case 3:
		system("cls");
		seaech();
		printf("�Ƿ��������\n");
		printf("���������밴1���˳��밴0\n");
		scanf("%d", &j);
		if (j)
		{
			system("cls");
			goto BEGIN;
		}
		else
			;
		break;
	case 4:
		system("cls");
		break;
	default:printf("�����������������\n");system("cls"); goto BEGIN;
	}
	system("cls");
}