// 145_3 - C��� fscanf�Լ� scanf�Լ��� ������

#include<stdio.h>

int main()
{
	char flower[20];

	fputs(" fscanf �Լ� - ���ڿ� �Է� \n", stdout);
	fprintf(stdout, "�����ϴ� ���� : ");
	fscanf(stdin, "%s", flower);
	fprintf(stdout, " %s ���� ���ƿ� \n", flower);

	fputs("\n-----------------------------------\n", stdout);
	fputs(" fscanf-%s�� ���� ������ �Է� ���� \n", stdout);
	fputs(" fgets�Լ��� ���� ������ �Է� ���� \n", stdout);
	fputs(" ���ڿ��Է��� fgets�Լ��� ���� \n", stdout);
	fputs("-----------------------------------\n", stdout);
}