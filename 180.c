// 180 - ispunct함수 - 구두문자인지 구분한다
// 구두문자 *, &, ^, # 등 숫자와 문자를 제외한 문자들을 의미

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char *s = "A%^B#!C&~";

	while (*s != NULL)
	{
		printf(ispunct(*s) ? "%c는 구두문자 \n" : "%c는 구두문자 아님 \n", *s);
		s++;
	}
	return 0;
}