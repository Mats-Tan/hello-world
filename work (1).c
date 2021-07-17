#include "bank.h"

static float money;
extern float allmoney;
extern char id[1000];
void get_money()
{
	printf("请输入取款金额:\n");
	scanf("%f", &money);

	if (allmoney - money < 0) {
		printf("余额不足，你的当前余额为%.2f", allmoney);
		keep_money(id,allmoney);
		Sleep(1000);
	}
	else {
		allmoney -= money;
		bmoney -= money;//对银行内的总款项进行操作
		printf("您的款项正在出库，请在出钞口取走您的现金\n总共出钞%.2f元\n", allmoney);
		printf("剩余金额%.2f\n", allmoney);
		keep_money(id,allmoney);
		Sleep(1000);
	}

}
void in_money()
{
	printf("请输入您要转入账户的金额:\n");
	scanf("%f", &money);
	allmoney += money;
	bmoney += money;//对银行内的总款项进行操作
	printf("已转入成功，当前余额为%.2f\n", allmoney);
	keep_money(id,allmoney);
	Sleep(1000);

}
void check_money()
{
	printf("您的余额为%.2f", allmoney);
	keep_money(id);
	Sleep(1000);
}
