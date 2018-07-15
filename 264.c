// 264 - 대입연산자, 복합대입연산자

#include<stdio.h>

int main(void)
{
	int a = 100;
	int sum = 0;

	puts(" \n C언어 대입연산자 \n");

	a = 20;
	a == 30;

	sum = sum + 50;
	printf(" sum = %d \n", sum);

	sum += 50;
	printf(" sum = %d \n", sum);

	return 0;
}