// 122 - C��� break��

#include<stdio.h>

int main()
{
	int i;

	puts("------------");
	puts(" continue�� ");
	puts("---------------");

	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			break;
		printf(" C���� ��Դ�. : %d \n", i);
	}

	puts("---------------");
	puts(" ������ ���� �Ǹ� ���� Ż��");
	puts(" continue���� ���Ͽ� ��������");
	puts("---------------");
}