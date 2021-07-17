#include <ctype.h>
main()
{
	char ch;
	
	while(scanf("%c", &ch))
	{ 
		if (isdigit(ch) != 0)
			printf("输入的是数字\n");
		else if (islower(ch) != 0)//使用tolower()和toupper()时该程序无法正常运行
			printf("输入的是小写字母\n");
		else if (isupper(ch) != 0)//当输入1时，因为它们返回原值的特性会导致异常输出
			printf("输入的是大写字母\n");
		else if (ispunct(ch) != 0)
			printf("输入的是其他符号\n");
		//else if (isblank(ch) != 0)
			printf("输入的是空白字符\n");
		//else
			printf("输入的是标准空白字符\n");
	}

}