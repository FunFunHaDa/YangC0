// 202_1 - �迭�� �������� ��������

// �����迭�� �������� ����

#include<stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	int i;
	int * p = a;

	printf(" a = %d, p = %d \n\n", a, p);
	for (i = 0; i < n; i++)
	{
		printf(" a[%d] ==> %d �ּ� ==> %d \n", i, a[i], &a[i]);
	}

	return 0;
	
}