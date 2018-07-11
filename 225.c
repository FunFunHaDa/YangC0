// 225 - time 함수

// time 함수

#include<stdio.h>

int main()
{
	time_t t;

	t = time(NULL);

	printf(" 1970년1월1일 자정부터 흘러온 시간 : %u \n", t);
	return 0;
}