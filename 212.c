// 212 - ���ڿ� ���ͷ�(literal)

#include<stdio.h>
#include<string.h>

int main()
{
	char a[] = "Africa";

	printf(" a = %s \n", a);
	strcpy(a, "April");
	printf(" a = %s \n", a);

	printf(" ���ڿ� = %s \n", "America");

	return 0;
}