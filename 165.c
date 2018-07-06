// 165 - Selection_sort(선택정렬)

#include<stdio.h>
#define ARRAY_SIZE 10

void Output(int x[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf(" #%d = %d \n", i, x[i]);
}

SelectionSrot(int x[], int n)
{
	int i, j, tmp, min;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (x[j] < x[min])
			{
				min = j;
			}
			tmp = x[i];
			x[i] = x[min];
			x[min] = tmp;
		}
	}
}

int main()
{
	int a[ARRAY_SIZE] = { 65, 25, 45, 35, 55, 15, 95, 5, 85, 75 };

	puts(" 원본출력");
	Output(a, ARRAY_SIZE);

	SelectionSrot(a, ARRAY_SIZE);
	puts("\n Selection_Sort");
	Output(a, ARRAY_SIZE);

	return 0;
}