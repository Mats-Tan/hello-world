#include "bank.h"


main()
{
	int x;//用来接收选项
	//extern char id[12], password[8];//账号12位，密码6位

BEGIN:
	puts("主程序加载完成");
	puts("即将进入登录界面");
	Sleep(1000);
	system("cls");
	denglu();//输出文件
	scanf("%d", &x);
	switch (x) {
	case 1:
		x = denglu_check( );//检查文件
		switch (x) {
		case 1:
			//get_money_user(id);//读取文件
			caozuo();//输出文件
			printf("即将回到登录页面...");
			Sleep(500);
			goto BEGIN;
			break;
		case 0:
			puts("即将返回主程序");
			Sleep(200);
			puts("3");
			Sleep(200);
			puts("2");
			Sleep(200);
			puts("1");
			Sleep(200);
			goto BEGIN;
		default:puts("无该选项，即将重启"); goto BEGIN;
		}
		break;
	case 2:
		zhuce();//写入文件
		printf("即将回到登录页面...");
		Sleep(500);
		goto BEGIN;
		break;
	case 3:

		break;
	}

	//显示登录与注册界面
	//		登录与注册具有保存、检查功能




	//显示银行功能选择界面
	// 	   对账号对应的余额进行操作
	// 	   对余额与银行总金额进行操作




}