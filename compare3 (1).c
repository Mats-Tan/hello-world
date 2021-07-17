main()
{
	int a, b, c;
	printf("请输入三个数字中间用空格隔开：");
	scanf("%d%d%d", &a, &b, &c);
	a=a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("最大的数字是%d\n", a);
}