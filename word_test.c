#include <stdio.h>
main()
{
	char word;
	printf("请输入一个字母，程序将会为您判断字母大小写:");
	scanf("%c", &word);
	int a;
	a = (int)word;
	a >= 97 ? printf("这是个小写字母 % c，它的大写字母是 % c\n", word, word - 32) : printf("这是个大写字母%c，它的小写字母是%c\n", word, word + 32);
} 