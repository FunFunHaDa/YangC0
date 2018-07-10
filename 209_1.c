// 209_1 - ���ڿ� ���� :: �����Ʈ(bubble sorting) �˰���

// ���ڿ� ����(������) - �Լ��� ó��

#include<stdio.h>
#include<string.h>

void DisplayName(char** x, int _num, char* message)
{
	int i;
	puts(message);
	for (i = 0; i < _num; i++)
	{
		printf(" [%d]��° �̸� ==> %s \n", i, *(x + i));
	}
}

void BubbleSort(char**x, int _num)
{
	int i, j;
	char * tmp;

	for (i = 0; i < _num - 1; i++)
	{
		for (j = 0; j < _num - 1 - i; j++)
		{
			if (strcmp(*(x + j), *(x + j + 1)) > 0)
			{
				tmp = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = tmp;
			}
		}
	}

	DisplayName(x, _num, "\n ������");
}

int main()
{
	char * name[5] = { "������", "���߱�", "���ù�", "�跡��", "������" };
	int n = sizeof(name) / sizeof(char*);

	DisplayName(name, n, "�������");
	BubbleSort(name, n);

	return 0;
}