// 177 - tolower�Լ� - �빮�ڸ� �ҹ��ڷ� ��ȯ�Ѵ�

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char * s = "APPLE GOOGLE SAMSUNG LG SK NAVER DAUM";
	while (*s != NULL)
	{
		printf(" %c", tolower(*s));
		s++;
	}
	return 0;
}