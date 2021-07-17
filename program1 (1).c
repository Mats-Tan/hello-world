//编写两个程序：要求分别采用scanf和getchar函数进行输入，然后对其分别采用printf和putchar函数进行输出

main()
{
	char ch1, ch2;
	ch1 = getchar();
	getchar('\n');
	ch2 = getchar();
	putchar('c'); putchar('h'); putchar('1'); putchar(':'); 
	putchar(ch1); putchar('\t');
	putchar('c'); putchar('h'); putchar('2'); putchar(':'); 
	putchar(ch2);putchar('\n');
 }
