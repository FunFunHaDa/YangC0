// 203_3 - �迭���� �Լ��� �μ��� ���޵� ��

// �����迭�� �Լ��� �μ��� ���� __�������
// �迭�� ������ �Բ� �ѱ��.

#include<stdio.h>
void Display(int x[5], int num)
{
	int i;
	puts("\n ====> Display �Լ�");

	for (i = 0; i < num; i++)
	{
		printf(" *(x+%d) ==> %d �ּ� ==> %d \n", i, *(x + i), x + i);
	}

	puts(" �ذ� - �迭�� ������ �Բ� �ѱ��. ");
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);

	Display(a, n);
	return 0;
}