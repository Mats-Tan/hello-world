//ĳ��˾��нˮ���㣺������=��н200+���������۶�*0.08
#define BASIC_INCOME 200
#define EXTEA_INCOME 0.08
main()
{
	double income, work;
	printf("please enter your sales for the week:");
	scanf("%lf", &work);
	income = BASIC_INCOME + work * EXTEA_INCOME;
	printf("������=%lf\n", income);
}