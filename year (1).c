main()
{
	int year;
	printf("请输入您要查询的年份（仅支持1582后）：");
	scanf("%d", &year);
	(year % 4) == 0 ? ((year % 100) == 0 ? printf("不是闰年") : printf("是闰年")) : printf("不是闰年");
	printf("\n");
}