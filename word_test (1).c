#include <stdio.h>
main()
{
	char word;
	printf("������һ����ĸ�����򽫻�Ϊ���ж���ĸ��Сд:");
	scanf("%c", &word);
	int a;
	a = (int)word;
	a >= 97 ? printf("���Ǹ�Сд��ĸ % c�����Ĵ�д��ĸ�� % c\n", word, word - 32) : printf("���Ǹ���д��ĸ%c������Сд��ĸ��%c\n", word, word + 32);
} 