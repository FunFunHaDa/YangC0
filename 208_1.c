// 208_1 - ���ڿ� ����(�迭�� �������� ����)

// ���ڿ� ����(������)

#include<stdio.h>
#include<string.h>

int main()
{
	char * name[5] = { "������", "�߽ż�", "�ں�ȣ", "������", "����ȯ" };
	int i, j, n;
	char * tmp;
	n = sizeof(name) / sizeof(char*);

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
				tmp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = tmp;
			}
		}
	}

	puts(" ������");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]��° �̸� ==> %s \n", i, name[i]);
	}

	return 0;
}