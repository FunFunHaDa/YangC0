// 123 - C��� ����� - goto��

#include<stdio.h>

int main()
{
	char i = 65;

	puts("------------");
	puts(" goto��");
	puts("------------");

To:

	putchar(i++);
	if (i < 91)
		goto To;

	puts("\n---------------------------");
	puts(" To : ����ǥ�̴�");
	puts(" goto To; To����ǥ�� ����");
	puts(" goto���� ������ �б⹮�̴�. ");
	puts("------------");
}