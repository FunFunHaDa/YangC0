// 257 - �ּҿ� ���� �ѱ� (call by address)

#include<stdio.h>

void swap(int * x, int * y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	printf("\n swap�Լ� *x = %d, *y = %d \n", *x, *y);
}

int main(void)
{
	int a = 20, b = 30;

	puts(" \n �ּҿ� ���� �ѱ� (call by address) \n");
	printf(" ������ a = %d, b = %d \n", a, b);
	swap(&a, &b);

	printf(" \n swap�Լ�ȣ�� �� a = %d, b = %d \n", a, b);
	return 0;
}