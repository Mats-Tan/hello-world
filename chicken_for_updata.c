main()
{
	int a=-1, b=0, c=0, full = 0, x = 0;
	for (; a <= 20;)
	{
		a++;
		full = 0; x = 0;
		b = (100 - 7 * a) / 4;
		c = 100 - a - b;
		full = a + b + c;
		x = 5 * a + 3 * b + c / 3;
		if (((100 - 7 * a) % 4) == 0 && b > 0 && full == 100 && x == 100)
		{
			printf("����%dֻ,ĸ��%dֻ,С��%dֻ\n", a, b, c);
		}
	}
}