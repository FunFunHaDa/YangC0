// 151 - ���������� ��������
#include<stdio.h>

int g1, g2, g3;
int main(void)
{
	int a, b, c;
	puts(" ���������� �������� \n");

	printf(" �������� g1 = %d, &g1 = %d \n", g1, &g1);
	printf(" �������� g2 = %d, &g2 = %d \n", g2, &g2);
	printf(" �������� g3 = %d, &g3 = %d \n", g3, &g3);
	
	printf("\n �������� a = %10d, &a = %d \n", a, &a);
	printf(" �������� b = %10d, &b = %d \n", b, &b);
	printf(" �������� c = %10d, &c = %d \n\n", c, &c);

	puts(" �ּ��� �뿪�� �ٸ��ϴ�. ");
	puts(" ���������� �����Ϳ����� �������ϴ�. ");
	puts(" ���������� ���ÿ����� �������ϴ�. ");
	puts(" �ʱ�ȭ���� ������ ���������� 0, ���������� �����Ⱚ");
	return 0;
}