// 195 - 기억류(storage class) - 레지스터(register)

#include<stdio.h>

int main()
{
	auto int i;
	register int j;

	puts(" -- auto -- ");
	for (i = 0; i < 50000; i++)
	{
		printf(" C언어는 재밌다! ==> %d \n", i);
	}

	puts(" -- register -- ");
	for (j = 0; j < 50000; j++)
	{
		printf(" C언어는 재밌다! ==> %d \n", j);
	}

	return 0;
}