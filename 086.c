// 086 - �����迭�� �ʱ�ȭ

#include<stdio.h>

int main()
{
	int i;
	int a[5] = { 0, };
	int n = sizeof(a) / sizeof(int);

	puts("------------------");
	puts(" �����迭�� �ʱ�ȭ");
	puts("------------------");

	puts("------------------");
	for (i = 0; i < n; i++)
		printf(" a[%d] = %2d, &a[%d]] = %d \n", i, a[i], i, &a[i]);
	puts("------------------");

	puts("0�̳� 0, �� ���� ǥ���Դϴ�. ");
	puts("------------------");
	return 0;
}