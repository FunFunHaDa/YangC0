// 221_1 - scanf�Լ� VS fscanf�Լ�

// fscanf �Լ� - ���ڿ� �Է�

#include<stdio.h>

int main(void)
{
	char flower[20];
	fprintf(stdout, "�����ϴ� ���� : ");
	fscanf(stdin, "%s", flower);

	fprintf(stdout, "%s ���� ���ƿ� \n", flower);

	fputs(" fscanf - %s�� ���� ������ �Է� ���� \n", stdout);
	fputs(" fgets�Լ��� ���� ������ �Է� ���� \n", stdout);
	fputs(" ���ڿ� �Է��� fgets�Լ��� ���� \n", stdout);

	return 0;
}