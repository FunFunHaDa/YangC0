// 205 - ����(char)�迭�� ���� ����

#include<stdio.h>

int main()
{
	char a[] = "apple";
	char b[6] = { 'a', 'p', 'p','l', 'e', '\0' };

	printf(" a = %d, b = %d \n", a, b);
	printf(" a = %s, b = %s \n", a, b);
	puts(a), puts(b);

	printf(" sizeof(a) = %d, sizeof(b) = %d \n", sizeof(a), sizeof(b));

	return 0;
}