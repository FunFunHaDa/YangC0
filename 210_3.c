// 210_3 - �迭�����Ϳ� �����͹迭

// ������ �迭

#include<stdio.h>
#include<string.h>

int main()
{
	char * title = 0;
	char * name[5];

	char * titleP = title;
	char ** nameP = name;

	printf(" title = %d byte \n", sizeof(title));
	printf(" name = %d byte \n", sizeof(name));

	printf(" titleP = %d byte \n", sizeof(titleP));
	printf(" nameP = %d byte \n", sizeof(nameP));

	return 0;
}