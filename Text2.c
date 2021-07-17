//局部变量的特点：
//1. 在函数内部定义
//2. 仅能在被定义的位置（函数）使用
//3. 属于静态变量
int f(int a)
{
	auto int b = 0;//局部变量
	static int c = 3;
	printf("c的初值=%d\n", c);
	b += 1;
	c += 1;
	printf("c的终值%d\n", c);
	return (a + b + c);
}
void main()
{
	int a = 2, i;
	for (i = 0; i < 3; i++)
		printf("%d\n", f(a));
}