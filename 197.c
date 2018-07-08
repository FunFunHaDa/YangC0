// 197 - 메모리 동적할당(malloc, free함수)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 10;
	int * p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		puts(" 동 적 할 당 실 패 !!! ");
	}

	*p = 50;

	printf(" a = %d, 주소 &a = %d \n", a, &a);
	printf(" p = %d, 주소 &p = %d \n", p, &p);
	printf(" p 가 가리키는 값 = %d \n", *p);

	free(p);
	return 0;
}