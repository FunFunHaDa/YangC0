// 162 - ���ڿ��� ��ū���� �и� - strtok�Լ�

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "My.Name is - FunFun,HaDa";
	char * tok;

	printf(" S = %s \n", s);
	tok = strtok(s, "  ,.-");

	while (tok != NULL)
	{
		printf(" %s \n", tok);
		tok = strtok(NULL, " ,.-");
	}

	return 0;
}