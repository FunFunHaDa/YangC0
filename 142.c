// 142 - C��� fprintf�Լ� printf�Լ��� ������

#include<stdio.h>

int main()
{
	puts(" fprintf �Լ�");

	puts(" puts�Լ� ���");
	printf(" %d, %.1f %c %s \n", 20, 3.14, 'A', "Kora");
	printf(" �λ��� �� ���� �����̴�. \n");

	fprintf(stdout, "\n fprintf�Լ� ��� \n");
	fprintf(stdout, "%d, %.1f %c %s \n", 20, 3.14, 'A', "Kora");
	fprintf(stdout, "�λ��� �� ���� �����̴�. \n");

	puts("\n-----------------------------------------------");
	puts(" ��κ� printf�Լ��� ���ƿ�");
	puts(" ����� ������ �ϴ� stdout�� �տ� ���Ϳ�");
	puts(" fputs�Լ��� �������̰�, ������ ��������");
	puts("-----------------------------------");
}