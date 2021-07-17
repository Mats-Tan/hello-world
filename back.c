#include <stdio.h>
void back(void);
main()
{
	back();
}
void back(void)
{
	char ch[20];
	int n=0,i=0;
	scanf("%s", &ch);
	for (; ch[i] != '\0';i++)
		n++;
	for (; i >= 0; i--)
	{
		printf("%c", ch[i-1]);
	}
	printf("\n");
}
