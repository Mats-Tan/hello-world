#include <ctype.h>
main()
{
	char ch;
	
	while(scanf("%c", &ch))
	{ 
		if (isdigit(ch) != 0)
			printf("�����������\n");
		else if (islower(ch) != 0)//ʹ��tolower()��toupper()ʱ�ó����޷���������
			printf("�������Сд��ĸ\n");
		else if (isupper(ch) != 0)//������1ʱ����Ϊ���Ƿ���ԭֵ�����Իᵼ���쳣���
			printf("������Ǵ�д��ĸ\n");
		else if (ispunct(ch) != 0)
			printf("���������������\n");
		//else if (isblank(ch) != 0)
			printf("������ǿհ��ַ�\n");
		//else
			printf("������Ǳ�׼�հ��ַ�\n");
	}

}