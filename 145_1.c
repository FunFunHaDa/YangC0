// 145_1 - C��� fscanf�Լ� scanf�Լ��� ������

#include<stdio.h>

int main()
{
	int a, b;
	fputs(" scanf�Լ� - ���� �ΰ� \n", stdout);
	fprintf(stdout, " ù ��° ���� �Է� : ");
	fscanf(stdin, "%d", &a);
	
	fprintf(stdout, " �� ��° ���� �Է� : ");
	fscanf(stdin, "%d", &b);

	fprintf(stdout, " a = %d, b = %d \n", a, b);

	fputs("\n-------------------------------------\n", stdout);
	fputs(" ���� 2���� �Է¹��� ���� ���ε��� �޴°� ���ƿ� \n", stdout);
	fputs("---------------------------------------\n", stdout);
}