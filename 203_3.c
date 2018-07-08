// 203_3 - 배열명이 함수의 인수로 전달될 때

// 정수배열이 함수의 인수로 전달 __최종결론
// 배열의 개수도 함께 넘긴다.

#include<stdio.h>
void Display(int x[5], int num)
{
	int i;
	puts("\n ====> Display 함수");

	for (i = 0; i < num; i++)
	{
		printf(" *(x+%d) ==> %d 주소 ==> %d \n", i, *(x + i), x + i);
	}

	puts(" 해결 - 배열의 개수도 함께 넘긴다. ");
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);

	Display(a, n);
	return 0;
}