//回文
main()
{
	char a[6];
	scanf("%s", &a);
	if (a[0] == a[4])
	{
		if (a[1] == a[3])
		{
			printf("是回文数字\n");
		}
		else
		{
			printf("不是回文数字\n");
		}
	
	}
	else
		printf("不是回文数字\n");
}
