// 231 - const����� macro���

#include<stdio.h>
#define MAX 10
#define P printf

int main()
{
	const int num = 5;
	int i;

	for (i = 0; i < MAX; i++)
	{
		P(" i = %d, ���α׷��� ��մ� \n", i);
	}

	putchar('\n');
	for (i = 0; i < num; i++)
	{
		P("i = %d, ���α׷����� ���� ��մ� \n", i);
	}

	return 0;
}