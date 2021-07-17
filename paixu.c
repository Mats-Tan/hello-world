main()
{
	char a, b, c, d, e,size;
	size=scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
	if (a == '\n')
		size -= 5;
	else
	{
		if (b == '\n')
			size -= 4;
		else
		{
			if (c == '\n')
				size -= 3;
			else
			{
				if (d =='\n')
					size-=2;

				else
				{
					if (e == '\n')
						size--;
					else
					{
						;
					}
				}
			}
		}
	}
	printf("它是 %d 位数\n", size);
	printf("%c\n%c\n%c\n%c\n%c\n", a, b, c, d, e);
	printf("%c%c%c%c%c\n", e, d, c, b, a);
}