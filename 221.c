// 221 - scanf�Լ� VS fscanf�Լ�

// fscanf �Լ� - ���� �Է�

#include<stdio.h>

int main(void)
{
	int age;

	fprintf(stdout, "�� ���̼��� : ");
	fscanf(stdin, "%d", &age);

	fprintf(stdout, "%d�� �����̳׿� \n", age);
	fputs(" scanf�Լ��� �������� �Է��Լ� \n", stdout);
	fputs(" ����, �Ǽ�, ����, ���ڿ� ��� �Է� ���� \n", stdout);

	return 0;
}