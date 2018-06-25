// 017 - 문자 두개입출력 문제 해결

#include<stdio.h>

int main(void)
{
	char a, b;
	puts("---------------------");
	puts(" 두 문자 입출력 ");
	puts("---------------------");

	printf(" 첫 번째 문자 입력 : ");
	scanf("%c", &a);

	printf(" 두 번째 문자 입력 : ");
	while (getchar() != '\n');
	//fflush(stdin);
	scanf("%c", &b);

	printf(" a = %c, b = %c  \n", a, b);
	puts("---------------------");
	puts(" fflush(stdin)은 키보드 버퍼 비우기다. ");
	puts("---------------------");

	return 0;
}