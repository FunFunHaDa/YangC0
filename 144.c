// 144 - C��� fgets�Լ��� gets�Լ��� ������

#include<stdio.h>

int main()
{
	char it[20];
	fputs(" fgets �Լ� \n", stdout);
	fprintf(stdout, "�ٹ��ϰ� ���� itȸ��� : ");
	// gets(it);
	fgets(it, sizeof(it), stdin);
	fprintf(stdout, "\n %s. ���� �� ȸ�� ���� �;��. \n", it);

	fputs("\n--------------------\n", stdout);
	fputs(" gets�Լ� ���� \n", stdout);
	fputs(" ----------------\n", stdout);
}