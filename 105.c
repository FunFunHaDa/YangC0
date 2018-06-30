// 105 - 제어문과 연산자 - for문 변형

#include<stdio.h>

int main()
{
	int i, sum = 0;
	puts("---------------------");
	puts(" for문 기초");
	puts("---------------------");

	// 1 ~ 100
	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	//  i++ == i=i+1
	for (i = 1; i <= 100; i=i+1)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	//  1 ~ 100 홀수
	for (i = 1; i <= 100; i = i + 2)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	//  1 ~ 100 짝수
	for (i = 2; i <= 100; i = i + 2)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	// 10 ~ 1 합
	for (i = 10; i >= 1; i--)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	

	puts("---------------------");
	puts(" 변수 i가 1 ~ 10까지 10번 반복했습니다. ");
	puts(" 11라인 sum = 0은 초기값을 0으로 설정했고요. ");
	puts("---------------------");
}