#include <stdio.h>
main()
{
	int i = 0,n=0;
	char ch[6];
	scanf("%s", &ch);
	//int i = 0,n=0;
	while (i <= 5)
	{
		if (ch[n]!= '\0')
		{
			i++;
			printf("\n输入的第%d个数是%c\n",i, ch[n]);
			n++;
		}
		else
		{
			printf("\n这是%d位数\n\n倒序数", i);
			while (i >= 0)
			{
				printf("%c", ch[n]);
				n--;
				i--;
			}
			putchar('\n');
			break;
		}
	}
 }