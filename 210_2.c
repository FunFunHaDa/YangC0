// 210_2 - �迭�����Ϳ� �����͹迭

// �迭 ������

#include<stdio.h>
#include<string.h>

int main()
{
	char title[20];
	char name[5][20];

	char * titleP = title;
	char(*nameP)[20] = name;

	printf(" title = %d byte \n", sizeof(title));
	printf(" name = %d byte \n", sizeof(name));

	printf(" titleP = %d byte \n", sizeof(titleP));
	printf(" nameP = %d byte \n", sizeof(nameP));

	return 0;
}