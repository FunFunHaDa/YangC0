// 217 - putchar�Լ� VS fputc�Լ�

#include<stdio.h>

int main()
{
	putchar('A');
	putchar('B');
	putchar('C');
	putchar('\n');

	fputc('A', stdout);
	fputc('B', stdout);
	fputc('C', stdout);

	putchar(97);
	putchar(98);
	putchar(99);

	putchar('\n');

	fputc(97, stdout);
	fputc(98, stdout);
	fputc(99, stdout);

	putchar('\n');

	puts(" stdout�� ǥ������� �ǹ��մϴ� \n");
	puts(" standard output ����͸� ��Ÿ���� \n");
	puts(" ������� ����� ���� ��������� ������ \n");
	puts(" ������ ���ڰ� ���ٴ� �� �����߾�� \n");

	return 0;
}