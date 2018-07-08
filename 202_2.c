// 202_2 - 배열과 포인터의 관계이해

// 정수배열과 포인터의 관계

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
			printf(" a[%d] ==> %d 주소 ==> %d \n", i, a[i], &a[i]);
	}
	puts("\n");

	for (i = 0; i < n; i++)
	{
		printf(" p[%d] ==> %d 주소 ==> %d \n", i, p[i], &p[i]);
	}
	puts("\n");

	for (i = 0; i < n; i++)
	{
		printf(" *(a+%d) ==> %d 주소 ==> %d \n", i, *(a + i), a + i);
	}
	puts("\n");

	for (i = 0; i < n; i++)
	{
		printf(" *(p+%d) ==> %d 주소 ==> %d \n", i, *(p + i), p + i);
	}
	return 0;


}