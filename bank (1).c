#include "bank.h"


main()
{
	int x;//��������ѡ��
	//extern char id[12], password[8];//�˺�12λ������6λ

BEGIN:
	puts("������������");
	puts("���������¼����");
	Sleep(1000);
	system("cls");
	denglu();//����ļ�
	scanf("%d", &x);
	switch (x) {
	case 1:
		x = denglu_check( );//����ļ�
		switch (x) {
		case 1:
			//get_money_user(id);//��ȡ�ļ�
			caozuo();//����ļ�
			printf("�����ص���¼ҳ��...");
			Sleep(500);
			goto BEGIN;
			break;
		case 0:
			puts("��������������");
			Sleep(200);
			puts("3");
			Sleep(200);
			puts("2");
			Sleep(200);
			puts("1");
			Sleep(200);
			goto BEGIN;
		default:puts("�޸�ѡ���������"); goto BEGIN;
		}
		break;
	case 2:
		zhuce();//д���ļ�
		printf("�����ص���¼ҳ��...");
		Sleep(500);
		goto BEGIN;
		break;
	case 3:

		break;
	}

	//��ʾ��¼��ע�����
	//		��¼��ע����б��桢��鹦��




	//��ʾ���й���ѡ�����
	// 	   ���˺Ŷ�Ӧ�������в���
	// 	   ������������ܽ����в���




}