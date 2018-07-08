// 203_2 - 배열명이 함수의 인수로 전달될 때

// 정수배열이 함수의 인수로 전달 (배열의 개수를 알 수 없음)

#include<stdio.h>

void Display(int x[5])
{
	int i;
	puts("\n ====> Display 함수 ");
	printf(" x = %d byte \n", sizeof(x)); 
	puts(" 0 ~ 9 까지 10번 반복");
	for (i = 0; i < 10; i++)
	{
		printf(" x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
	}

	puts("\n -2 ~ 5 까지 8까지 반복");
	for (i = -2; i < 6; i++)
	{
		printf(" x[%d] ==> %d 주소 ==> %d \n", i, x[i], &x[i]);
	}
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	Display(a);
	return 0;
}