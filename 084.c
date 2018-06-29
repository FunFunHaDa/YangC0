// 084 - 배열요소의 값 변경

#include<stdio.h>

int main()
{
	int i;
	int a[5] = { 100, 200, 300, 400, 500 };
	int n = sizeof(a) / sizeof(int);

	puts("------------------");
	puts(" 배열요소의 값 변경");
	puts("------------------");

	a[0] = 777;
	a[2] = 800;
	puts("------------------");

	for (i = 0; i < n; i++)
		printf(" a[%d] = %2d, &a[%d] = %d \n", i, a[i], i, &a[i]);
	puts("------------------");

	puts(" 배열요소는 0부터 시작합니다. ");
	puts(" element, index라고 합니다 ");
	puts("------------------");
}