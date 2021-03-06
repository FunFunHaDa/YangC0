// 203_1 - 배열명이 함수의 인수로 전달될 때

// 정수배열이 함수의 인수로 전달 (배열이 통째로 복사되는거 아니다.)

#include<stdio.h>

void Display(int x[5])
{
	int i; 
	puts("\n ====> Display 함수");
	printf(" x = %d byte \n", sizeof(x)); // 4바이트
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	int * p = a;

	printf(" int a[5], sizeof(a) ==> %d byte \n", sizeof(a));
	printf(" int * p, sizeof(p) ==> %d byte \n", sizeof(p));

	Display(a);
	return 0;
}