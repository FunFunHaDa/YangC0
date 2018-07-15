// 260 - C��� ������ ����

#include<stdio.h>
#include<stdlib.h>

int g = 100;	// data

int main(void)
{
	static int b = 20;	// data
	auto int a = 10;	// stack
	// stack, heap
	int * p = (int*)malloc(sizeof(int));

	*p = 300;

	puts("\n C��� ������ ���� \n");
	printf(" global g = %3d, &g = %d \n\n", g, &g);
	printf(" auto   a = %3d, &a = %d \n\n", a, &a);
	printf(" static b = %3d, &b = %d \n\n", b, &b);
	printf(" pointer *p = %3d, p = %d \n\n", *p, p);
	printf(" pointer *p = %3d, &p = %d \n\n", *p, &p);
	free(p);

	return 0;
}