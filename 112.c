// 112 - ���� for��

#include<stdio.h>

int main()
{
	int i, j;
	puts(" --------------------");
	puts(" ���� for��");
	puts(" --------------------");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf(" i = %d, j = %d j�� �ݺ�\n", i, j);
		}
		printf(" 1�� �ݺ� = %d \n", i);
	}

	puts(" --------------------");
	puts(" i�� j�� ��ȭ�� ���Ǳ��� ������");
	puts(" ���� ���ϴ� ���� ���� ����");
	puts(" õõ�� ���� ���� �ٱ��� ����");

}