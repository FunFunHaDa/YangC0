// 202_2 - �迭�� �������� ��������

// �����迭�� �������� ����

#include<stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	int i, j; 
	int *p = a;

	printf(" a = %d, p = %d \n\n", a, p);

	for (i = 0; i < n; i++)
	{
			printf(" a[%d] ==> %d �ּ� ==> %d \n", i, a[i], &a[i]);
	}
	puts("\n");

	for (i = 0; i < n; i++)
	{
		printf(" p[%d] ==> %d �ּ� ==> %d \n", i, p[i], &p[i]);
	}
	puts("\n");

	for (i = 0; i < n; i++)
	{
		printf(" *(a+%d) ==> %d �ּ� ==> %d \n", i, *(a + i), a + i);
	}
	puts("\n");

	for (i = 0; i < n; i++)
	{
		printf(" *(p+%d) ==> %d �ּ� ==> %d \n", i, *(p + i), p + i);
	}
	return 0;


}