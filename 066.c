// 066 - ���� ���� ���

#include<stdio.h>

int main()
{
	int score[5];
	int i, j, tmp, n; 
	n = sizeof(score) / sizeof(int);

	puts("--------------");
	puts(" ���� ����");
	puts("--------------");

	printf(" [%d]���� ���� �Է� \n", n);
	puts("--------------");

	for (i = 0; i < n; i++)
	{
		do {
			printf(" [%d]��° score�Է� :  ", i);
			scanf("%d", &score[i]);
		} while (score[i]<0 || score[i]>100);
	}

	puts(" ���");
	for (i = 0; i < n; i++)
		printf(" score[%d] = %d \n", i, score[i]);

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (score[i] > score[j])
			{
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}

	// ������ ���

	puts(" \n ������ ���");
	for (i = 0; i < n; i++)
		printf("score[%d] = %d \n", i, score[i]);
	puts("--------------");

	puts(" ������¿��� �������� �Ѿ�� ���� �ذ��ϼ���");
	puts("--------------");

	return 0;
}