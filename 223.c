// 223 - ������� (fopen�Լ�, fputs�Լ�)

// ���Ͽ� ����ϱ� fopen�Լ�

#include<stdio.h>

int main(void)
{
	FILE * fp = fopen("c:\\dd\\b.txt", "w");

	if (fp == NULL)
	{
		puts(" ���� �б� ����");
		return 1;
	}

	fputs(" ��ſ� �ݿ����̴�. \n", stdout);
	fputs(" 2018�� ������ �߰ſ���. \n", stdout);
	fputs(" ��ſ� �ݿ����̴�. \n", fp);
	fputs(" 2018�� ������ �߰ſ���. \n", fp);

	fclose(fp);
	return 0;
}