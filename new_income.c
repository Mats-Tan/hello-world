#define BASIC_INCOME 200
#define EXTEA_INCOME 0.08
main()
{
	double work;
	scanf("%lf", &work);
	printf("◊‹ ’»Î=%f\n", BASIC_INCOME + work * EXTEA_INCOME);
}