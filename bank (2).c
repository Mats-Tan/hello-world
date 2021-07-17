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
	printf("1 取款\n");
	printf("2 存款\n");
	printf("3 查询\n");
	printf("4 退出\n");
	printf("\n请输入0~3中的一个数字\n");
	scanf("%d", &n);
	switch (n) {
	case 1:
		system("cls");
		getmoney();
	printf("是否继续操作\n");
	printf("继续操作请按1，退出请按0\n");
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
		printf("是否继续操作\n");
		printf("继续操作请按1，退出请按0\n");
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
		printf("是否继续操作\n");
		printf("继续操作请按1，退出请按0\n");
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
	default:printf("输入错误，请重新输入\n");system("cls"); goto BEGIN;
	}
	system("cls");
}