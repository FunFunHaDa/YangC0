// 208 - ���ڿ� ����(�迭�� �������� ����)

// ���ڿ� ����(�迭)

#include<stdio.h>
#include<string.h>

int main()
{
	char name[5][10];
	int i, j, n;
	char tmp[10];
	n = sizeof(name) / sizeof(char[10]);

	printf(" [%d] ���� �̸� �Է� \n", n);

	for (i = 0; i < n; i++)
	{
		printf(" [%d]��° �̸� : ", i);
		fgets(name[i], sizeof(char[10]), stdin);
		name[i][strlen(name[i]) - 1] = 0;
	}

	puts(" \n �������");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]��° �̸� ==> %s \n", i, name[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(name[j], name[j + 1]) > 0)
			{
				strcpy(tmp, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], tmp);
			}
		}
	}

	puts(" \n ������");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]��° �̸� ==> %s \n", i, name[i]);
	}
	return 0;
}