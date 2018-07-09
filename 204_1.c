// 204_1 - 버블소트(Bubble Sort) :: 선택정렬이 가장 쉬워요

// 버블소트(Bubble Sort) - 함수로 분리

#include<stdio.h>

void Display(int *x, int _num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < _num; i++)
	{
		printf(" [%d]번째 용돈 ==> 한단에 %d 만원 \n", i, *(x + i));
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

	Display(Pmoney, n, "원본출력");
	Bubblesort(Pmoney, n);
	Display(Pmoney, n, "\n 정렬후 출력");

	return 0;
}