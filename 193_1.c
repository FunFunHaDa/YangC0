// 193_1 - ����(storage class) - extern

#include<stdio.h>
static int g1 = 100;
extern int g2 = 200;

int main()
{
	extern g3;
	
	printf(" �������� static g1 = %d, address = %d \n", g1, &g1);
	printf(" �������� extern g2 = %d, address = %d \n", g2, &g2);
	printf(" �������� extern g3 = %d, address = %d \n", g3, &g3);
	return 0;
}

extern int g3 = 200;