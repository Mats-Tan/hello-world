//��д��������Ҫ��ֱ����scanf��getchar�����������룬Ȼ�����ֱ����printf��putchar�����������

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
