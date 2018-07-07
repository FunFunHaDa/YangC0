// 196 - 메모리구조 이해하기(stack, data, heap)

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "africa";	// stack 영역
	char * k = "korea";		// data 영역

	char * p = (char*)malloc(strlen("poland") + 1);
	strcpy(p, "poland");	// heap 영역

	printf(" %s, 주소 a = %d \n", a, a);
	printf(" %s, 주소 &k = %d, 값 = %d \n", k, &k, k);
	printf(" %s, 주소 &p = %d, 값 = %d \n", p, &p, p);
	// a, k, p는 모두 변수에 해당하기에 stack영역에 있음

	free(p);
	return 0;
}