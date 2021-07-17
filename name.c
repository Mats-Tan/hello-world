#include <stdio.h>
#include <stdlib.h>

int slen(char(*p)[]) {
	int i = 0;
	for (; (*p)[i] != '\0'; i++);
	return i;
}

void main() {
	char name[40];
	puts("请在英文输入法下输入你姓名的汉语拼音");
	scanf("%s", name);
	printf("\n你的名字由%d个字母组成,所在字符串的长度是%d\n", slen(name),slen(name)+1);

	system("pause");
}