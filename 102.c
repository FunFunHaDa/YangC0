// 102 - ���ڿ� ����

#include<stdio.h>
#include<string.h>

int main()
{
	char town[5][10];
	char tmp[10];
	int i, j, n;
	n = sizeof(town) / sizeof(char[10]);

	puts("----------------");
	puts(" ���ڿ� ����");
	puts("----------------");

	// 1 �Է�
	printf(" ��� ���� ���� [%d]���� �Է� \n", n);
	puts("----------------");
	for (i = 0; i < n; i++)
	{
		printf(" [%d]��° ���̸� : ", i);
		gets(town[i]);
	}
	puts("----------------");

	// 2. ���� ���
	puts("\n ���� ���");
	for (i = 0; i < n; i++)
		printf(" town[%d] ==> %s \n", i, town[i]);
	puts("----------------");

	// 3. ��ǰ����(Bubble sort)
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(town[j], town[j + 1]) > 0)
			{
				strcpy(tmp, town[j]);
				strcpy(town[j], town[j + 1]);
				strcpy(town[j + 1], tmp);
			}
		}
	}

	// 4. ������ ���
	puts(" \n ������ ���");
	for (i = 0; i < n; i++)
		printf(" town[%d] ==> %s \n", i, town[i]);
	puts("----------------");

	puts(" ��������� �ȵǸ� �����ϰ� �Ѿ�� ������");
	puts("----------------");
}