// 268 - ����ȯ(cast) ������

#include<stdio.h>

int main()
{
	int a = 10;
	double d = 3.15;

	puts(" \n ����ȯ(cast) ������ \n");

	printf(" a = %d \n", a);
	printf(" d = %.2f \n\n", d);

	a = 55.6;
	d = 80;

	printf(" a = %d \n", a);
	printf(" d = %.2f \n\n", d);

	a = (int)55.6;
	d = (double)80;

	printf(" a = %d \n", a);
	printf(" d = %.2f \n\n", d);

	return 0;
}