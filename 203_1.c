// 203_1 - �迭���� �Լ��� �μ��� ���޵� ��

// �����迭�� �Լ��� �μ��� ���� (�迭�� ��°�� ����Ǵ°� �ƴϴ�.)

#include<stdio.h>

void Display(int x[5])
{
	int i; 
	puts("\n ====> Display �Լ�");
	printf(" x = %d byte \n", sizeof(x)); // 4����Ʈ
}

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int n = sizeof(a) / sizeof(int);
	int * p = a;

	printf(" int a[5], sizeof(a) ==> %d byte \n", sizeof(a));
	printf(" int * p, sizeof(p) ==> %d byte \n", sizeof(p));

	Display(a);
	return 0;
}