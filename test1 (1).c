//int a, b;
int mymax(int x, int y)
{
	int z;
	if (x > y) z = x;
	else z = y;
	return z;

}
int a, b;
void main()
{
	//extern int a, b;//如果去掉<extern int a, b;>
	//1. 在main()执行开始前再次定义一次<int a,b;>即可
	printf("请输入a，b的值：\n");
	scanf("%d,%d", &a, &b);
	printf("max=%d", mymax(a, b));
}
int a, b;