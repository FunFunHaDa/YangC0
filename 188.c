// 188 - strtol함수 - 숫자문자열을 long형으로 변환한다
// 숫자로된 문자열을 long으로 변환
// 진수 지정 가능 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf(" 16진수 1000 = 10진수 = %d \n", strtol("1000", NULL, 16));
	printf(" 10진수 1000 = 10진수 =%d \n", strtol("1000", NULL, 10));
	printf(" 8진수 1000 = 10진수 = %d \n", strtol("1000", NULL, 8));
	printf(" 2진수 1000 = 10진수 = %d \n", strtol("1000", NULL, 2));

	return 0;
}