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
		printf("��������ĵ�%d����%c\n", n, i);	
	}
	end:
	printf("����%dλ��", n);

}