// 100 - ���� 2���� �迭

#include<stdio.h>

int main()
{
	int i, n; 
	char sports[5][10] = { "�� ��", "�� ��", "�� ��", "Ź ��", "�� ��" };
	n = sizeof(sports) / sizeof(char[10]);

	puts("-----------------");
	puts(" ���� 2���� �迭");
	puts("-----------------");

	printf(" sports = %d, size = %d byte \n", sports, sizeof(sports));
	puts("-----------------");

	for (i = 0; i < n; i++)
		printf(" sports[%d] = %s, addr = %d \n", i, sports[i], sports[i]);
	
	puts("-----------------");
	puts(" �迭���� �����ּҸ� ���� ���");
	puts(" ������ ���� ��� ���� �� �迭");
	puts(" �迭�� �迭 ==> 2���� �迭");
	puts("-----------------");
}