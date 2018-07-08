// 201_1 - 포인터 크기 (자료형 별로 확인)

// 포인터의 크기 알아보기

#include<stdio.h>

int main()
{
	char ca = 'A';
	int ia = 50;
	double da = 3.14;
	char cp[] = "google";

	char * charP = &ca;
	int  * intP = &ia;
	double * doubleP = &da;
	char * cpP = &cp;

	printf(" char * charP ==> %d byte \n", sizeof(charP));
	printf(" int * intP ==> %d byte \n", sizeof(intP));
	printf(" double * doubleP ==> %d byte \n", sizeof(doubleP));
	printf(" char * cpP ==> %d byte \n", sizeof(cpP));

	return 0;
}