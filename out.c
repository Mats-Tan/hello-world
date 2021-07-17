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
		//这里生成的文件格式将是默认的 UTF_8,但编译器使用的是 ANSI,
		//对文件进行另存为操作即可调整
		printf("请前往生成的文件，为新生成文件填写内容\n");
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

	printf("\n请输入你选择选项前的数字进行选择：\n");
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
		puts("已创建一个银行界面，请填写内容后运行");
		fclose(fp);
		exit(0);
		//这里生成的文件格式将是默认的 UTF_8,但编译器使用的是 ANSI,
		//对文件进行另存为操作即可调整
	}

	fscanf(fp, "%c", &ch);
	while (!feof(fp))
	{
		putchar(ch);
		fscanf(fp, "%c", &ch);
	}
	fclose(fp);

	printf("\n请输入你选择选项前的数字进行选择：\n");
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
		puts("\n取款操作完成，即将回到选择界面");
		Sleep(500);
		system("pause");
		goto SHOW_OUT;
	case 2:
		in_money();
		puts("\n存款操作完成，即将回到选择界面");
		Sleep(1000);
		system("pause");
		goto SHOW_OUT;
	case 3:
		check_money();
		puts("\n查询操作完成，即将回到选择界面");
		Sleep(500);
		system("pause");
		goto SHOW_OUT;
	case 4:
		puts("\n即将退出操作");
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
