main()
{
	int year;
	printf("��������Ҫ��ѯ����ݣ���֧��1582�󣩣�");
	scanf("%d", &year);
	(year % 4) == 0 ? ((year % 100) == 0 ? printf("��������") : printf("������")) : printf("��������");
	printf("\n");
}