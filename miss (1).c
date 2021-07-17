main()
{
	int a;
	printf("%d\n", a = (a = 3 * 5, a * 4), a = a + 5);
	printf("%d\n", a = (a = 3 * 5, a * 4), a + 5);
	printf("%d\n", a = ((a = 3 * 5, a * 4), a + 5));
	return 0;
}