// 220_1 - gets�Լ� VS fgets�Լ�

// fgets�Լ�

#include<stdio.h>
#include<string.h>

int main(void)
{
	char it[20];

	fprintf(stdout, " �ٹ��ϰ� ���� itȸ��� : ");
	fgets(it, sizeof(it), stdin);
	it[strlen(it)-1] = '\0';
	fprintf(stdout, " \n %s ������ \n", it);
	return 0;
}