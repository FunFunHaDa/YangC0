// 239_2 - scanf �Լ� ���� �� �� �Է��� ��

/// scanf �Լ� ���� Ȱ��

#include<stdio.h>

int main(void)
{
	char a, b;

	puts(" scanf �Լ� ���� Ȱ��\n");

	printf(" ù ��° ���� �Է� : ");
	scanf("%c", &a);

	printf(" �� ��° ���� �Է� : ");
	while (getchar() != '\n');
	scanf("%c", &b);

	printf(" a = %c, b = %c \n", a, b);
	return 0;
}