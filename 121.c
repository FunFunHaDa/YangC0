// 121 - C���α׷� continue��

#include<stdio.h>

int main()
{
	int i; 
	
	puts("---------------");
	puts(" continue�� ");
	puts("---------------");

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf(" C���� ��մ�. : %d \n", i);
	}

	puts("---------------");
	puts(" ������ ���� �Ǹ� �ǳʶڴ�. skip");
	puts(" break���� ���Ͽ� ��������");
	puts("---------------");
}