//贷款利息计算
main()
{
	double interest, principal, rete, days;
	printf("please enter your principal:");
	scanf("%lf", &principal);
	printf("please enter your rete(like:0.08):");
	scanf("%lf", &rete);
	printf("please enter your days:");
	scanf("%lf", &days);
	printf("\nyour interest=%f\n", interest=principal*rete*days/365);
	printf("\nyour interest=%g\n", interest);
}