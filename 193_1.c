// 193_1 - 기억류(storage class) - extern

#include<stdio.h>
static int g1 = 100;
extern int g2 = 200;

int main()
{
	extern g3;
	
	printf(" 전역변수 static g1 = %d, address = %d \n", g1, &g1);
	printf(" 전역변수 extern g2 = %d, address = %d \n", g2, &g2);
	printf(" 전역변수 extern g3 = %d, address = %d \n", g3, &g3);
	return 0;
}

extern int g3 = 200;