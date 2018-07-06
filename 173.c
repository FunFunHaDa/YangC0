// 173 - islower함수 - 문자가 소문자인지 확인

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	printf(islower('a') ? "%c는 소문자 \n" : "%c은 소문자 아님 \n", 'a');
	printf(islower('b') ? "%c는 소문자 \n" : "%c은 소문자 아님 \n", 'b');
	printf(islower('F') ? "%c는 소문자 \n" : "%c은 소문자 아님 \n", 'F');
	printf(islower('L') ? "%c는 소문자 \n" : "%c은 소문자 아님 \n", 'L');
	printf(islower('$') ? "%c는 소문자 \n" : "%c은 소문자 아님 \n", '$');
	return 0;
}