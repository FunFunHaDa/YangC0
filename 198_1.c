// 198_1 - �����Ҵ�(malloc�Լ�, calloc, free) - ��(heap)����
// �޸� �����Ҵ�(calloc, free�Լ�)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	printf(" ó���� ������ ���� : ");
	scanf("%d", &n);

	int * p = (int*)calloc(n, sizeof(int));
	if (p == NULL)
	{
		puts(" �����Ҵ����!!!");
	}

	printf(" %d���� ���� �Է� \n\n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d]�� ° ���� : ", i);
		scanf("%d", &p[i]);
	}

	printf("\n %d�� ���� ��� \n", n);
	for (i = 0; i < n; i++)
	{
		printf(" [%d] ==> %d \n", i, p[i]);
	}

	free(p);
	return 0;
}