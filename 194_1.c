// 194_1 - ����(storage class) - static ����

#include<stdio.h>

void sub(int x)
{
	int ak = 100;
	static int sk = 200;	// data ����
	printf(" sub�Լ� x = %d, &x = %d \n", x, &x);
	printf(" sub�Լ� ak= %d, &x = %d \n", ak, &ak);
	printf(" sub�Լ� sk = %d, &x = %d \n", sk, &sk);
}

int main()
{
	int a; 
	static int b;

	printf(" a = %d, &a = %d \n", a, &a);
	printf(" b = %d, &b = %d \n", b, &b);

	sub(500);
	return 0;
}