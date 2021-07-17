#include "bank.h"



//extern char id[1000], password[1000];//账号9位，密码6位
//登录检查
// 
extern char id[1000] = {0};
extern char password[1000]= { 0 };//账号9位，密码6位
int denglu_check() {
	FILE* fp = NULL;
	char* t = ".txt";
	int i = 0; char r_id[1000] = { 0 }, r_password[1000] = { 0 }, word = 1, v[1000] = { 0 };
	printf("请输入你的账号(英文开头加数字)：");
	scanf("%s", &id);
	printf("请输入你的密码(英文加数字)：");
	scanf("%s", &password);

	//字符串拼接为 文件名.txt
	strcpy(r_id, id);
	strcat(r_id, t);

	
	fp = fopen(r_id, "r");
	if (fp == NULL) {
		printf("open file failure!\n");
		printf("rebuilding……\n");
		//
		//用户文件建立
		fp = fopen("user.txt", "w");
		fprintf(fp, "id:%s.txt_%s+%.2f", id, password, 0.00);
		fclose(fp);//写入完成后要关闭才能保存，保存以后才能调用信息
		//文件信息检测
		fp = fopen("user.txt", "r");
		for (;word!=':';) {
			fscanf(fp, "%c", &word);
		}
		fscanf(fp, "%c", &word);
		for (; word != '_';) {
			r_id[i] = word;
			i++;
			fscanf(fp, "%c", &word);
			
		}

		fclose(fp);
		printf("%s\n", r_id);
		rename("user.txt", r_id);
		//
		//
		printf("该账户文件不存在，正在重新建立\n");
		Sleep(500);
		puts("建立成功，请重新登录");
		system("pause");
		exit(0);
	}
	strcpy(r_id, v);

	for (; word != ':';) {
		fscanf(fp, "%c", &word);
	}

	//取文件内id
	fscanf(fp, "%c", &word);
	for (; word != '.';) {
		r_id[i] = word;
		i++;
		fscanf(fp, "%c", &word);
	}

	for (; word != '_';) {
		fscanf(fp, "%c", &word);
	}

	i = 0;//计数器归零
	strcpy(r_id, v);

	//取文件内密码
	fscanf(fp, "%c", &word);
	for (; word != '+';) {
		r_password[i] = word;
		i++;
		fscanf(fp, "%c", &word);
	}
	


	//账号密码检测
	if (strcmp(password,r_password)) {
		fclose(fp);
		//get_money_user(id);
		puts("密码错误");
		return 0;
	}
	else {
		fclose(fp);
		get_money_user(id);
		puts("密码正确，即将进入操作界面");
		Sleep(1000);
		Sleep(500);
		return 1;
	}
	
	fclose(fp);

}

// 
// 
//注册
//	同时生成用户文件：(char)id_9，(char)password_6，(float)money
// 
int zhuce() {
	FILE* fp = NULL;
	char* t = ".txt";
	int i = 0; char r_id[1000] = { 0 }, r_password[1000] = { 0 }, word = 1, v[1000] = { 0 };
	puts("正在为注册准备");
	Sleep(500);
	puts("准备完成");
	Sleep(1500);
	system("cls");
	printf("请输入你的账号(英文开头加数字)：");
	scanf("%s", &id);
	printf("请输入你的密码(英文加数字)：");
	scanf("%s", &password);

	//字符串拼接为 文件名.txt
	strcpy(r_id, id);
	strcat(r_id, t);


	fp = fopen(r_id, "r");
	if (fp == NULL) {
		//printf("open file failure!\n");
		printf("rebuilding……\n");
		//
		//用户文件建立
		fp = fopen("user.txt", "w");
		fprintf(fp, "id:%s.txt_%s+%.2f", id, password, 0.00);
		fclose(fp);//写入完成后要关闭才能保存，保存以后才能调用信息
		//文件信息检测
		fp = fopen("user.txt", "r");
		for (; word != ':';) {
			fscanf(fp, "%c", &word);
		}
		fscanf(fp, "%c", &word);
		for (; word != '_';) {
			r_id[i] = word;
			i++;
			fscanf(fp, "%c", &word);

		}

		fclose(fp);
		printf("%s\n", r_id);
		rename("user.txt", r_id);
		//
		//
		printf("确认该账户文件不存在，正在建立\n");
		Sleep(500);
		puts("建立成功，请重新登录");
		system("pause");
		exit(0);
	}
	else {
		puts("该账户已存在");
		fclose(fp);
	}

}

// 
// 
//金额提取
// 
float get_money_user(char*id) {
	FILE* fp = NULL;
	char word ;
	float r_money = 0;
	char r_id[1000] = { 0 };
	char* t = ".txt";

	strcpy(r_id, id);
	strcat(r_id, t);

	fp = fopen(r_id, "r");

	if (fp == NULL)
		puts("文件打开失败");
	fscanf(fp, "%c", &word);
	while (!feof(fp)) {
		for (; word != '+';) {
			fscanf(fp, "%c", &word);
		}
		fscanf(fp, "%f", &r_money);
		allmoney = r_money;

	}
	allmoney = r_money;
	fclose(fp);
}

// 
// 
//金额写入
//
void keep_money(char*id) {
	FILE* fp = NULL;
	char word;
	float r_money = 0;
	char r_id[1000] = { 0 };
	char* t = ".txt";

	strcpy(r_id, id);
	strcat(r_id, t);

	fp = fopen(r_id, "a+");
	if(fp==NULL)
		puts("文件打开失败");

	/*fseek(fp, 0L, SEEK_END);*/
	
	fprintf(fp, "+%.2f",allmoney);
	fclose(fp);

}


// 
//


