// 194 - ����(storage class) - static ����

#include<stdio.h>
int gg;

int main()
{
	int a; 
	static int b;

	printf(" a = %d, &a = %d \n", a, &a);
	printf(" b = %d, &b = %d \n", b, &b);
	printf(" gg = %d, &gg = %d \n", gg, &gg);

	puts(" a�� stack����, b, gg, data������ �Ҵ�ȴ�. ");
	puts(" �ʱ�ȭ ���� ������ a�� �����Ⱚ, b, gg�� 0");

	return 0;
}