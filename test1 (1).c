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
	//extern int a, b;//���ȥ��<extern int a, b;>
	//1. ��main()ִ�п�ʼǰ�ٴζ���һ��<int a,b;>����
	printf("������a��b��ֵ��\n");
	scanf("%d,%d", &a, &b);
	printf("max=%d", mymax(a, b));
}
int a, b;