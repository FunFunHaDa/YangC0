// 018 - ���� ����� - getchar

#include<stdio.h>

int main(void)
{
	char a, b;
	puts(" -----------------------------");
	puts(" �� ���� �����");
	puts(" -----------------------------");

	printf(" ù ��° ���� �Է� : ");
	a = getchar();

	printf(" �� ��° ���� �Է� : ");
	while (getchar() != '\n');
	b = getchar();

	printf(" a = %c, b = %c \n", a, b);
	puts(" -----------------------------");
	puts(" ���ڸ� �Է½ô� getchar�Լ��� ��õ�մϴ�. ");
	puts(" -----------------------------");
}