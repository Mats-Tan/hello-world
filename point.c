#include <stdio.h>
#include <stdlib.h>

main()
{
	int* p = NULL;
	int n[40],i=0,N=0,s=0;
	p = n;

	printf("输入结束时请在按一次空格后同时按下Ctrl+z\n");
	for (; scanf("%d", &n[i]) > 0; i++);

	s = i-1;
	

	for (; i >= 0; i--) {
		if (*p > 0)
			N++;
		p++;
	}//结束时，i=-1

	printf("一共有%d个正整数\n", N);


	for (i++; i <= s; i++)
		printf("%d ", n[i]);

	puts("\n");
	system("pause");
	
}