// 139 - C��� fgets�Լ�

#include<stdio.h>

int main()
{
	char country[10];
	puts(" fgets �Լ� ");

	printf(" �����ϰ� �� ����� : ");
	fgets(country, sizeof(country) - 1, stdin);

	printf(" %s �Բ� ����. \n", country);

	puts("\n-----------------------------------");
	puts(" fgets�Լ��� ���ڿ� �Է� ���� �Լ�");
	puts(" �迭���̺��� ��� �Է��� �ص� size��ŭ�� �о��");
	puts(" �ٸ� �޸𸮸� ħ������ �ʾƿ� ");
	puts(" �������� �ȴ�ϴ�. ");

	puts(" �����ϸ� NULL�� ����������. ");
	puts("-----------------------------------");
}