// 225 - time �Լ�

// time �Լ�

#include<stdio.h>

int main()
{
	time_t t;

	t = time(NULL);

	printf(" 1970��1��1�� �������� �귯�� �ð� : %u \n", t);
	return 0;
}