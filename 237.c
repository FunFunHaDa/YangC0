// 237 - 문자 배열의 초기화

// 문자 배열의 초기화

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[8] = { 0 };
	char b[8] = "banana";
	char c[8];

	int i;

	printf(" a = %s,  b = %s, c = %s \n", a, b, c);

	puts(" 배열 a");
	for (i = 0; i < 8; i++)
	{
		printf(" a[%d] = %c, %d \n", i, a[i], a[i]);
	}

	puts("\n 배열 b");
	for (i = 0; i < 8; i++)
	{
		printf(" b[%d] = %c, %d \n", i, b[i], b[i]);
	}

	puts("\n 배열 c");
	for (i = 0; i < 8; i++)
	{
		printf(" c[%d] = %c, %d \n", i, c[i], c[i]);
	}
	return 0;
}