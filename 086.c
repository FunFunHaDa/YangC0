// 086 - 정수배열의 초기화

#include<stdio.h>

int main()
{
	int i;
	int a[5] = { 0, };
	int n = sizeof(a) / sizeof(int);

	puts("------------------");
	puts(" 정수배열의 초기화");
	puts("------------------");

	puts("------------------");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %2d, &a[%d]] = %d \n", i, a[i], i, &a[i]);
	puts("------------------");

	puts("0이나 0, 은 같은 표현입니다. ");
	puts("------------------");
	return 0;
}