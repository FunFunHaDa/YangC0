// 107 - ����� ������ - do ~ while ��

#include<stdio.h>

int main()
{
	int i = 1, sum = 0;
	puts(" ------------------");
	puts(" do ~ while��");
	puts(" ------------------");

	do {
		sum = sum + i;
		printf(" i = %2d, sum = %2d \n", i, sum);
		i = i + 1;
	} while (i <= 10);

	puts(" ------------------");
	puts(" �ϴ� �ѹ��� �����ϰ� ���ϴ�. ");
	puts(" do~while���� ������ ���߿� üũ�մϴ�. ");
	puts(" ------------------");

}