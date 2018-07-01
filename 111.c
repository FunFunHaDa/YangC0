// 111 조건이 처음부터 거짓일 경우 do ~ while문

#include<stdio.h>

int main()
{
	int i = 100, sum = 0;
	puts(" ---------------------------");
	puts(" 조건이 처음부터 거짓일 경우 do ~ while문");
	puts(" ---------------------------");

	do {
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	} while (i <= 10);

	puts(" ---------------------------");
	puts(" do~while문은 일단 한 번은 수행한다. ");
	puts(" 마지막에 조건을 체크한다. ");
	puts(" ---------------------------");
}