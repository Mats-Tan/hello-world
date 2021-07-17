#include <stdio.h>
void temp(int);
main()
{
	temp(1);
	putchar('\n');
}
void temp(int n)
{
	char ch;
	scanf("%c", &ch);
	if (ch != '\n')
	{
		//n++;
		temp(n+1);
	}
	printf("%c", ch);
}