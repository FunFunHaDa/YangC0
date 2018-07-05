// 163 - 문자열에서 임의의 문자 위치 찾기 - strchr 함수

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "My Name is FunFunHaDa";
	printf(" 원본 = %s \n\n", s);
	printf(" Y를 찾고 = %s \n", strchr(s, 'Y'));
	printf(" M를 찾고 = %s \n", strchr(s, 'M'));
	printf(" F를 찾고 = %s \n", strchr(s, 'F'));
	
	return 0;
}