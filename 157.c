// 157 - 문자열의 길이 - strlen함수 sizeof와 비교

#include<stdio.h>
#include<string.h>

int main(void)
{
	printf(" sizeof = %d byte \n", sizeof("porgram"));
	printf(" strlen = %d 개\n", strlen("program"));

	return 0;
}