//某公司的薪水计算：总收入=底薪200+本周总销售额*0.08
#define BASIC_INCOME 200
#define EXTEA_INCOME 0.08
main()
{
	double income, work;
	printf("please enter your sales for the week:");
	scanf("%lf", &work);
	income = BASIC_INCOME + work * EXTEA_INCOME;
	printf("总收入=%lf\n", income);
}