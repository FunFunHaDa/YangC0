// 069 - ���ڿ� ����

#include<stdio.h>
#include<string.h>

int main()
{
	char city[5][10] = { "�� ��", "�� ��", "â ��", "�� ��", "�� ��" };
	char tmp[10];
	int i, j, n;
	n = sizeof(city) / sizeof(char[10]);

	puts("-------------");
	puts(" ���ڿ� ����");
	puts("-------------");

	puts(" \n ���� ���");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);

	for (i = 0; i < n - 1; i++)
	{
		for (j = i+1; j < n ; j++)
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

	// 3. ���� �� ���
	puts(" \n ������ ���");
	for (i = 0; i < n; i++)
		printf(" city[%d] ==> %s \n", i, city[i]);
	puts("-------------");
	puts(" strcmp�� ���ڿ� ���Լ�, strcpy�� ���ڿ� ����");
	puts("-------------");

	return 0;
}
