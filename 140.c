// 140 - C��� fputc�Լ� stdio.h

#include<stdio.h>

int main()
{
	puts(" fputc �Լ�");

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

	puts("\n--------------------------------------");
	puts(" stdout�� ǥ������� �ǹ��մϴ� ");
	puts(" standard output ����͸� ��Ÿ���� ");
	puts(" ������� ��������� ��������� ������ ");
	puts(" ������ ���ڰ� ���ٴ� �� �����߾�� ");
	puts("-----------------------------------");
}