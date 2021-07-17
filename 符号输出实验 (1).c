//#include <Windows.h>
//#include <stdio.h>
main()
{
	char ch;
	ch = '\362'; 
	//SetConsoleOutputCP(437);
	printf("%c\n", ch);
	printf("china\n\101\t\\\n");
	printf("%c,%c,%c,%c,%c\n", '\x40', '\101', '\\', '\'', '\"');
	return 0;
}
