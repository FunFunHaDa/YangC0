// 206 - ���ڿ� �Է�(fgets�Լ� �̿�)

// ���ڿ� �Է�

#include<stdio.h>
int main()
{
	char name[10];

	printf(" �̸��� �Է��ϼ��� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = 0;

	printf(" %s�Թݰ����ϴ�. ", name);

	return 0;
}