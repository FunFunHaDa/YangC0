// 042 - 2의 N승 구하기

#include<stdio.h>
int main(void)
{
	int i, j, res = 1;

	puts("--------------------");
	puts(" 1 ~ 10 까지 2 ^ Y ");
	puts("--------------------");

	for (i = 0; i <= 10; i++)
	{
		res = 1;
		for (j = 1; j <= i; j++)
		{
			res = 2 * res;
		}
		printf(" [2^%d = %3d ] \n", i, res);
	}

	puts("--------------------");
	puts(" 모든 수의 0승은 1이다. ");
	puts(" 2^3은 2의 3승을 의미한다. ");
	puts(" 출력된 결과 값을 한 번씩 따라 적어보세요. ");
	puts("--------------------");

	return 0;
}