// 204_1 - �����Ʈ(Bubble Sort) :: ���������� ���� ������

// �����Ʈ(Bubble Sort) - �Լ��� �и�

#include<stdio.h>

void Display(int *x, int _num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < _num; i++)
	{
		printf(" [%d]��° �뵷 ==> �Ѵܿ� %d ���� \n", i, *(x + i));
	}
}

void Bubblesort(int * x, int _num)
{
	int i, j, tmp;

	for (i = 0; i < _num - 1; i++)
	{
		for (j = 0; j < _num - 1 - i; j++)
		{
			if (*(x + j) > *(x + j + 1))
			{
				tmp = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = tmp;
			}
		}
	}
}

int main()
{
	int Pmoney[10] = { 30, 90, 20, 25, 50, 40, 80, 75, 35, 45 };
	int  n = sizeof(Pmoney) / sizeof(int);

	Display(Pmoney, n, "�������");
	Bubblesort(Pmoney, n);
	Display(Pmoney, n, "\n ������ ���");

	return 0;
}