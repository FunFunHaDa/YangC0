// 222 - ����ö�� fopen�Լ�

// ���� �о���� fopen�Լ�

#include<stdio.h>

int main(void)
{
	char c = 0;

	FILE* fp = fopen("C:\\dd\\a.txt", "r");

	if (fp == NULL)
	{
		puts(" ���� ���� ���� !");
		return 1;
	}

	while (c != EOF)	// End of file
	{
		c = fgetc(fp);
		putchar(c);
	}
	fclose(fp);

	return 0;
}

