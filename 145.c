// 145 - C��� fscanf�Լ� scanf�Լ��� ������

#include<stdio.h>

int main()
{
	int age;
	fputs(" fscanf�Լ� - ���� \n", stdout);
	fprintf(stdout, "�� ���̼��� : ");
	fscanf(stdin, "%d", &age);
	fprintf(stdout, " %d��. �����̳׿� \n", age);
	
	fputs("\n-------------------------------------\n", stdout);
	fputs(" scanf�Լ��� �������� �Է��Լ� \n", stdout);
	fputs(" ����, �Ǽ�, ����, ���ڿ� ��� �Է� ���� \n", stdout);
	fputs("-------------------------------------\n", stdout);
}