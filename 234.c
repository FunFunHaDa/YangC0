// 234 - ��ũ��(macro)�Լ� ���ǻ���

#include<stdio.h>

#define P printf

#define FUN1(x) x*x
#define FUN2(x) ((x)*(x))


int func(int x)
{
	return x * x;
}

int main()
{
	P("func(5) = %d \n", func(5));
	P("FUN1(5) = %d \n", FUN1(5));
	P("FUN2(5) = %d \n", FUN2(5));

	puts("\n �ָ� �ָ�");

	P("func(2+3) = %d \n", func(2 + 3));
	P("FUN1(2+3) = %d \n", FUN1(2 + 3));
	P("FUN2(2+3) = %d \n", FUN2(2 + 3));

	return 0;
}
