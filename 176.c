// 176 - toupper�Լ� - �ҹ��ڸ� �빮�ڷ� ��ȯ�Ѵ�

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char* s = "linux programming";

	while (*s != NULL)
	{
		printf("%c", toupper(*s));
		s++;
	}
	return 0;
}