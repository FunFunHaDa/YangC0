// 189 - strtod�Լ� - ���ڿ��� �Ǽ��� ��ȯ�Ѵ�

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf(" 555.5555555 �׳���� = %lf \n", strtod("555.5555555", NULL, 10));
	printf(" 555.5555555 �׳���� = %lf \n", strtod("555.5555555", NULL, 10));
	printf(" 555.5555555 .3��� = %.3lf \n", strtod("555.5555555", NULL, 10));
	printf(" 555.5555555 .1��� = %.1lf \n", strtod("555.5555555", NULL, 10));
	return 0;
}