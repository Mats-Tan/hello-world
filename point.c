#include <stdio.h>
#include <stdlib.h>

main()
{
	int* p = NULL;
	int n[40],i=0,N=0,s=0;
	p = n;

	printf("�������ʱ���ڰ�һ�οո��ͬʱ����Ctrl+z\n");
	for (; scanf("%d", &n[i]) > 0; i++);

	s = i-1;
	

	for (; i >= 0; i--) {
		if (*p > 0)
			N++;
		p++;
	}//����ʱ��i=-1

	printf("һ����%d��������\n", N);


	for (i++; i <= s; i++)
		printf("%d ", n[i]);

	puts("\n");
	system("pause");
	
}