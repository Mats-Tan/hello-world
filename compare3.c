main()
{
	int a, b, c;
	printf("���������������м��ÿո������");
	scanf("%d%d%d", &a, &b, &c);
	a=a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("����������%d\n", a);
}