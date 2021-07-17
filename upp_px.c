main()
{
	char ch[6],i;
	int n;
	i = '1';
	scanf("%s", &ch);
	for (n = 0; n < 5&&i!='\0'&&i!='\n';)
	{
		i = ch[n];
		if (i == '\0')
			goto end;
		n++;
		printf("这是输入的第%d个数%c\n", n, i);	
	}
	end:
	printf("这是%d位数", n);

}