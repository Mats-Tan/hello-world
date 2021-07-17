#include <stdio.h>
#include <ctype.h>
#pragma warning(disable : 4996)
////#include <stdlib.h>
//#include <windows.h>

main()
{
	printf("请输入a，b的值：\n");
}

//int mymax(int x, int y)
//{
//	int z;//局部变量
//	if (x > y)z = x;
//	else z = y;
//	return z;
//}
//main()
//{
//	extern int a, b;//全局变量，如果去掉<extern int a, b;>,则在开头声明变量
//	printf("请输入a，b的值：\n");
//	scanf("%d,%d", &a, &b);
//	printf("max=%d\n", mymax(a, b));
//}

//main()
//{
//	int m, n,sum=0;
//	scanf("%d,%d", &m, &n);
//	if (m < n)
//	{
//		sum = n;
//		while (m <= n - 1)
//		{
//			sum+=m;
//			m++;
//		}
//	}
//	else
//	{
//		sum = m;
//		while (n <= m - 1)
//		{
//			sum +=n;
//			n++;
//		}
//	}
//	printf("sum=%d", sum);
//}

//#include <stdio.h>
//#define SIZE 10
//int sum(int ar[], int n);
//int main(void)
//{
//	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
//	long answer;
//	answer = sum(marbles, SIZE);
//	printf("the total number of mmarbles is %ld.\n", answer);
//	return 0;
//}
//int sum(int ar[], int n)
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	printf("the size of ar is %zd bytes.\n",sizeof ar);
//	return total;
//}

//main()
//{
//	int a = 1,c = 0,d=0;
//	float b=0.0;
//	while (a!=0)
//	{
//		scanf("%d", &a);
//		if (d > a)
//			d = d;
//		else
//			d = a;
//		b += a;
//		c++;
//	}
//	b = b / (c-1);
//	printf("平均=%.2f,最大=%d", b, d);
//	
//}

//main()
//{
//	int a=-1, b=0, c=0,full=0,x=0;
//	for (; a<20;a++)
//	{
//		b = b = (100 - 7 * a) / 4;
//		full = 0; x = 0;
//		for (; (100 - 7 * a) % 4 == 0 && b > 0 && !(full == 100 && x == 100);)
//		{
//			c = 100 - a - b;
//			full = a + b + c;
//			x = 5 * a + 3 * b + c / 3;
//			printf("公鸡%d只,母鸡%d只,小鸡%d只\n", a, b, c);
//		}
//	}
//}

//main()
//{
//	int a = -1, b = 0, c = 0, full = 0, x = 0;
//	while (a < 20)
//	{
//		a++;
//		full = 0; x = 0;
//		b = (100 - 7 * a) / 4;
//		if((100 - 7 * a) % 4==0&&b>0)
//			while (!(full == 100 && x == 100))
//			{
//				c = 100 - a - b;
//				full = a + b + c;
//				x = 5 * a + 3 * b + c / 3;
//				printf("公鸡%d只,母鸡%d只,小鸡%d只\n", a, b, c);
//			}
//	}
//}

//main()
//{
//	int a = 0, b = 0, d = 0;
//		float c = 0;
//	while (a==0)
//	{
//		scanf("%d", &a);
//		c += a;
//		d++;
//		if (b > a)
//			b = b;
//		else
//			b = a;
//	}
//	c = (float)(c / d);
//	printf("max=%d,f=%.2f", b,c);

//}

//main()
//{
//	int a=0, b=0, c=0;
//	char n=0;
//	while (n != 10)
//	{
//		scanf("%c", &n);
//		if (n >= '0' && n <= '9')
//			a++;
//		else if (n >= 'a' && n <= 'z' || n >= "A" && n <= 'Z')
//			b++;
//		else
//			c++;
//	}
//	printf("这篇文章有%d个数字，%d个字母，%d个字符\n", a, b, c-1);//因用回车作为结束的信号，所以减去回车
//
//}

//main()
//{
//	int a[30]={ 0 }, b = 0, n = 0;
//	printf("请输入数字并用空格隔开，输入完成继续输入<空格 0>:");
//	while (b < 30)
//	{
//		scanf("%d", &a[b]);
//		n += a[b];
//		if (a[b] == 0)
//			break;
//		b++;
//	}
//	n = n / (b+1);
//	do
//	{
//		if (a[30] >= a[b])
//		{
//			a[30]= a[30];
//			b--;
//			continue;
//		}
//		else
//		{
//			a[30] = a[b];
//			b--;
//			continue;
//
//		}
//	}
//	while (b > 0);
//	printf("\npall=%d,max=%d\n", n, a[30]);
//
//}

//main()
//{
//	int a = 0, b = 0, n = 0, no = 0;
//	printf("请输入你要累加的数据的数量：");
//	scanf("%d", &no);
//	do
//	{
//		printf("请输入第%d个的数据:", ++n);
//		scanf("%d", &b);
//		a += b;
//		
//	}while (n < no); printf("当前的累加结果为%d", a);
//}

//main()
//{
//	int a=0,b=0,n=0,no=0;
//	printf("请输入你要累加的数据的数量：");
//	scanf("%d", &no);
//	while (n < no)
//	{
		//printf("请输入第%d个的数据:", ++n);
		//scanf("%d", &b);
		//a += b;
//	}printf("当前的累加结果为%d", a);
//
//}

//main()
//{
//	int a = 0, b = 0, c = 0, full = 0, x = 0;
//	while (!(full == 100 && x == 100))
//	{
//		b++;
//		c = 100 - b / 2;
//		if (b % 2 == 0&&c>=0&&(c%3)==0)
//		{
//			a = 100 - b - c;
//				full = a + b + c;
//				x = 5 * a + 3 * b + c / 3;
//				if (full == 100 && x == 100)
//					printf("%d,%d,%d", a, b, c);
//				else
//					continue;
//		}
//		else
//			continue;
//	}
//}

//main()
//{
//	int a=0, b = 0, c = 0, full = 0, x = 0,n=0;
//	while (!(full == 100 && x == 100))
//	{
//		c++;
//		if ((c % 3) != 0)
//			continue;
//		else
//		{
//			a = (((100 - c / 3) - 3 * (100 - c)) / 2);
//			if (((100-c/3)-3*(100-c))%2== 0 && a > 0)
//			{
//				b = 100 - a - c;
//				full = a + b + c;
//				x = 5 * a + 3 * b + c/3;
//				n = a;
//				if (full == 100 && x == 100)
//					printf("公鸡=%d只,母鸡=%d只,小鸡=%d只", a, b, c);
//				else
//					continue;
//			}
//			else
//				continue;
//		}
//	}
//}

//main()
//{
//	int a, b, c, full, x;
//	c = 0; a = 0; b = 0;
//	full = 0;
//	x = 0;
//	while (c < 100)
//	{
//		c++;
//		if ((c % 3) != 0)
//			continue;
//		else
//		{
//			while (full < 100 && x < 100)
//			{
//				while (full < 100 && x < 100)
//				{
//					a++;
//					full = a + b + c;
//					x = 5 * a + 3 * b + c / 3;
//				}
//				a--;
//				while (full < 100 && x < 100)
//				{
//					b++;
//					full = a + b + c;
//					x = 5 * a + 3 * b + c / 3;
//					if (!(full < 100 && x < 100))
//						continue;
//					else
//						printf("公鸡=%d,母鸡=%d,小鸡=%d\n", a, b, c);
//				}
//			}
//			full = 0;
//			x = 0;
//			
//		}continue;
//	}
//}

//main()
//{
//	int* a;
//	printf("%z", sizeof *a);
//}

//main()
//{ 
//	int a;
//	while ((a = getchar()) != 10)
//	{
//		printf("%d", '\n');
//		scanf("%d", &a);
//		printf("%d", a);
//	}
//}

//main()
//{
//	int a, b;
//	scanf("%d,%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}

//main()
//{
//	int printf(format, args)
//		char* format;
//}

//main()
//{
//	int a;
//	char b;
//	a = sizeof(' ');
//	b = sizeof(' ');
//	printf("%d,%d", a, b);
//
//}

//main()
//{
//	int a;
//	a = getchar();
//}

//main()
//{
//	int i, n;
//	scanf("%d", &i);
//	if (i > 100)
//		n = 0;
//	else if (i > 60 && i <= 100)
//		n = 1;
//	else if (i > 40 && i <= 60)
//		n = 2;
//	else if (i > 20 && i <= 40)
//		n = 3;
//	else if (i > 10 && i <= 20)
//		n = 4;
//	else if (i >= 0 && i <= 10)
//		n = 5;
//	else
//		n = 6;
//	switch (n)
//	{
//	case 0:
//		printf("总奖金=%.3f", (i - 100) * 0.01 + 3.95);  printf("万元\n"); break;
//	case 1:
//		printf("总奖金=%.3f",(i-60)*0.015+3.35); printf("万元\n"); break;
//	case 2:
//		printf("总奖金=%.3f",(i-40)*0.03+2.75); printf("万元\n"); break;
//	case 3:
//		printf("总奖金=%.3f", (i-20)*0.05+1.75); printf("万元\n"); break;
//	case 4:
//		printf("总奖金=%.3f", (i-10)*0.075+1); printf("万元\n"); break;
//	default:
//		printf("总奖金=%.3f", i * 0.1); printf("万元\n");
//	}
//}


//main()
//{
//	float all = 0; unsigned long i;
//	printf("请输入你的利润(万元)：");
//	scanf("%ld", &i);
//	switch (i/10)
//	{
//	default:
//		all = all + (float)(i - 100) * 0.01;
//		i =100;
//	case 9:
//	case 8:
//	case 7:
//	case 6:
//		if ((i / 10) > 6 && (i / 10) <= 10)
//		{
//			all += (float)(i -60) * 0.015; i =60;
//		}
//	case 5:
//	case 4:
//		if ((i / 10) > 4 && (i / 10) <= 6)
//		{
//			all += (float)(i - 40) * 0.03; i =40;
//		}
//	case 3:
//	case 2:
//		if ((i / 10) > 2 && (i / 10) <= 4)
//		{
//			all += (float)(i - 20) * 0.05; i =20;
//		}
//	case 1:
//		if ((i / 10) > 1 && (i / 10) <= 2)
//		{
//			all += (float)(i - 10) * 0.075; i = 10;
//		}
//	case 0:
//		if ((i / 10) <= 1)
//		{
//			all += (float)(i * 0.1); break;
//		}
//
//	}printf("总奖金=%f\n", all);
//}

//main()
//{
//	int month;
//	scanf("%d", &month);
//	if (month <= 12)
//	{
//		switch (month)
//		{ 
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("天数30"); break;
//		case 2:
//			printf("天数28"); break;
//		default:
//			printf("天数31"); break;
//		}
//
//	}

//}

//main()
//{
//	int scores;
//	scanf("%d", &scores);
//	switch (scores / 10)
//	{
//	case 9:
//		printf("level A"); break;
//	case 8:
//		printf("level B\n"); break;
//	case 7:
//		printf("level C\n"); break;
//	case 6:
//		printf("level D\n"); break;
//	default:
//		printf("Not qualified\n"); break;
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int i, m, n, x, y, z;
//	printf("请输入一个五位数:");
//	scanf("%d", &i);
//	m = i / 10000; n = i % 10000 / 1000; x = i % 1000 / 100; y = i % 100 / 10; z = i % 10;
//	if (m != 0)
//	{
//		printf("这是5位数\n它的每位是%d\n%d\n%d\n%d\n%d\n它的逆序数是%d%d%d%d%d\n", m, n, x, y, z, z, y, x, n, m);
//	}
//	else
//	{
//		if (n != 0)
//		{
//
//			printf("这是4位数\n它的每位是%d\n%d\n%d\n%d\n它的逆序数是%d%d%d%d\n", n, x, y, z, z, y, x, n);
//		}
//		else
//		{
//			if (x != 0)
//			{
//				printf("这是3位数\n它的每位是%d\n%d\n%d\n它的逆序数是%d%d%d\n", x, y, z, z, y, x);
//			}
//			else
//			{
//				if (y != 0)
//				{
//					printf("这是2位数\n它的每位是%d\n%d\n它的逆序数是%d%d\n", y, z, z, y);
//				}
//				else
//				{
//					printf("这是1位数\n它的每位是%d\n它的逆序数是%d\n", z, z);
//				}
//			}
//		}
//	}
//}
//main()
//{
//	int number[6],i,n;
//	for (i = 0; i < 5;)
//	{
//		scanf("%d", &n);
//		number[i] = n;
//		printf("%d", number[i]);
//		i++;
//		//printf("%d", number[i]);
//	}
//}

//#define MAX_INT 2147483647
//#define MIN_INT 2147483648
//main()
//{
//	signed int a, b;
//	//a = -2147483647; b = 2147483646; printf("现在:a=%d,b=%d\n", a, b);
//	printf("请在英文输入法下输入两个数并用逗号隔开：\n");
//	scanf("%d,%d", &a, &b);//如果a，b的取值正常，那么a，b一定在int型的范围内
//	switch (a > 0)
//	{
//	case 1:
//		switch (b > 0)//在都大于0的情况下，容易从正方向溢出
//		{
//		case 1:
//		A:
//			a = a + b - MAX_INT;
//			b = a + MAX_INT - b;
//			a = a + MAX_INT - b;
//			printf("a=%d,b=%d\n", a, b); break;
//		case 0:
//			goto AT0;
//			break;
//		}break;
//	case 0:
//		switch (b <= 0)//都小于0的情况下，容易从负方向溢出
//		{
//		case 1:
//		B:
//			a = a + b + MIN_INT;
//			b = a - MIN_INT - b;
//			a = a - MIN_INT - b;
//			printf("a=%d,b=%d\n", a, b); break;
//		case 0:
//			goto BT0;
//			break;
//		}default: break;
//	AT0:
//		if (a > -b)//ATO与BTO是对a，b中较大的值进行分类，选择离边界近的一个，送入对应的计算。
//			goto A;
//		else
//			goto B;
//	BT0:
//		if (b > -a)
//			goto A;
//		else
//			goto B;
//
//	}
//}

//default: 
	//{
	//	a = a + b - MAX_INT;
	//	b = a + MAX_INT - b;
	//	a= a + MAX_INT - b;
	//	printf("a=%d,b=%d\n", a, b);
	//} break;
	//}
	//a = a + b - 2147483648;
	//b = a + 2147483648 - b;
	//a = a + 2147483648 - b;
	//printf("a=%d", a);
	//printf("b=%d", b);

//main()
//{
//	if (0)
//	{
//		printf("****");
//		printf("####");
//	}
//}

//main()
//{
//	int a = 3;
//	printf("%d,%d\n", a, (a -= a * a));
//}

//main()
//{
//	int k;
//	k = 65;
//	printf("%d,%0x,%c", k,k,k);
//}
//main()
//{
//	char x = 'a', y = 'b';
//	printf("%d\\%c\n", x, y);
//	printf("x=\'%3x\',\'%-3x\'\n");
//}

//main()
//{
//	int x;
//	scanf("%d\n", &x);
//	if (x < -1)
//		printf("%d\n", x);
//	else
//	{
//		if (x >= -1 && x <= 3)
//			printf("%d\n", 2 * x);
//		else
//			printf("%d\n", 3 * x);
//	}
//}

//main()
//{
//	char ch[6], i; int n, m;
//	printf("请输入一个5位以内的数：");
//	scanf("%s", &ch);
//
//	for (n = 0; n < 5;)
//	{
//		i = ch[n];
//
//		if (i != '\0')
//		{
//			n++;
//			printf("第%d位是%c\n", n, i);
//		}
//		else
//			break;
//
//	}
//	printf("这是%d位数\n", n);
//	printf("他的倒序数是");
//	for (; n > 0;)
//	{
//		n--;
//		i = ch[n];
//		if (i != '\n')
//		{
//			printf("%c", i);
//		}
//		else
//			break;
//
//
//	}
//	putchar('\n');
//}

//#define Password "939174"
//main()
//{
//	char  in_word[6];
//	while (scanf("%s", &in_word) != '\0')
//	{
//		
//		if (in_word==Password)
//		{		
//			printf("PASSWORD RIGHT!\nWELCOME!");
//			break;
//		}
//			printf("PASSWORD WRONG!\n");
//			continue;
//	}
//}

//void display(char cr, int lines, int width);
//main()
//{
//	int ch;
//	int rows, cols;
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		if (scanf("%d%d", &rows, &cols) != 2)
//			break;
//		display(ch, rows, cols);
//		while (getchar() != '\n')
//			continue;
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//}
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');
//	}
//}

//main()
//{
//	int ch;
//	while ((ch = getchar() )!= EOF)
//		putchar(ch);
//
//}

//main()
//{
//	char a[6];
//	scanf("%s", &a);
//	if (a[0] == a[4])
//	{
//		if (a[1] == a[3])
//		{
//			printf("是回文数字");
//		}
//		else
//		{
//			printf("不是回文数字");
//		}
//	
//	}
//	else
//		printf("不是回文数字");
//}

//main()
//{
//	char ch;
//	
//	while(scanf("%c", &ch))
//	{ 
//		if (isdigit(ch) != 0)
//		{
//			printf("输入的是数字\n");
//			continue;
//		}
//		else if (islower(ch) != 0)//使用tolower()和toupper()时该程序无法正常运行
//		{
//			printf("输入的是小写字母\n");
//			continue;
//		}
//		else if (isupper(ch) != 0)//当输入1时，因为它们返回原值的特性会导致异常输出
//		{
//			printf("输入的是大写字母\n");
//			continue;
//		}
//		else if (ispunct(ch) != 0)
//		{
//			printf("输入的是其他符号\n");
//			continue;
//		}
//		else if (isblank(ch) != 0)
//		{
//			printf("输入的是空白字符\n");
//			continue;
//		}
//		else 
//		{
//			printf("输入的是标准空白字符\n");
//			continue;
//		}
//	}
//
//}

//main()
//{
//	char ch[6],i;
//	int n;
//	i = '1';
//	scanf("%s", &ch);
//	for (n = 0; n < 5&&i!='\0'&&i!='\n';)
//	{
//		i = ch[n];
//		if (i == '\0')
//			goto end;
//		n++;
//		printf("这是输入的第%d个数%c\n", n, i);	
//	}
//	end:
//	printf("这是%d位数", n);
//
//}

//main()
//{
//	char ch[6];
//	scanf("%s", &ch);
//	int i = 0,n=0;
//	while (i <= 5)
//	{
//		if (ch[n]!= '\0')
//		{
//			i++;
//			printf("\n输入的第%d个数是%c\n",i, ch[n]);
//			n++;
//		}
//		else
//		{
//			printf("\n这是%d位数\n\n倒序数", i);
//			while (i >= 0)
//			{
//				printf("%c", ch[n]);
//				n--;
//				i--;
//			}
//			putchar('\n');
//			break;
//		}
//	}
// }

//main()
//{
//	char a, b, c, d, e,size;
//	size=scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
//	if (a == '\n')
//		size -= 5;
//	else
//	{
//		if (b == '\n')
//			size -= 4;
//		else
//		{
//			if (c == '\n')
//				size -= 3;
//			else
//			{
//				if (d =='\n')
//					size-=2;
//
//				else
//				{
//					if (e == '\n')
//						size--;
//					else
//					{
//						;
//					}
//				}
//			}
//		}
//	}
//	printf("它是 %d 位数\n", size);
//	printf("%c\n%c\n%c\n%c\n%c\n", a, b, c, d, e);
//	printf("%c%c%c%c%c\n", e, d, c, b, a);
//}

//main()
//{
//	_Bool input;
//	char number;
//	int a;
//	input = 1;
//	a = 0;
//	while (input)
//	{
//		input=(scanf("%c", &number)==1);
//		while (input)
//		{
//			a++;
//	}
//	printf("您的输入是%d位数", a);
//}

//main()
//{
//	int a;
//	a = 1;
//	while (a)
//		printf("%d is ture\n",a--);
//	printf("%d is flase\n",a);
//}

//main()
//{
//	char word;
//	scanf("%c", &word);
//	if(word>='0'&&word<='9')
//		printf("输入的是数字");
//	else
//	{
//		if (word >= 'a' & word <= 'z')
//			printf("输入的是小写字母");
//		else
//		{
//			if (word >= 'A' && word <= 'Z')
//				printf("输入的是大写字母");
//			else
//				printf("输入的是其他类字符");
//		}
//	}
//}

//main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a >= b)
//	{
//		if (b >= c)
//			printf("%d>%d>%d", a, b, c);
//		else
//			printf("%d>%d>%d", a, c, b);
//	}
//	else
//	{
//		if (a >= c)
//			printf("%d>%d>%d", b, a, c);
//		else
//			printf("%d>%d>%d", b, c, a);
//	}
//}

//main()
//{
//	float x;
//	scanf("%f", &x);
//	if (x >= 3)
//	{
//		x = 8 - 3 * x;
//	}
//	else
//	{
//		if (x > -1 && x< 3)
//		{
//			x = 2*x;
//		}
//		else
//		{
//			if (x <= -1)
//			{
//				x = 5 * x - 3;
//			}
//			else
//			{
//				;
//			}
//		}
//	}
//	printf("%.2f", x);
//}

//main()
//{
//	int a, b, c, x;
//	a = 1; b = 2; c = 3;
//	x = a > b ? a > c ? a : c : b > c ? b : c;
//	printf("%d\n", x);
//}

//main()
//{
//	char ch[20];
//	scanf("%s", ch);
//	printf("%s", ch);
//
//}

//main()
//{
//	float a, b, c;
//	float x;
//	scanf("%f%f%f", &a, &b, &c);
//	x = (a * b * c)/365;
//	printf("%f\n%g\n%.2e\n", x,x,x);
//
//}

//main()
//{
//	const int BASIC_INCOME = 200;
//	const double EXTEA_INCOME=0.08;
//	double work;
//	scanf("%lf", &work);
//	printf("%f", BASIC_INCOME + work * EXTEA_INCOME);
//}

//main()
//{
//	float a;
//	double b;
//	scanf("%f%lf",&a,&b);
//	printf("a=%f\nb=%lf\n",a,b);
//}

//main()
//{
//	double interest, principal, rete, days;
//	printf("please enter your principal:");
//	scanf("%lf", &principal);
//	printf("please enter your ret(like:0.08):");
//	scanf("%lf", &rete);
//	printf("please enter your days:");
//	scanf("%lf", &days);
//	printf("\nyour interest=%f", interest=principal*rete*days/365);
//}

//#define BASIC_INCOME 200
//#define EXTEA_INCOME 0.08
//main()
//{
//	double work;
//	scanf("%lf", &work);
//	printf("%f", BASIC_INCOME + work * EXTEA_INCOME);
//	/*double income, work;
//	printf("please enter your sales for the week:");
//	scanf_s("%lf", &work);
//	income = BASIC_INCOME + work * EXTEA_INCOME;
//	printf("总收入=%lf\n", income);*/
//}

//main()
//{
//	char ch1, ch2;
//	ch1 = getchar();
//	getchar();
//	ch2 = getchar();
//	putchar('c'); putchar('h'); putchar(69); putchar(':'); 
//	putchar(ch1); putchar('\t');
//	putchar('c'); putchar('h'); putchar('2'); putchar(':'); 
//	putchar(ch2);
// }

//main()
//{
//	const int NUMBER = 22;
//	int count;
//	for (count = 1; count <= NUMBER; count++)
//		printf("be my valentine\n");
//	
//}

//main()
//{
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//	printf("please enter an integer to be summed");
//	printf("(q to quit):");
//	input_is_good = (scanf("%ld", &num) == 1);
//	while (input_is_good)
//	{
//		sum = sum + num;
//		printf("please enter next integer (q to quit):");
//		input_is_good = (scanf("%ld", &num) == 1);
//
//	}
//	printf("those untegers sum to %ld \n", sum);
//}

//#define TIME 600
//main()
//{
//	int a = 4, number=1;
//	while (a< TIME)
//	{
//		printf("a%d=%d\n", number, a);
//		number++;
//		a++;
//	}
//	printf("DONE!!!\n");
//}

//#define SEC_PER_MIN 60
//main()
//{
//	int sec, min, left;
//	printf("Convert second to minuutes and seconds!\n");
//	printf("Enter the number of seconds (<=o to quit):\n");
//	scanf("%d", &sec);
//	while (sec > 0)
//	{
//		min = sec/SEC_PER_MIN;
//		left = sec % SEC_PER_MIN;
//		printf("%d seconds is %d minutes,%d seconds.\n", sec, min, left);
//		printf("Enter next value (<=0 to quit):");
//		scanf("%d", &sec);
//
//	}
//	printf("DONE!!!");
//}

//main()
//{
//	int a, c;
//	a = 2;
//	while (a < 101)
//	{
//		c = a * a;
//		printf("c=%d\n", c);
//		a = c;
//	}
//	printf("all of this");
//}

//#define ADJUST 7.31
//
//main()
//{
//	const float scale = 0.333;
//	float shoe, foot;
//	shoe = 3.0;//使用计算前必须要先对shoe进行初始化
//	printf("shoe size (men's) foot length\n");
//	while (shoe < 19)
//	{
//		foot = shoe * scale + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}
//	printf("If the shoe fits,wear it.\n");
//}
//int main(void)
//{
//	const double scale = 0.333;
//	double shoe, foot;
//	shoe = 9.0;
//	foot = scale * shoe + ADJUST;
//	printf("shoe size (men's) foot length\n");
//	printf("%10.1f %15.2f inches\n",shoe,foot);
//}

//main()
//{
//	float a;
//	double b;
//	scanf("%f", &a);
//	scanf("%lf", &b);
//	printf("%f,%f", a, b);
//}

//main()
//{
//	int a, b;
//	a = 3; b = 4;
//	a = (double)(a + b);
//	//printf("%f\n", a);
//	b = (int)(a - b);
//	a = a - b;
//	printf("a=%d\tb=%d", a, b);
//}

//main()
//{
//	int z ;
//	z = 4; printf("%d\t%d\t%d", z++, ++z, --z);
//}

//main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	printf("%d\t%d", a, b);
//}

//void Year(void);
//main()
//{
//	Year();
//}
//void Year(void)
//{
//	int x;
//	printf("请输入您要查询的年份（仅支持1582年后）：")
//	scanf("%d", &x);
//	if ((x % 4) == 0)
//	{
//		if ((x % 100) == 0)
//		{
//			printf("这不是闰年");
//		}
//		else
//		{
//			printf("这是闰年");
//		}
//	}
//	else
//	{
//		printf("这不是闰年");
//	}
//	return x;
//}
//{
//	scanf("%d", &x);
//	if (x % 4 == 0)
//	{
//		if (x % 100 == 0)
//		{
//			printf("这不是闰年");
//		}
//		else
//		{
//			printf("这是闰年");
//		}
//	}
//	else
//	{
//		printf("这不是闰年");
//	}
//	return x;
//}

//main()
//{
//	char word;
//	printf("请输入一个字母，程序将会为您判断字母大小写:");
//	scanf("%c", &word);
//	int a;
//	a = (int)word;
//	a >= 97 ? printf("这是个小写字母 % c，它的大写字母是 % c", word, word - 32) : printf("这是个大写字母%c，它的小写字母是%c\n", word, word + 32);
//} 

//main()
//{
//	int a, b;
//	a = 3; b = 4;
//	printf("这是交换前的值：a=%d\tb=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("这是交换后的值：a=%d\tb=%d\n", a, b);
//}

//main()
//{
//	int year;
//	printf("请输入您要查询的年份（仅支持1582后）：");
//	scanf("%d", &year);
//	(year % 4) == 0 ? ((year % 100) == 0 ? printf("不是闰年") : printf("是闰年")) : printf("不是闰年");
//}


//main()
//{
//	int a;
//	printf("%d\n", a = (a = 3 * 5, a * 4), a = a + 5);
//	printf("%d\n", (a = (a = 3 * 5, a * 4), a = a + 5));
//	printf("%d\n", a = (a = 3 * 5, a * 4), a + 5);
//	printf("%d\n", a = ((a = 3 * 5, a * 4), a + 5));
//	return 0;
//}

//main()
//{
//	int year;
//	scanf("%d", &year);
//
//}

//main()
//{
//	float a;
//	scanf("%f", &a);
//	printf("float型：%f\n", a);
//	printf("double型：%lf", (double)a);
//}

//main()
//{
//	double a;
//	scanf("%lf", &a);//double不用%lf会导致输出出错
//	printf("%lf\n", a);
//	printf("%f", (float)a);
//}

//main()
//{
//	float a;
//	scanf("%f", &a);
//	printf("%f", a);
//	//a = (double)a;//强制转换时前方的类型要与强制转换后的类型相符
//	//printf("%4.3f", a);
//	double b;
//	b = (double)a;
//	printf("\n%f", b);
//
//}

//main()
//{
//	int a,b,c;
//	printf("%d",scanf("%4d%c%3d", &a,&b,&c));
//	double size;
//	size = sizeof a + b + c;
//	printf("%e", size);
//
//}

//main()
//{
//	int x;
//	x = -4 + 5 * 6 - 7; printf("%d\n", x);
//	x = 3 + 4 % 5 - 6 ; printf("%d\n", x);
//	x = -3 * 4 % -6 / 5; printf("%d\n", x);
//	x = (10 + 8) % 5 / 2; printf("%d\n", x);
//
//}

//main()
//{
//	int a = 10, b = 9;
//	printf("%d\t%d\t%d\t%d\n", ++a, a, --b, b);
//}

//main()
//{
//	int x = 4, y = 25, z = 2;
//	z = (--y / ++x) * z--;
//	printf("%d\n", z);
//}

//main()
//{
//	int a = -1, b = 4, k;
//	k = (a++ <= 0) && (!(b-- <= 0));
//	printf("%d\t%d\t%d", k, a, b);
//}

//void main()
//{
//	int x = 0;
//	printf("%d\t%d", x, x++);//系统的对函数调用的参数求值顺序是从右往左，对于具有交换律的运算符的操作从左往右
//}

//void main()
//{
//	/*int x = 80;
//	x = x >> 1;*/
//	int x = -80;
//	//x = x<< 1;
//	x = x>> 1;
//	printf("%d", x);
//}

//main()
//{
//	int x = 2, y = 1,z;
//	//z=(!x || y--);
//	z = x || y--;
//	z = (!x||y--);
//	printf("%d",z);
//}

//main()
//{
//	int y = 3;
//	++y;
//	printf("y=%d\t%d\n", y,0);
//	int a, b;
//	printf("%d\n", (a = 3) && (b = -3));
//	int c=5,m1, n1;
//	(m1 = c) || (n1 = c);
//	printf("\nm1=%d\tn1=%d\n", m1,n1);
	//int m2, n2, m2_n2;
	//m2_n2=(m2 = c) && (n2 = c);
	//printf("m2=%d\tn2=%d\n", m2,n2);
//}

//main()
//{
//	int a;
//	a = sizeof('A');
//	printf("sizeof(A)=%d", a);
//}

//main()
//{
//	int a, b, c, max;
//	printf("请输入三个数并用空格隔开：");
//	scanf("%d%d%d", &a, &b, &c);
//	max = a > b ? a : b;
//	max = max > c ? max :c;
//	printf("max=%d", max);
//}

//void main()
//{
//	float x;
//	int i;
//	x = 3.9;
//	i = (int)x;
//	printf("x=%.3f,i=%d\n", x, i);
//	return 0;
//}


//int show(int n,int a)
//{
//	printf("(%d,%d)", n, a);
//	return a;
//}
//void main()
//{
//	int a;
//	a = show(1, 1) || show(2, 2) && show(3, 3); printf("a=%d\n", a);
//	return 0;
//}
//main()
//{
//	int a, b, c, d;
//	printf("请输入三个数字中间用空格隔开：");
//	scanf_s("%d%d%d", &a, &b, &c);
//	d = a > b ? (a > c ? a : c) : (b > c ? b : c);
//	printf("最大的数字是%d\n", d);
//}

//# include <stdio.h>
//# include <stdlib.h>
//# include <malloc.h>
//int main(void)
//{
//	int len;
//	int i;
//	printf("请输入您要排序的整数个数: ");
//	scanf("%d", &len);
//	int* a;
//	a = (int*)malloc(sizeof(int) * len);
//	printf("请输入%d个数字(中间用空格分隔）: ", len);
//	for (i = 0; i < len; ++i)
//	{
//		scanf(" %d", &a[i]);
//	}
//	int t;/*声明循环控制变量*/
//	int j;
//	//冒泡排序//
//	for (i = 0; i < len - 1; ++i)
//	{
//		for (j = 0; j < len - 1 - i; ++j)
//		{
//			if (a[j] > a[j + 1])// >为 升序，<为降序
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//	//输出数组//
//	printf("\n以下为升序排列:\n");
//	for (i = 0; i < len; ++i)
//	{
//		printf("第%d个数字为：%d\n", (i + 1), a[i]);
//	}
//	free(a);//释放内存
//	system("pause");
//	return 0;
//}

//main()
//{
//	int a, b, c, f;
//	int max(int x, int y, int z);
//	scanf_s("%d%d%d",&a,&b,&c);
//	f = max(a, b, c);
//	printf("\n%d", f);
//
//}
//int max(int x,int y,int z)
//{
//	int m;
//	if (x > y)
//	{
//		m = x;
//	}
//	else
//	{
//		m = y;
//	}
//	if (m > z)
//	{
//		m = m;
//	}
//	else
//	{
//		m = z;
//	}
//	return m;
//}

//main()
//{
//	char ch[3];
//	scanf("%s",&ch);
//	printf("%s", "\*\t\*\*");
//}

//main()
//{
//	int a, b;
//	a = 3; b = 4;
//	a = b= 7 + 8;
//	printf("a=%d\tb=%d\n", a, b);
//	getchar();
//}
void third_one()
{
	int a;
	char b=3;
	a = 999;
	printf("%d\n", a);
	b = a;
	printf("%c", b);
}//实验结果证明会导致溢出

// 仅仅是展示 菜单的代码  一些功能性函数就清空了
//#include <stdio.h>
//#include <graphics.h>
////  因为防止报错
//void addOut() {};
//void changeOut() {};
//void delOut() {};
//
//
//void addIn() {};
//void changeIn() {};
//void delIn() {};
//void showIn() {};
//
//void showRest() {};
//void cleanOut() {};
//void cleanIn() {};
////  下面是主菜单的第三个查询功能后的子菜单代码
//void showOut() {
//abcd:;  //这里使用了 goto ： 是为了每次执行了功能后返回到第一步重新打印子菜单 也可以用更好的逻辑实现循环 而不用goto函数
//	MOUSEMSG m;//定义鼠标变量 m
//	//菜单
//	initgraph(800, 600); //定义画布大小也就是黑框大小
//	setbkcolor(WHITE);//设置背景颜色
//	cleardevice();//刷新一次 略等于那个system(cls)
//	setfillcolor(LIGHTBLUE); //设置后面用函数画出方框的背景颜色 这里设置成了浅蓝色
//	//     (左上角)x1 y1 (右下角)x2 y2
//	fillrectangle(200, 140, 600, 160);
//	fillrectangle(200, 200, 600, 220);
//	fillrectangle(200, 260, 600, 280);
//	fillrectangle(200, 320, 600, 340);
//	fillrectangle(200, 380, 600, 400);
//	fillrectangle(200, 440, 600, 460);
//	settextstyle(15, 0, "楷体");//设置文字大小 格式 
//	setbkmode(TRANSPARENT);// 去掉文字背景
//	//下面是输出字体 参数：（起始位置x 起始位置y “带输出的字符串”）
//	outtextxy(250, 142, "查询某一年的总支出");
//	outtextxy(250, 202, "查询某年某月的总支出");
//	outtextxy(250, 262, "查询某年某月某日的支出");
//	outtextxy(250, 322, "根据关键字查询支出情况");
//	outtextxy(250, 382, "列出所有支出情况");
//	outtextxy(250, 442, "返回主菜单");
//	//进入触发条件的循环
//	while (1) {
//		//
//
//		//
//		m = GetMouseMsg();
//		if (m.x >= 200 && m.x <= 600 && m.y >= 140 && m.y <= 160) {//检测鼠标的位置 是否满足条件
//			setlinecolor(RED);//满足后 设置新的边框为红色
//			rectangle(190, 135, 610, 165);//画新的边框
//			//如果点击了 年份
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				//yearOut();//响应功能
//				goto abcd;//功能实现后 跳转到 最开头
//			}
//		}
//		else if (m.x >= 200 && m.x <= 600 && m.y >= 200 && m.y <= 220) {
//			setlinecolor(RED);
//			rectangle(190, 195, 610, 225);
//			//如果点击了月
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				//	monthOut();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 200 && m.x <= 600 && m.y >= 260 && m.y <= 280) {
//			setlinecolor(RED);
//			rectangle(190, 255, 610, 285);
//			//点击了日
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				//	dayOut();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 200 && m.x <= 600 && m.y >= 320 && m.y <= 340) {
//			setlinecolor(RED);
//			rectangle(190, 315, 610, 345);
//			//点击了关键字
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				//	memOut();
//				goto abcd;
//			}
//		}
//		//
//		else if (m.x >= 200 && m.x <= 600 && m.y >= 380 && m.y <= 400) {//
//			setlinecolor(RED);
//			rectangle(190, 375, 610, 405);
//			//点击了列出所有
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				//	show();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 200 && m.x <= 600 && m.y >= 440 && m.y <= 460) {//
//			setlinecolor(RED);
//			rectangle(190, 435, 610, 465);
//			//点击了返回
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				goto abcde;
//			}
//		}
//		//一旦鼠标不在相应位置 将画出白色边框 覆盖之前的红色边框
//		else {
//			setlinecolor(WHITE);
//			rectangle(190, 135, 610, 165);
//			rectangle(190, 195, 610, 225);
//			rectangle(190, 255, 610, 285);
//			rectangle(190, 315, 610, 345);
//			rectangle(190, 375, 610, 405);
//			rectangle(190, 435, 610, 465);
//		}
//	}
//abcde:;//点击退出按钮 就跳转到这里退出子菜单 返回主菜单
//}
//
////下面是主菜单的实现 实现的细节和子菜单的类似 
//void drawMenu() {
//abcd:;
//	MOUSEMSG m;
//	//菜单
//	initgraph(800, 600);
//	setbkcolor(WHITE);
//	cleardevice();//刷新一次 略等于那个system(cls)
//	setfillcolor(LIGHTBLUE);
//	//           左边1 高1 左边2 高2
//	fillrectangle(300, 10, 500, 30);
//	fillrectangle(300, 50, 500, 70);
//	fillrectangle(300, 90, 500, 110);
//	fillrectangle(300, 130, 500, 150);
//
//	fillrectangle(300, 200, 500, 220);
//	fillrectangle(300, 240, 500, 260);
//	fillrectangle(300, 280, 500, 300);
//	fillrectangle(300, 320, 500, 340);
//
//	fillrectangle(300, 390, 500, 410);
//	fillrectangle(300, 430, 500, 450);
//	fillrectangle(300, 470, 500, 490);
//
//	settextstyle(15, 0, "楷体");//设置文字格式
//	setbkmode(TRANSPARENT);// 去掉文字背景
//
//	outtextxy(370, 15, "添加支出");
//	outtextxy(370, 55, "删除支出");
//	outtextxy(370, 95, "查询支出");
//	outtextxy(370, 135, "修改支出");
//
//
//	outtextxy(370, 205, "添加收入");
//	outtextxy(370, 245, "删除收入");
//	outtextxy(370, 280, "查询收入");
//	outtextxy(370, 320, "修改收入");
//
//	outtextxy(380, 395, "结算");
//	outtextxy(355, 433, "清空支出信息");
//	outtextxy(355, 472, "清空收入信息");
//
//	settextcolor(BLACK);
//	settextstyle(45, 0, "楷体");
//	outtextxy(120, 530, "家庭财务管理系统V1.0(三组)");
//
//	while (1) {
//		//
//
//		//
//		m = GetMouseMsg();
//		if (m.x >= 300 && m.x <= 500 && m.y >= 10 && m.y <= 30) {
//			setlinecolor(RED);
//			rectangle(295, 5, 505, 35);
//			//如果点击了添加
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				addOut();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 50 && m.y <= 70) {
//			setlinecolor(RED);
//			rectangle(295, 45, 505, 75);
//			//如果点击了删除
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				delOut();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 90 && m.y <= 110) {
//			setlinecolor(RED);
//			rectangle(295, 85, 505, 115);
//			//点击了查询
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				showOut();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 130 && m.y <= 150) {
//			setlinecolor(RED);
//			rectangle(295, 125, 505, 155);
//			//点击了修改
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				changeOut();
//				goto abcd;
//			}
//		}
//		//
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 200 && m.y <= 220) {//
//			setlinecolor(RED);
//			rectangle(295, 195, 505, 225);
//			//点击了添加In
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				addIn();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 240 && m.y <= 260) {//
//			setlinecolor(RED);
//			rectangle(295, 235, 505, 265);
//			//点击了删除In
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				delIn();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 280 && m.y <= 300) {
//			setlinecolor(RED);
//			rectangle(295, 275, 505, 305);
//			//点击了查询In
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				showIn();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 320 && m.y <= 340) {
//			setlinecolor(RED);
//			rectangle(295, 315, 505, 345);
//			//点击了修改In
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				changeIn();
//				goto abcd;
//			}
//
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 390 && m.y <= 410) {
//			setlinecolor(RED);
//			rectangle(295, 385, 505, 415);
//			//点击了结算
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				showRest();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 430 && m.y <= 450) {
//			setlinecolor(RED);
//			rectangle(295, 425, 505, 455);
//			//点击了清空Out
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				cleanOut();
//				goto abcd;
//			}
//		}
//		else if (m.x >= 300 && m.x <= 500 && m.y >= 470 && m.y <= 490) {
//			setlinecolor(RED);
//			rectangle(295, 465, 505, 495);
//			//点击了清空In
//			if (m.uMsg == WM_LBUTTONDOWN) {
//				cleanIn();
//				goto abcd;
//			}
//		}
//
//
//		else {
//			setlinecolor(WHITE);
//			rectangle(295, 5, 505, 35);
//			rectangle(295, 45, 505, 75);
//			rectangle(295, 85, 505, 115);
//			rectangle(295, 125, 505, 155);
//
//			rectangle(295, 235, 505, 265);
//			rectangle(295, 275, 505, 305);
//			rectangle(295, 315, 505, 345);
//			rectangle(295, 195, 505, 225);
//
//			rectangle(295, 385, 505, 415);
//			rectangle(295, 425, 505, 455);
//			rectangle(295, 465, 505, 495);
//		}
//	}
//	getchar();
//	closegraph();
//}
////这里是主函数！ 仅仅调用了主菜单的函数。
//int main() {
//	drawMenu();
//}

//#include "pch.h"
//#include <iostream>
//#include<stdlib.h>
//#include <graphics.h>
//#include<math.h>
//#include <windows.h>  
//
//DWORD WINAPI drawCircle(LPVOID lpParam) {
//
//	double pi = 3.1415926;
//
//	for (int i = 0; i < 800; i++) {
//		int x = 200 + 100 * cos(i * pi / 400);
//		int y = 200 + 100 * sin(i * pi / 400);
//		putpixel(x, y, RED);
//		Sleep(10);
//	}
//	return 0;
//}
//
//DWORD WINAPI drawRectangle(LPVOID lpParam) {
//	int x, y;
//	for (int i = 0; i < 800; i++) {
//		if (i < 200) {
//			x = 500 + i;
//			y = 100;
//		}
//		else if (i < 400) {
//			x = 700;
//			y = 100 + (i - 200);
//		}
//		else if (i < 600) {
//			x = 700 - (i - 400);
//			y = 300;
//		}
//		else {
//			x = 500;
//			y = 300 - (i - 600);
//		}
//		putpixel(x, y, RED);
//		Sleep(10);
//	}
//	return 0;
//}

//int main() {
//	initgraph(800, 400);
//	setbkcolor(YELLOW);
//	HANDLE hThread[2];
//	hThread[0] = CreateThread(NULL, 0, drawCircle, NULL, 0, NULL);
//	hThread[1] = CreateThread(NULL, 0, drawRectangle, NULL, 0, NULL);
//	WaitForMultipleObjects(2, hThread, TRUE, INFINITE); 	//等待子线程运行 
//	system("pause");
//	closegraph();          // 关闭绘图窗口
//	return 0;
//}
//blog.csdn.net/qq_42606750/article/details/89296952
//#include <graphics.h>	//C++图形库
//
//int main()
//{
//	initgraph(500, 500);			//绘制一个500*500的窗口
//
//	system("pause");
//	return 0;
//}
//#pragma once
//#ifdef DLL_IMPLEMENT 
//#define DLL_API __declspec(dllexport) 
//#else 
//#define DLL_API __declspec(dllimport) 
//#endif 
//#include<Windows.h>      // 引用图形库头文件
//#include <conio.h>
//#include <stdio.h>
//#include <windows.h>				//用到了定时函数sleep()
//#include <math.h>
//
//int main()
//{
//	int i;
//	short win_width, win_height;//定义窗口的宽度和高度
//	win_width = 480; win_height = 360;
//	initgraph(win_width, win_height);//初始化窗口（黑屏）
//	for (i = 0; i < 256; i += 5)
//	{
//		setbkcolor(RGB(i, i, i));//设置背景色，原来默认黑色
//		cleardevice();//清屏（取决于背景色）
//		Sleep(15);//延时15ms
//	}
//	closegraph();//关闭绘图界面
//}


//#include"stdio.h"
//#include "math.h"
//int main()
//{
//    for (float y = 1.3; y >= -1.1; y -= 0.1) //遍历y的值，从上到下，步长为0.05
//    {
//        for (float x = -1.2; x <= 1.2; x += 0.05)//遍历x的值，从左到右，步长为0.05
//        {
//            if (pow((x * x + y * y - 1), 3) - x * x * y * y * y <= 0.0)//利用方程进行填充
//            {
//                printf("❤️");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    for (size_t i = 0; i < 5; i++) //控制打印行数(一行为一个循环)
//    {
//        for (size_t k = 5; k > i; k--)
//        {
//            printf("  ");
//        }
//
//        size_t j = 0;
//        while (j <= i) //控制打印列数
//        {
//            printf("?");
//            j++;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//    for (size_t i = 0; i < 4; i++) //控制打印行数(一行为一个循环)
//    {
//        for (size_t k = 0; k <= i + 1; k++)
//        {
//            printf("  ");
//        }
//        size_t j = 4;
//        while (j > i) //控制打印列数
//        {
//            printf("?");
//            j--;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//}
//int main()
//{
//    for (size_t i = 0; i < 10; i++) //控制打印行数(一行为一个循环)
//    {
//        for (size_t j = 1; j <= i; j++) //控制打印列数
//        {
//            printf(" ");//两个空格时是直角三角形，一个空格是等腰三角形
//        }
//        for (size_t k = 10; k > i; k--) //控制打印列数
//        {
//            printf("?");
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//}
//int main()
//{
//    for (size_t i = 0; i < 5; i++) //控制打印行数(一行为一个循环)
//    {
//        size_t j = 0;
//        while (j <= i) //控制打印列数
//        {
//            printf("?");
//            j++;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//    for (size_t i = 0; i < 4; i++) //控制打印行数(一行为一个循环)
//    {
//        size_t j = 4;
//        while (j > i) //控制打印列数
//        {
//            printf("?");
//            j--;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//}
//int main()
//{
//    for (size_t i = 0; i < 10; i++) //控制打印行数(一行为一个循环)
//    {
//        for (size_t j = 10; j > i; j--) //控制打印列数
//        {
//            printf(" ");//两个空格时是直角三角形，一个空格是等腰三角形
//        }
//        for (size_t k = 0; k <= i; k++) //控制打印列数
//        {
//            printf("?");
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//}
//int main()
//{
//    for (size_t i = 0; i < 11; i++)//控制打印行数(一行为一个循环)
//    {
//        size_t j = 10;
//        while (j > i) //控制打印列数
//        {
//            printf(" ");//两个空格时是直角三角形，一个空格是等腰三角形
//            j--;
//        }
//        size_t k = 0;
//        while (k <= i) //控制打印列数
//        {
//            printf("?");
//            k++;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//
//}
//int main()
//{
//    for (size_t i = 0; i < 10; i++) //控制打印行数(一行为一个循环)
//    {
//        for (size_t j = 10; j > i; j--) //控制打印列数
//        {
//            printf("  ");//两个空格时是直角三角形，一个空格是等腰三角形
//        }
//        for (size_t k = 0; k <= i; k++) //控制打印列数
//        {
//            printf("?");
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//}
//int main()
//{
//    for (size_t i = 0; i < 11; i++)//控制打印行数(一行为一个循环)
//    {
//        size_t j = 10;
//        while (j > i) //控制打印列数
//        {
//            printf("  ");//两个空格时是直角三角形，一个空格是等腰三角形
//            j--;
//        }
//        size_t k = 0;
//        while (k <= i) //控制打印列数
//        {
//            printf("?");
//            k++;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//
//}
//int main()
//{
//    for (size_t i = 0; i < 10; i++) //控制打印行数(一行为一个循环)
//    {
//        for (size_t j = 1; j <= i; j++) //控制打印列数
//        {
//            printf("  ");//两个空格时是直角三角形，一个空格是等腰三角形
//        }
//        for (size_t k = 10; k > i; k--) //控制打印列数
//        {
//            printf("?");
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//}
//int main()
//{
//    for (size_t i = 0; i < 11; i++)//控制打印行数(一行为一个循环)
//    {
//        size_t j = 1;
//        while (j <= i) //控制打印列数
//        {
//            printf("  ");//两个空格时是直角三角形，一个空格是等腰三角形
//            j++;
//        }
//        size_t k = 10;
//        while (k > i) //控制打印列数
//        {
//            printf("?");
//            k--;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//
//}
//int main()
//{
//	for (size_t i = 0; i < 10; i++) //控制打印行数(一行为一个循环)
//	{
//		for (size_t j = 10; j > i; j--) //控制打印列数
//		{
//			printf("?");
//		}
//		printf("\n"); //每一次列循环后另起行
//	}
//}
//int main()
//{
//    for (size_t i = 0; i < 10; i++)//控制打印行数(一行为一个循环)
//    {
//        size_t j = 10;
//        while (j > i) //控制打印列数
//        {
//            printf("?");
//            j--;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//
//}
//int main()
//{
//	for (size_t i = 0; i < 5; i++) //控制打印行数(一行为一个循环)
//	{
//		for (size_t j = 0; j <= i; j++) //控制打印列数
//		{
//			printf("*");
//		}
//		printf("\n"); //每一次列循环后另起行
//	}
//}
//int main()
//{
//    for (size_t i = 0; i < 11; i++)//控制打印行数(一行为一个循环)
//    {
//        size_t j = 0;
//        while (j <= i) //控制打印列数
//        {
//            printf("?");
//            j++;
//        }
//        printf("\n"); //每一次列循环后另起行
//    }
//
//}
//main()
//{
//	char ch[20];
//	//SetConsoleOutputCP(437);
//	scanf("%s",&ch);
//	scanf("%s", &ch);
//	scanf("%s", &ch);
//	scanf("%s", &ch);
//	scanf("%s", &ch);
//	return 0;
//}
//main()
//{
//	unsigned char ch;
//	ch = 42;
//	SetConsoleOutputCP(437);
//	printf("%s\n", ch);
//	printf("%s%s%s", ch, ch, ch);
//	printf("%s%s%s%s%s\n", ch, ch, ch, ch, ch);
//	printf("%s%s%s%s%s%s%s\n", ch, ch, ch, ch, ch, ch, ch);
//	return 0;
//}//错误程序，可以编译可以运行但得不到结果
void third_one()
{
	//unsigned int y;
	unsigned char ch;
	signed char eh;
	char ah,bh;//验证无标记时的数据类型自动被定义为unsigned还是signed，若为unsigned那么ah与bh均不会发生溢出，反之溢出
	ah = 128;//127是char一定成立的极限，所以128就属于极限外的部分，
	bh = 129;//连续实验找出分界点，证明不是溢出
	eh = '\362' ;//这里我迫使的eh数据溢出
	ch = '\362';
	//y = 0x1afe1f3;
	printf("%d\t%c\n", ah, ah);//若不溢出，显示128，若溢出显示-128
	printf("%d\t%c\n", bh, bh);//若不溢出，显示129，若溢出显示-127
	printf("%d\t%c\n", eh,eh);//同时输出eh的值和表示的符号，按照推断应该输出-14和溢出的对应显示
	//溢出显示的字符是计算机在其标准中找不到对象时的乱码之一
	printf("%d\t", ch);//输出ch表示的值，如果未发生溢出应该是242
	printf("%c\n", ch);//输出ch表示的符号，如果正常将按书本上出现大于等于号
	/*ch = 'A';
	printf("%x,%x,%c\n", y, ch, ch);*/
	return 0;
}
//main()
//{
//	printf("\362\n");
//}
//#include "stdio.h"
//main()
//{
//	int x, y, z, s;
//	x = 3; y = 4; z = 5;
//	s = x + y + z;
//	printf("\ns=%d", s);
//	return 0;
//}

//#define PRICE 30
//main()
//{
//	int num, total;
//	num = 10;
//	total = num * PRICE;
//	printf("total=%d\n", total);
//	return 0;
//}
//main()
//{
//	char ch; 
//	ch = '\362';
//	SetConsoleOutputCP(437);
//	printf("%c\n", ch);
//	printf("china\n\101\t\\\n");
//	printf("%c,%c,%c,%c,%c\n", '\x40', '\101', '\\', '\'', '\"');
//	return 0;
//}
//main()
//{
//	printf("Y\b=\n");
//	return 0;
//}
//main()
//{
//	float weight;//float规定数据为浮点型，可以输入小数，比int提供了更大的范围
//	float value;
//	printf("are you worth your weight in platinum ?\n");
//	printf("let`s check it out.\n");
//	printf("please enter your weight in pounds:");
//
//	scanf_s("%f", &weight);//visual studio 对scanf会产生警告，这里改用scanf_s
//	//%f用来输出实数，以小数形式输出，默认情况下保留小数点6位。
//	//&的存在证明weight是一个引用变量，即可输入量
//	value = 1700.0 * weight * 14.5833;
//	printf("your weight in platinum is worth $%.2f.\n", value);//%.100f用来输出实数，保留小数点100位，这里是%.2f所以是保留小数点后两位
//	printf("you are easily worth that ! if platinum prices drop,\n");
//	printf("eat more to maintain your valur.\n");
//	return 0;
//}
////#include <iostream>
//#pragma comment(lib,"winmm.lib")
//#include <windows.h>
//using namespace std;
//int main()
//{
//	PlaySound("C:\\Windows\\Media\\Windows XP 关机.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
//	system("PAUSE");
//	return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <cstring>
//#include <cstdlib>
//using namespace std;
//
//struct WavData {
//public:
//	int16_t* data;
//	long size;
//
//	WavData() {
//		data = NULL;
//		size = 0;
//	}
//};
//
//
//void loadWavFile(const char* fname, WavData* ret) {
//	FILE* fp = fopen(fname, "rb");
//	if (fp) {
//		char id[5];
//		int32_t size;
//		int16_t format_tag, channels, block_align, bits_per_sample;
//		int32_t format_length, sample_rate, avg_bytes_sec, data_size;
//
//		fread(id, sizeof(char), 4, fp);
//		id[4] = '\0';
//
//		if (!strcmp(id, "RIFF")) {
//			fread(&size, sizeof(int16_t), 2, fp);
//			fread(id, sizeof(char), 4, fp);
//			id[4] = '\0';
//
//			if (!strcmp(id, "WAVE")) {
//				fread(id, sizeof(char), 4, fp);
//				fread(&format_length, sizeof(int16_t), 2, fp);
//				fread(&format_tag, sizeof(int16_t), 1, fp);
//				fread(&channels, sizeof(int16_t), 1, fp);
//				fread(&sample_rate, sizeof(int16_t), 2, fp);
//				fread(&avg_bytes_sec, sizeof(int16_t), 2, fp);
//				fread(&block_align, sizeof(int16_t), 1, fp);
//				fread(&bits_per_sample, sizeof(int16_t), 2, fp);
//				fread(id, sizeof(char), 4, fp);
//				fread(&data_size, sizeof(int16_t), 2, fp);
//
//				ret->size = data_size / sizeof(int16_t);
//				// 动态分配了空间，记得要释放
//				ret->data = (int16_t*)malloc(data_size);
//				fread(ret->data, sizeof(int16_t), ret->size, fp);
//			}
//			else {
//				cout << "Error: RIFF File but not a wave file\n";
//			}
//		}
//		else {
//			cout << "ERROR: not a RIFF file\n";
//		}
//	}
//	fclose(fp);
//}
//
//void freeSource(WavData* data) {
//	free(data->data);
//}
//
//int main() {
//	WavData song;
//	ofstream out("city_16k.txt");
//	const char* fname = "city_16k.wav";
//	loadWavFile(fname, &song);
//	cout << song.size << endl;
//
//	for (long i = 0; i < song.size; i++) {
//		out << song.data[i] << ',';
//	}
//
//	out.close();
//	freeSource(&song);
//	return 0;
//}
//#include <windows.h>
//#pragma comment(lib, "Winmm.lib")
//
//int main(int argc, char* argv[])
//{
//	//文件类型只能是波形文件
//	sndPlaySound("H:\\大一第二学期\\你好，我是谭徽宇\\me.wav", NULL, SND_FILENAME | SND_SYNC);//BOOL PlaySound(LPCSTR pszSound, HMODULE hmod,DWORD fdwSound);
//	Sleep(0);							//等待声音播放
//	return 0;
//}
//#include<iostream>
//#include<windows.h>
//#include<Mmsystem.h>
//#pragma comment(lib,"winmm.lib")
//using namespace std;
//int main()
//{
//	PlaySound(TEXT("F:\\c.wav"), NULL, SND_FILENAME | SND_ASYNC);
//	cin.get();
//	cin.get();
//	return 0;
//	｝
//#include <cstdio>
//#include <windows.h>
//#define qdo 262
//#define qre 294
//#define qmi 330     //q前缀为低音，1后缀为高音，s前缀为半音阶
//#define qfa 349
//#define qso 392
//#define qla 440
//#define qsi 494
//#define do 523
//#define re 578
//#define mi 659
//#define fa 698
//#define so 784
//#define la 880
//#define si 988
//#define do1 1046
//#define re1 1175
//#define mi1 1318
//#define fa1 1480
//#define so1 1568
//#define la1 1760
//#define si1 1976
//#define sqdo 277
//#define sqre 311
//#define sqfa 370
//#define sqso 415
//#define sqla 466
//#define sdo 554
//#define sre 622
//#define sfa 740
//#define sso 831
//#define sla 932
//#define sdo1 1046
//#define sre1 1245
//#define sfa1 1480
//#define sso1 1661
//#define sla1 1865
//
//int main()
//{
//
//    int pai = 400, ban = 200, ting = 128;
//    Beep(la, ban); Beep(si, ban); Sleep(ting);
//    Beep(do1, pai + ban); Beep(si, ban); Sleep(ting); Beep(do1, pai); Sleep(ting); Beep(mi1, pai); Sleep(ting);
//    Beep(si, 3 * pai); Sleep(ting); Beep(mi, ban); Beep(mi, ban);
//    Beep(la, ban + pai); Beep(so, ban); Sleep(ting); Beep(la, pai); Sleep(ting); Beep(do1, pai); Sleep(ting);
//    Beep(so, 2 * pai); Sleep(ting); Sleep(pai); Beep(mi, ban); Sleep(ting / 2); Beep(mi, ban); Sleep(ting / 2);
//    Beep(fa, pai + ban); Beep(mi, ban); Sleep(ting); Beep(fa, ban); Beep(do1, ban + pai); Sleep(ting);
//    Beep(mi, 2 * pai); Sleep(ting); Sleep(ban); Beep(do1, ban); Sleep(ting / 2); Beep(do1, ban); Sleep(ting / 2); Beep(do1, ban); Sleep(ting / 2);
//    Beep(si, ban + pai); Beep(sfa, ban); Sleep(ting); Beep(sfa, pai); Beep(si, pai); Sleep(ting);
//    Beep(si, 2 * pai); Sleep(ting); Sleep(pai); Beep(la, ban); Beep(si, ban); Sleep(ting);
//    Beep(do1, pai + ban); Beep(si, ban); Sleep(ting); Beep(do1, pai); Sleep(ting); Beep(mi1, pai); Sleep(ting);
//    Beep(si, 2 * pai); Sleep(ting); Sleep(pai); Beep(mi, ban); Sleep(20); Beep(mi, ban); Sleep(ting);
//    Beep(la, pai + ban); Beep(so, ban); Sleep(ting); Beep(la, pai); Sleep(ting); Beep(do1, pai); Sleep(ting);
//    Beep(so, 3 * pai); Sleep(ting + ban); Beep(mi, ban); Sleep(ting / 2);
//    Beep(fa, pai); Sleep(ting); Beep(do1, ban); Beep(si, ban); Sleep(20); Beep(si, pai); Sleep(ting); Beep(do1, pai); Sleep(ting);
//    Beep(re1, ban); Sleep(20); Beep(re1, ban); Sleep(20); Beep(mi1, ban); Sleep(ting / 2); Beep(do1, pai); Sleep(ting + pai);
//    Beep(do1, pai); Beep(si, ban); Sleep(ting); Beep(la, ban); Sleep(20); Beep(la, ban); Sleep(ting); Beep(si, pai); Sleep(ting); Beep(sso, pai); Sleep(ting);
//    Beep(sso, 2 * pai); Sleep(ting + pai); Beep(do1, ban); Beep(re1, ban); Sleep(ting);
//    Beep(mi1, pai + ban); Beep(re1, ban); Sleep(ting); Beep(mi1, pai); Sleep(ting); Beep(fa1, pai); Sleep(ting);
//    Beep(re1, 2 * pai); Sleep(pai + ting); Beep(so, ban); Sleep(20); Beep(so, ban); Sleep(ting);
//    Beep(do1, ban); Beep(si, ban); Sleep(ting); Beep(do1, pai); Sleep(ting); Beep(mi1, pai); Sleep(ting);
//    Beep(mi1, 2 * pai); Sleep(ting + 2 * pai);
//    Beep(la, ban); Beep(si, ban); Sleep(ting); Beep(do1, pai); Sleep(ting); Beep(si, pai); Sleep(ting); Beep(re1, ban); Sleep(20); Beep(re1, ban); Sleep(ting);
//    Beep(do1, pai + ban); Beep(so, ban); Sleep(20); Beep(so, pai); Sleep(pai + ting);
//    Beep(fa1, pai); Sleep(ting); Beep(mi1, pai); Sleep(ting); Beep(re1, pai); Sleep(ting); Beep(do1, pai); Sleep(ting);
//    Beep(mi1, 4 * pai);
//    Beep(mi1, pai * 2); Sleep(pai + ting); Beep(mi1, pai); Sleep(ting);
//    Beep(la1, 2 * pai); Sleep(ting); Beep(so1, pai); Sleep(ting); Beep(so1, pai); Sleep(ting);
//    Beep(mi1, ban); Sleep(ting / 2); Beep(re1, ban); Sleep(ting); Beep(do1, pai); Sleep(ting + ban); Beep(do1, ban); Sleep(ting);
//    Beep(re1, pai); Sleep(ting); Beep(do1, ban); Beep(re1, ban); Sleep(20); Beep(re1, ban); Sleep(ting); Beep(so1, pai); Sleep(ting);
//    Beep(mi1, 2 * pai); Sleep(ting + pai); Beep(mi, pai); Sleep(ting);
//    Beep(la1, 2 * pai); Sleep(ting); Beep(so1, 2 * pai); Sleep(ting);
//    Beep(mi1, ban); Beep(re1, ban); Sleep(ting); Beep(do1, 2 * pai); Sleep(ting + ban); Beep(do1, ban); Sleep(ting);
//    Beep(re1, pai); Sleep(ting); Beep(do1, ban); Beep(re1, ban); Sleep(20); Beep(re1, ban); Sleep(ting); Beep(si, pai); Sleep(ting);
//    Beep(la, 2 * pai); Sleep(ting); Beep(la, ban); Beep(si, ban);
//    Beep(do1, pai + ban); Beep(si, ban); Sleep(ting); Beep(do1, pai); Sleep(ting); Beep(mi1, pai); Sleep(ting);
//    Beep(si, 3 * pai); Sleep(ting); Beep(mi, ban); Beep(mi, ban);
//    Beep(la, ban + pai); Beep(so, ban); Sleep(ting); Beep(la, pai); Sleep(ting); Beep(do1, pai); Sleep(ting);
//    Beep(so, 2 * pai); Sleep(ting); Sleep(pai); Beep(mi, ban); Sleep(ting / 2); Beep(mi, ban); Sleep(ting / 2);
//    Beep(fa, pai + ban); Beep(mi, ban); Sleep(ting); Beep(fa, ban); Beep(do1, ban + pai); Sleep(ting);
//    Beep(mi, 2 * pai); Sleep(ting); Sleep(ban); Beep(do1, ban); Sleep(ting / 2); Beep(do1, ban); Sleep(ting / 2); Beep(do1, ban); Sleep(ting / 2);
//    Beep(si, ban + pai); Beep(sfa, ban); Sleep(ting); Beep(sfa, pai); Beep(si, pai); Sleep(ting);
//    Beep(si, 2 * pai); Sleep(ting); Sleep(pai); Beep(la, ban); Beep(si, ban); Sleep(ting);
//    Beep(do1, pai + ban); Beep(si, ban); Sleep(ting); Beep(do1, pai); Sleep(ting); Beep(mi1, pai); Sleep(ting);
//    Beep(si, 2 * pai); Sleep(ting); Sleep(pai); Beep(mi, ban); Sleep(20); Beep(mi, ban); Sleep(ting);
//    Beep(la, pai + ban); Beep(so, ban); Sleep(ting); Beep(la, pai); Sleep(ting); Beep(do1, pai); Sleep(ting);
//    Beep(so, 3 * pai); Sleep(ting + ban); Beep(mi, ban); Sleep(ting / 2);
//    Beep(fa, pai); Sleep(ting); Beep(do1, ban); Beep(si, ban); Sleep(20); Beep(si, pai); Sleep(ting); Beep(do1, pai); Sleep(ting);
//    Beep(re1, ban); Sleep(20); Beep(re1, ban); Sleep(20); Beep(mi1, ban); Sleep(ting / 2); Beep(do1, pai); Sleep(ting + pai);
//    Beep(la, 4 * pai);
//    Sleep(1000);
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <mmsystem.h>
//#pragma comment(lib, "libwinmm.a")
// 
//int main()
//{
//    PlaySound(TEXT("sounds\\刚认识你.wav"),
//                NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
//    Sleep(10000);
//    printf("Hello world!\n");
//    return 0;
//}
//#include <windows.h>
//#pragma comment(lib, "Winmm.lib")/For MCI(Media Control Interface，媒体控制接口)
//
//int main(int argc, char* argv[])
//{
//	//文件类型可以是:mp3、wav、avi等
//	mciSendString("play Data\\1.wav",//MCI命令字符串
//		NULL,//存放反馈信息的缓冲区
//		0,//缓冲区的长度
//		NULL);//回调窗口的句柄，一般为NULL
//	Sleep(50000);//等待声音播放
//	return 0;
//}
//#include <windows.h>
//#pragma comment(lib, "Winmm.lib")
//
//int main(int argc, char* argv[])
//{
//	//文件类型只能是波形文件
//	PlaySound(TEXT("Data\\1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
//	Sleep(50000);							//等待声音播放
//	return 0;
//}
//main()
//{
//	int a, b, c;
//	printf("请输入班级号1或2\n");
//	scanf("%d", &a);
//	printf("请输入索引号\n");
//	scanf("%d", &b);
//	printf("请输入学号\n");
//	scanf("%d", &c);
//	char word[10];
//	printf("请输入你的姓名\n");
//	scanf("%s", word);
//	printf("C程序设计实验Y%d%d%s%d", a, b, word, c);
//	return 0;
//}
//main()
//{
//	int a, b, c;
//	int max(int x, int y);
//	scanf("%d%d", &a, &b);
//	//scanf_s("%d", &a);
//	//scanf_s("%d", &b);
//	c = max(a, b);
//	printf("max=%d", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x >= y) //{ z = y; }
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;}
//main()
//{
//	Beep(523, 500);
//	Beep(587, 500);
//	Beep(659, 500);
//	Beep(698, 500);
//	Beep(784, 500);
//	Beep(880, 500);
//	Beep(980, 500);
//	Beep(1060, 500);
//	Sleep(500);
//	Beep(523, 500);
//	Beep(587, 500);
//	Beep(659, 500);
//	Beep(698, 500);
//	Beep(784, 500);
//}//发声实验
//#define	_TEST1_H
//
//#include <stdio.h>
//int main(void)
//{
//	int a, b, sum;
//	a = 123;
//	b = 456;
//	printf("sum = %d\n", sum = a + b);
//}
//int main(void)
//{
//	int a, b, sum;
//	a = 123;
//	b = 456;
//	sum = a + b;
//	printf("sum = %d\n", sum);
//}

//void one_three(void);
//void two(void);
//
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two(void)
//{
//	printf("two\n");
//}
//int main(void)
//{
//	printf("Starting now:\n");
//	one_three();
//	printf("done!\n");
//	return 0;
//}
//
//void two_three(void);
//void two(void);
//void two_three(void)
//{
//	printf("one\n");
//}
//void two(void)
//{
//	printf("two\n");
//}
//int main(void)
//{
//	printf("Starting now:\n");
//	two_three();
//	two();
//	printf("three\n");
//	printf("done!\n");
//	return 0;
//}
//void br(void);//第5题
//void ic(void);
//
//void br(void)
//{
//	printf(" Brazil, Russia");
//}
//void ic(void)
//{
//	printf("India,China");
//}
//int main(void)
//{
//	br(); 
//	printf(",");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//	return 0;
//}
//void jolly(void);//第4题
//void deny(void);
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny(void)
//{
//	printf("Which nobody can deny!\n");
//}
//int main(void)
//{
//	jolly();
//	jolly();
//	jolly();
//	void deny();
//	return 0;
//}
//int main()//第6题
//{
//	int toes = 10;
//	int toes2 = toes * toes;
//	int two_toes = 2 * toes;
//	printf("toes2 = %d\n two_toes = %d\n", toes2, two_toes);
//	return 0;
//}
//int main(void)
//{
//	int age, day;
//	age = 19;
//	day = 365 * age;
//	printf("%d age = %d day\n", age, day);
//	return 0;
//}
//int main(void)
//{
//	printf("谭徽宇\n");
//	printf("%p\n");
//	return 0;
//}
//int main(void)
//{
//	printf("Tan \n");
//	printf("Hui Yv");
//	return 0;
//}
//int main(void)
//{
//	printf("baa baa black sheep.");
//	printf("have you any wool?\n");
//	printf("begone!\nO creaturen of lard!\n");
//	printf("what?\nNo/nfish?\n");
//	int num;
//	num = 2;
//	printf("%d + %d = %d \n", num, num, num + num);
//	int a, b;
//	a = 5;
//	b = 2;
//	b = a;
//	a = b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	printf("I just want to say\n");
//	printf("520\n");
//	printf("my star");
//	return 0;
//}
//void butler(void);
//int main(void)
//{
//	int I, love, you;
//	I = 5;
//	love = 2;
//	you = 0;
//	butler();
//	printf("%d %d %d.\n",I,love,you);
//	printf("my star\n");
//	return 0;
//}
//void butler(void)
//{
//	printf("I just want to say.\n");
//
//}
////有错误的程序
//int main(void)
//(
//	int n, int n2, int n3;
//n = 5;
//n2 = n * n;
//n3 = n2 * n2;
//printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
//return 0;
//)
//void butler(void);//第一次调用butler()是作为 ANSI/ISO C函数原型-告知编译器要使用该函数
//int main(void)
//{
//	printf("I will summon the butler function.\n");
//	butler();//第二次调用butler()，以函数调用（function call）的形式出现在main()中
//	printf("Yes.Bring me some tea and writeaable DVDs.\n");
//	return 0;
//}
//void butler(void)//函数定义-函数定义是函数本身的源代码
//{
//	printf("You rang, sir?\n");
//}
//int main(void)
//{
//	int feet, fathoms;
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes, I said %d feet!\n", 6 * fathoms);
//	return 0;
//}

//int main()
//{//代表开始
//		int num;//声明一个“num”
//		num = 1;//给“num”赋值
//		printf("I am a simple");
//		printf("computer.\n");//“\n”是换行符，当没有它时打印的内容会跟在上一句后面
//		printf("My favorite number is %d because it is first.\n", num);
//		return 0;
	/*printf("%d\n",sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;*/
//代表结束
////char ch = 'A';//在内存中提取一个位置命名为ch代表A
//	//printf("%c\n",ch);//%c-打一个字符格式的数据
//	//return 0;
//	*int age = 20;
//		printf("%d\n",age);
//		return 0;*/
//	float f = 5.0;
//	printf("%lf\n",f);
//int main()//main函数又被称为主函数-程序的入口，整个C语言的代码都是从main函数的第一行开始的。main函数必须要出现
////int是整形的意思
////main前面的int表示main函数调用返回一个整形值
//{
//	//这里完成任务
//	//在屏幕上输出helloworld
//	//printf函数-打印函数-双引号内是打印的内容
//	//函数库-C language提供给我们的函数
//	//别人的东西需要打招呼-#include<stdio.h>（包含stdio.h的文件）
//	//stdio-standard input	output 标准输入输出
//	printf("比特\n");
//	
//
//	return 0;//0是整数
//}




