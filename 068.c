// 068 - ���忭 �迭�� �����

#include<stdio.h>
#include<string.h>

int main()
{
	char city[5][10];
	int i, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("-------------------------");
	puts(" ���ڹ迭�� �����");
	puts("-------------------------");

	// 1. �Է�
	printf(" ��� ���� ���� [%d] �� �Է� \n", n);
	for (i = 0; i < n; i++)
	{
		printf("[%d]��° ���� : ", i);
		//while (getchar() != '\n');
		gets(city[i]);
	}

	// 2. ���
	puts(" ���");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("-------------------------");

	puts(" char[10]�� 5�� ���� 2���� �迭�Դϴ�. ");
	puts("-------------------------");
	return 0;
}