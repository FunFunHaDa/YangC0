// 232_1 - ��ũ��(macro)�Լ�

// �Ϲ� �Լ�
#include<stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

int min(int x, int y)
{
	return x < y ? x : y;
}

#define P printf

int main()
{
	P(" %d, %d �� ū �� : %d \n", 20, 5, max(20, 5));
	P(" %d, %d �� ���� �� : %d \n", 20, 5, min(20, 5));

	return 0;
}