// 003 - 정수로 문자 출력 - putchar함수 -2

// 한 문자 출력 putchar 2

#include<stdio.h>

int main(void)
{
	putchar(" 정수로 문자 출력 ");

	putchar(65);
	putchar(66);
	putchar('\t');
	putchar(97);
	putchar(98);
	putchar('\t');

	putchar(48);
	putchar(49);
	putchar('\n');

	puts(" 정수와 문자와 일대일로 매칭된다");
	return 0;
}