#include <stdio.h>
#include <stdlib.h>
extern float allmoney;
float money=0.00;
void getmoney()
{
	system("cls");
	printf("请输入取款金额:\n");
	scanf("%f", &money);

	if (allmoney-money < 0){
		printf("余额不足，你的当前余额为%.2f", allmoney); 
	}
	else {
		allmoney -= money;
		printf("您的款项正在出库，请在出钞口取走您的现金\n总共出钞%.2f元\n", money);
		printf("剩余金额%.2f\n", allmoney);
	}
	
}
void inmoney()
{
	system("cls");
	printf("请输入您要转入账户的金额:\n");
	scanf("%f", &money);
	allmoney += money;
	printf("已转入成功，当前余额为%.2f\n", allmoney);
	
}
void seaech()
{
	system("cls");
	printf("您的余额为%.2f", allmoney);
}