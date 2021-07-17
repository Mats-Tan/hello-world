main()
{
	int a, b;
	a = 3; b = 4;
	printf("这是交换前的值：a=%d\tb=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("这是交换后的值：a=%d\tb=%d\n", a, b);
}