#include "bank.h"



//extern char id[1000], password[1000];//�˺�9λ������6λ
//��¼���
// 
extern char id[1000] = {0};
extern char password[1000]= { 0 };//�˺�9λ������6λ
int denglu_check() {
	FILE* fp = NULL;
	char* t = ".txt";
	int i = 0; char r_id[1000] = { 0 }, r_password[1000] = { 0 }, word = 1, v[1000] = { 0 };
	printf("����������˺�(Ӣ�Ŀ�ͷ������)��");
	scanf("%s", &id);
	printf("�������������(Ӣ�ļ�����)��");
	scanf("%s", &password);

	//�ַ���ƴ��Ϊ �ļ���.txt
	strcpy(r_id, id);
	strcat(r_id, t);

	
	fp = fopen(r_id, "r");
	if (fp == NULL) {
		printf("open file failure!\n");
		printf("rebuilding����\n");
		//
		//�û��ļ�����
		fp = fopen("user.txt", "w");
		fprintf(fp, "id:%s.txt_%s+%.2f", id, password, 0.00);
		fclose(fp);//д����ɺ�Ҫ�رղ��ܱ��棬�����Ժ���ܵ�����Ϣ
		//�ļ���Ϣ���
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
		printf("���˻��ļ������ڣ��������½���\n");
		Sleep(500);
		puts("�����ɹ��������µ�¼");
		system("pause");
		exit(0);
	}
	strcpy(r_id, v);

	for (; word != ':';) {
		fscanf(fp, "%c", &word);
	}

	//ȡ�ļ���id
	fscanf(fp, "%c", &word);
	for (; word != '.';) {
		r_id[i] = word;
		i++;
		fscanf(fp, "%c", &word);
	}

	for (; word != '_';) {
		fscanf(fp, "%c", &word);
	}

	i = 0;//����������
	strcpy(r_id, v);

	//ȡ�ļ�������
	fscanf(fp, "%c", &word);
	for (; word != '+';) {
		r_password[i] = word;
		i++;
		fscanf(fp, "%c", &word);
	}
	


	//�˺�������
	if (strcmp(password,r_password)) {
		fclose(fp);
		//get_money_user(id);
		puts("�������");
		return 0;
	}
	else {
		fclose(fp);
		get_money_user(id);
		puts("������ȷ�����������������");
		Sleep(1000);
		Sleep(500);
		return 1;
	}
	
	fclose(fp);

}

// 
// 
//ע��
//	ͬʱ�����û��ļ���(char)id_9��(char)password_6��(float)money
// 
int zhuce() {
	FILE* fp = NULL;
	char* t = ".txt";
	int i = 0; char r_id[1000] = { 0 }, r_password[1000] = { 0 }, word = 1, v[1000] = { 0 };
	puts("����Ϊע��׼��");
	Sleep(500);
	puts("׼�����");
	Sleep(1500);
	system("cls");
	printf("����������˺�(Ӣ�Ŀ�ͷ������)��");
	scanf("%s", &id);
	printf("�������������(Ӣ�ļ�����)��");
	scanf("%s", &password);

	//�ַ���ƴ��Ϊ �ļ���.txt
	strcpy(r_id, id);
	strcat(r_id, t);


	fp = fopen(r_id, "r");
	if (fp == NULL) {
		//printf("open file failure!\n");
		printf("rebuilding����\n");
		//
		//�û��ļ�����
		fp = fopen("user.txt", "w");
		fprintf(fp, "id:%s.txt_%s+%.2f", id, password, 0.00);
		fclose(fp);//д����ɺ�Ҫ�رղ��ܱ��棬�����Ժ���ܵ�����Ϣ
		//�ļ���Ϣ���
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
		printf("ȷ�ϸ��˻��ļ������ڣ����ڽ���\n");
		Sleep(500);
		puts("�����ɹ��������µ�¼");
		system("pause");
		exit(0);
	}
	else {
		puts("���˻��Ѵ���");
		fclose(fp);
	}

}

// 
// 
//�����ȡ
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
		puts("�ļ���ʧ��");
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
//���д��
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
		puts("�ļ���ʧ��");

	/*fseek(fp, 0L, SEEK_END);*/
	
	fprintf(fp, "+%.2f",allmoney);
	fclose(fp);

}


// 
//


