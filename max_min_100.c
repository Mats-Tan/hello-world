#include <stdlib.h>

int check_100(int*a) {
	int i = 0;
	for (; a[i] != 100 && a[i] != '\0'; i++);
	if (a[i] == 100) {
		printf("数组中第%d位是%d", i+1, a[i]);
		return i+1;
	}
	else {
		puts("数组中没有100这个数");
		return 0;
	}
}
main() {
	int a[11] = { 0 }, i, max, min;
	puts("请输入10个整数,并用空格隔开");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	check_100(a);

	max = a[0]; min = a[0];
	for (i = 0; !(a[i] == '\0'); i++) {
		if (max < a[i]) 
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("\n最大值=%d,最小值=%d", max, min);
	putchar('\n');
	system("pause");
}