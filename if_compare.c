main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b)
	{
		if (b >= c)
			printf("%d>%d>%d\n", a, b, c);
		else
			printf("%d>%d>%d\n", a, c, b);
	}
	else
	{
		if (a >= c)
			printf("%d>%d>%d\n", b, a, c);
		else
			printf("%d>%d>%d\n", b, c, a);
	}
}