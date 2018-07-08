// 203 - 배열명이 함수의 인수로 전달될 때

// 정수배열이 함수의 인수로 전달

#include<stdio.h>

void Display(int x[5])
{
	int i;
	puts("\n ====> Display 함수");
	printf(" x = %d \n", x);

	for (i = 0; i < 5; i++)
	{
		printf(" x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
	}
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	int i;
	int *p = a;

	printf(" a = %d, p = %d \n\n", a, p);

	puts(" ==> main함수 출력");
	for (i = 0; i < n; i++)
	{
		printf(" a[%d] ==> %d 주소 ==> %d \n", i, a[i], &a[i]);
	}

	Display(a);

	return 0;
}