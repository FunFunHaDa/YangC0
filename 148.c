// 148 - Visual Studio2015에서 포인터의 크기

#include<stdio.h>
#include<stdlib.h>

int main()
{
	puts(" Visual Studio 2015 에서 포인터의 크기 \n");
	printf(" char* = %d byte \n", sizeof(char*));
	printf(" short* = %d byte \n", sizeof(short*));
	printf(" int* = %d byte \n", sizeof(int*));
	printf(" long* = %d byte \n", sizeof(long*));
	printf("long long* = %d byte \n", sizeof(long long*));
	printf(" float* = %d byte \n", sizeof(float*));
	printf(" double* = %d byte \n\n", sizeof(double*));

	return 0;
}