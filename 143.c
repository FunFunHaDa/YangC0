// 143 - C��� fgetc�Լ� getchar�Լ��� ������

#include<stdio.h>

int main()
{
	char b_type;
	fputs(" fgetc �Լ� \n", stdout);
	fprintf(stdout, "����� �������� : ");
	// b_type = getchar();
	b_type = fgetc(stdin);
	fprintf(stdout, "\n %c���̱���. �ݰ����ϴ�. \n", b_type);
	fputs("\n----------------------------------------\n", stdout);
	fputs(" �̹� �˰� �ִ� getchar�Լ� �Դϴ�. \n", stdout);
	fputs("----------------------------------------\n", stdout);
}