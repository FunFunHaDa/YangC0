// 232_1 - 매크로(macro)함수

// 일반 함수
#include<stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

int min(int x, int y)
{
	return x < y ? x : y;
}

#define P printf

int main()
{
	P(" %d, %d 중 큰 값 : %d \n", 20, 5, max(20, 5));
	P(" %d, %d 중 작은 값 : %d \n", 20, 5, min(20, 5));

	return 0;
}