// 017 - ���� �ΰ������ ���� �ذ�

#include<stdio.h>

int main(void)
{
	char a, b;
	puts("---------------------");
	puts(" �� ���� ����� ");
	puts("---------------------");

	printf(" ù ��° ���� �Է� : ");
	scanf("%c", &a);

	printf(" �� ��° ���� �Է� : ");
	while (getchar() != '\n');
	//fflush(stdin);
	scanf("%c", &b);

	printf(" a = %c, b = %c  \n", a, b);
	puts("---------------------");
	puts(" fflush(stdin)�� Ű���� ���� �����. ");
	puts("---------------------");

	return 0;
}