// 096 - ���ڿ��� ����

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "pine";

	puts("------------------");
	puts(" ���ڿ��� ����");
	puts("------------------");

	printf(" a = %s \n", a);
	strcat(a, "apple");
	printf(" ������ a = %s \n", a);
	puts("------------------");

	puts(" ���ڿ��� ������ ���� strcat�����Լ��� ����Ѵ� ");
	puts(" C���� string�̶�� �ڷ����� ���� ");
	puts("------------------");
}