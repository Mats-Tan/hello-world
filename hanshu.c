//用if根据定义域进行计算
main()
{
	float x;
	scanf("%f", &x);
	if (x >= 3)
	{
		x = 8 - 3 * x;
	}
	else
	{
		if (x > -1 && x< 3)
		{
			x = 2*x;
		}
		else
		{
			if (x <= -1)
			{
				x = 5 * x - 3;
			}
			else
			{
				;
			}
		}
	}
	printf("%.2f\n", x);
}