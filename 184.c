// 184 - atof함수 - 문자열을 실수로 변환한다

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf(" 555.555 = %.2f \n", atof("555.555"));
	printf(" 33.666 = %.2f \n", atof("33.666"));
	printf(" 123.123 = %.2f \n", atof("123.123"));
	printf(" abcde = %f \n", atof("abcde"));

	return 0;
}