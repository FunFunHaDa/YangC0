// 106 - ����� ������ - while��

#include<stdio.h>

int main()
{
	int i = 1, sum = 0;
	puts("----------------");
	puts(" while��");
	puts("----------------");

	while (i <= 10)
	{
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
		i = i + 1;
	}

	puts("----------------");
	puts(" ��������� i�� �ʱ�ȭ ����� �մϴ�. ");
	puts(" while���� ���ο� i�� ���� ������ŵ�ϴ�. ");
	puts("----------------");
}