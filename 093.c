// 093 - ���ڿ��� ���� ���ϱ�

#include<stdio.h>
#include<string.h>

int main()
{
	puts("------------------------");
	puts(" ���ڿ��� ���� ���ϱ�");
	puts("------------------------");

	printf(" �޸� �Ҵ� : %d byte \n", sizeof("linux"));
	printf(" ���ڿ��� ���� : %d byte \n", strlen("linux"));
	puts("------------------------");

	puts(" sizeof�� �޸��Ҵ� ũ�⸦ ��Ÿ���� ");
	puts(" strlen�Լ��� NULL���ڸ� ������ ������ ���ڿ��� ���̸� ��Ÿ���� ");
	puts("------------------------");
}