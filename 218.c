// 218 - printf�Լ� VS fprintf�Լ�

#include<stdio.h>

int main()
{
	puts(" printf�Լ� ���");

	printf(" %d, %.1f %c %s \n", 20, 3.14, 'A', "korea");
	printf(" �λ��� �� ���� �����̴�. \n");

	fprintf(stdout, "\n fprintf�Լ� ��� \n");
	fprintf(stdout, "%d, %.1f %c %s \n", 20, 3.14, 'A', "korea");

	fprintf(stdout, "�λ��� �� ���� �����̴�. \n");
	fprintf(stdout, " ����� ������ �ϴ� stdout�� �տ� ���Ϳ� \n");
	fprintf(stdout, " fputs�Լ��� �������� \n");
	fprintf(stdout, "�μ���ġ�� �޶��, fputs�Լ��� �ڿ� ������. \n");

	return 0;
}