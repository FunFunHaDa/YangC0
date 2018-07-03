// 103 - ���հ� ���� - ����ü ����

#include<stdio.h>
#include<string.h>

struct Tv
{
	char bcast[20];
	int chan;
};
typedef struct Tv Tv;

int main()
{
	Tv t[5] = { {"YTN", 25}, {"SBS", 6}, {"EBS",13}, {"MBC", 11}, {"KBS", 9} };
	int i, j, n;
	Tv tmp;
	n = sizeof(t) / sizeof(Tv);

	puts("-------------");
	puts(" ����ü ����");
	puts("-------------");

	// 1. ���� ���		
	puts(" ���� ���");
	puts(" T V");
	puts("-------------");
	for (i = 0; i < n; i++)
		printf(" [%d]�� %s ==> %2d�� \n", i + 1, t[i].bcast, t[i].chan);
	puts("-------------");

	// 2. ��۱��� ����		
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(t[j].bcast, t[j + 1].bcast) > 0)
			{
				tmp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tmp;
			}
		}
	}

	// 3. ��۱��� ���

	puts(" ��۱���");
	puts(" TV");
	puts("-------------");
	for (i = 0; i < n; i++)
		printf(" [%d]�� %s ==> %2d�� \n", i + 1, t[i].bcast, t[i].chan);
	puts("---------------\n");

	// 4. ä�μ� ����
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (t[j].chan > t[j + 1].chan)
			{
				tmp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = tmp;
			}
		}
	}

	// 5. ä�μ� ���
	puts(" ä�μ� ���");
	puts(" TV");
	puts("-------------");
	for (i = 0; i < n; i++)
		printf(" [%d]�� %s ==> %2d�� \n", i + 1, t[i].bcast, t[i].chan);
	puts("-------------");

	puts(" �ܿ���� ���� ����, �׳� �ݺ��ϼ���");
	puts("-------------");
}