// 030 - 정수 자동형변환

#include<stdio.h>

int main(void)
{
	int a = 35;
	int b = 45.78;

	puts("-------------------");
	puts(" 자동형 변환 - 정수");
	puts("-------------------");

	printf(" a = %d, b = %d \n", a, b);
	puts("-------------------");

	puts(" 45.78은 자동으로 int형으로 바뀝니다.");
	puts(" C언어에서는 데이터보다 자료형이 중요합니다.");
	puts("-------------------");

	return 0;
}