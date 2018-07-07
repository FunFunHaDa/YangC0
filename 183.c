// 183 - atoi함수 - 문자열을 정수로 변환한다

#include<stdio.h>
#include<string.h>

int main(void)
{
	printf(" 555 = %d \n", atoi("555"));
	printf(" 345 = %d \n", atoi("345"));
	printf(" ace = %d \n", atoi("ace")); // 비정상이면 0을 리턴

	return 0;
}