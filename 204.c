// 204 - 버블소트(Bubble Sort) :: 선택정렬이 가장 쉬워요

#include<stdio.h>

int main()
{
	int Pmoney[10] = { 30, 90, 20, 25, 50, 40, 80, 75, 35, 45 };
	int n = sizeof(Pmoney) / sizeof(int);
	int i, j, tmp;

	puts(" 원본출력");
	for (i = 0; i < n; i++)
	{
		printf(" Pmoney[%d] ==> %d \n", i, Pmoney[i]);
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (Pmoney[j] > Pmoney[j + 1])
			{
				tmp = Pmoney[j];
				Pmoney[j] = Pmoney[j + 1];
				Pmoney[j + 1] = tmp;
			}
		}
	}

	puts(" \n 정렬후 출력");
	for (i = 0; i < n; i++)
	{
		printf(" Pmoney[%d] ==> %3d만원 \n", i, Pmoney[i]);
	}

	return 0;
}