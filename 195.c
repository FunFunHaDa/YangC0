// 195 - ����(storage class) - ��������(register)

#include<stdio.h>

int main()
{
	auto int i;
	register int j;

	puts(" -- auto -- ");
	for (i = 0; i < 50000; i++)
	{
		printf(" C���� ��մ�! ==> %d \n", i);
	}

	puts(" -- register -- ");
	for (j = 0; j < 50000; j++)
	{
		printf(" C���� ��մ�! ==> %d \n", j);
	}

	return 0;
}