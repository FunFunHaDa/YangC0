// 160 - ���ڿ� ã��(strstr)�Լ� 

#include<stdio.h>
#include<string.h>

int main(void)
{
	char st[] = "qwertuiopasdfghjklzxcvbnm";

	printf(" ���� = %s \n\n", st);
	printf(" %s \n", strstr(st, "kl"));

	return 0;
}