// 127 - C���� ���� ���� ����

#include<stdio.h>

int main()
{
	int num1, num2;
	char op;

	printf(" ù��° �� : ");
	scanf("%d", &num1);
	while (getchar() != '\n');

	printf(" [ +, -, *, / ] : ");
	op = getchar();
	

	printf(" �ι�° �� : ");
	scanf("%d", &num2);

	if (op == '+')
		printf(" %d + %d = %d \n", num1, num2, num1 + num2);
	else if (op == '-')
		printf(" %d - %d = %d \n", num1, num2, num1 - num2);
	else if(op == '*')
		printf(" %d * %d = %d \n", num1, num2, num1 * num2);
	else if(op == '/')
		printf(" %d / %d = %d \n", num1, num2, num1 / num2);
	else
		printf(" %c �׷� �����ڴ� �����ϴ�. \a\a", op);

	puts("\n -------------------------------");
	puts(" õõ�� �ݺ��Ͽ� �ǽ��� ������. ");
	puts(" �������� ������� �����Ͽ� ������. ");
	printf(" %d + %d = %d \n", num1, num2, num1 + num2);
}