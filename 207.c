// 207 - ���ڿ� �±�ȯ(�迭�� �������� ����)

// ���ڿ� ����, �±�ȯ

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[10] = "�߽ż�";
	char b[10] = "������";
	char t[10];

	printf(" �� �� a = %s, b = %s \n", a, b);

	strcpy(t, a);
	strcpy(a, b);
	strcpy(b, t);

	printf(" ��ȯ�� a = %s, b = %s \n", a, b);
	return 0;
}

