//�ֲ��������ص㣺
//1. �ں����ڲ�����
//2. �����ڱ������λ�ã�������ʹ��
//3. ���ھ�̬����
int f(int a)
{
	auto int b = 0;//�ֲ�����
	static int c = 3;
	printf("c�ĳ�ֵ=%d\n", c);
	b += 1;
	c += 1;
	printf("c����ֵ%d\n", c);
	return (a + b + c);
}
void main()
{
	int a = 2, i;
	for (i = 0; i < 3; i++)
		printf("%d\n", f(a));
}