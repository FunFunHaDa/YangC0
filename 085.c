// 085 - 배열명은 변수가 아니다

#include<stdio.h>

int main()
{
	int i; 
	int a[5] = { 100, 200, 300, 400, 500 };
	int n = sizeof(a) / sizeof(int);

	puts("------------------");
	puts(" 배열명은 변수가 아니다. ");
	puts("------------------");

	// a = 777;

	for (i = 0; i < n; i++)
		printf(" a[%d] = %2d, &a[%d] = %d \n", i, a[i], i, &a[i]);
	puts("------------------");

	puts(" 배열명은 변수가 아니다 ");
	puts(" 배열명에는 값을 대입할 수 없다 ");
	puts("------------------");

	return 0;
}