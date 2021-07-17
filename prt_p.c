#include <stdio.h>
#include <stdlib.h>

#define N 3
main(int argc,char *argv[]) {
	if(argc==1){
	int a[4][N] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*prt)[N] = a, * p = a[0];

	int i = 0, n = 0;

	for (; i <4; i++)
		for (n=0; n < N; n++)
			if (prt[i][n] % 2 == 0)
				printf("%d ", prt[i][n]);

	putchar('\n');

	for (i = 0; i < 4; i++)
		for (n = 0; n < N; n++)
			if (*(p + (i * N + n)) % 2 != 0) {
				printf("%d ", *(p + (i * N + n)));
			}

	putchar('\n');

	system("pause");
	}
	else
		printf("%s,°®ÓÃ²»ÓÃ(%d)\n",argv[1],argc);

}