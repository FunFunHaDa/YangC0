// 089 - ���� ����

#include<stdio.h>

int main()
{
	int ani[5] = { 7200, 4500, 8500, 3300, 2700 };
	int i, j, tmp;
	int n = sizeof(ani) / sizeof(int);

	puts("---------------");
	puts(" ���� ����");
	puts("---------------");

	puts(" �� �� �� ��");
	puts("---------------");
	for (i = 0; i < n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (ani[i] > ani[j])
			{
				tmp = ani[i];
				ani[i] = ani[j];
				ani[j] = tmp;
			}
		}
	}

	puts(" \n �ø�����");
	puts("---------------");
	for (i = 0; i < n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);
	puts("---------------");

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (ani[j] < ani[j + 1])
			{
				tmp = ani[j];
				ani[j] = ani[j + 1];
				ani[j + 1] = tmp;
			}
		}
	}

	puts(" \n ��������");
	puts("---------------");
	for (i = 0; i < n; i++)
		printf(" ani[%d] = %d \n", i, ani[i]);
	puts("---------------");

	puts(" ���� ���⿡ ���� ��������, �������� ����");
	puts("---------------");
}