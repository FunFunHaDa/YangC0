// 239_2 - scanf 함수 문자 두 개 입력할 때

/// scanf 함수 공백 활용

#include<stdio.h>

int main(void)
{
	char a, b;

	puts(" scanf 함수 공백 활용\n");

	printf(" 첫 번째 문자 입력 : ");
	scanf("%c", &a);

	printf(" 두 번째 문자 입력 : ");
	while (getchar() != '\n');
	scanf("%c", &b);

	printf(" a = %c, b = %c \n", a, b);
	return 0;
}