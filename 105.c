// 105 - ����� ������ - for�� ����

#include<stdio.h>

int main()
{
	int i, sum = 0;
	puts("---------------------");
	puts(" for�� ����");
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

	//  1 ~ 100 Ȧ��
	for (i = 1; i <= 100; i = i + 2)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	//  1 ~ 100 ¦��
	for (i = 2; i <= 100; i = i + 2)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	sum = 0;

	// 10 ~ 1 ��
	for (i = 10; i >= 1; i--)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
	}
	

	puts("---------------------");
	puts(" ���� i�� 1 ~ 10���� 10�� �ݺ��߽��ϴ�. ");
	puts(" 11���� sum = 0�� �ʱⰪ�� 0���� �����߰��. ");
	puts("---------------------");
}