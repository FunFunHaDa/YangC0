// 236 - ���� 2���� �迭�� �ʱ�ȭ

#include<stdio.h>

int main(void)
{
	int a[2][3] = { 0 };
	int aa[2][3];
	int b[][3] = { 1, 2, 3, 4, 5, 6 };

	int i, j;

	puts(" �迭 a ���");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf(" a[%d][%d] = %d  \n", i, j, a[i][j]);

	puts("\n �迭aa ��� ");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf(" aa[%d][%d] = %d  \n", i, j, aa[i][j]);

	puts("\n �迭 b ���");
		for (i = 0; i < 2; i++)
			for (j = 0; j < 3; j++)
				printf(" b[%d][%d] = %d  \n", i, j, b[i][j]);

		return 0;
}