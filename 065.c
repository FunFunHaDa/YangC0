// 065 - ���� ����(���� ����)

#include<stdio.h>

int main()
{
	int a[] = { 65, 25, 45, 35, 55 };
	int  i, j, tmp, n;
	n = sizeof(a) / sizeof(int);

	puts("--------------");
	puts(" ���� ����");
	puts("--------------");

	puts(" �� �� �� ��");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	puts(" \n ������ ���");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %d \n", i, a[i]);
	puts("--------------");

	puts(" ���� ���⿡ ���� ��������, �������� ����");
	puts("--------------");

	return 0;
}