// 070 - ���ڿ� ���� ���

#include<stdio.h>
#include<string.h>

int main()
{
	char city[5][10];
	char tmp[10];
	int i, j, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("-------------");
	puts(" ���ڿ� ����");
	puts("-------------");

	// 1. �Է�
	printf(" ��� ���� ���� [%d] �� �Է� \n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d]��° ���� : ", i);
		// while (getchar() != '\n');
		gets(city[i]);
	}
	puts("-------------");


	// 2. ���� ���
	puts(" \n ���� ���");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("-------------");

	// 3. ���� ����
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(city[i], city[j]) > 0)
			{
				strcpy(tmp, city[i]);
				strcpy(city[i], city[j]);
				strcpy(city[j], tmp);
			}
		}
	}
	puts("-------------");

	// 4. ������ ���
	puts(" \n ������ ���");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("-------------");
	puts(" ��������� �ȵǸ� �����ϰ� �Ѿ�� ������");
	puts("-------------");
}