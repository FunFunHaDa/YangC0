// 158 - ���ڿ�����(strcpy)�Լ� - ���ڿ��� �±�ȯ

#include<stdio.h>
#include<string.h>

int main(void)
{
	char k[6] = "korea";
	char j[6] = "japan";
	char tmp[6];

	printf(" ������ k = %s, j = %s \n\n", k, j);

	strcpy(tmp, k);
	strcpy(k, j);
	strcpy(j, tmp);

	printf(" ������ k = %s, j = %s \n", k, j);
	return 0;
}