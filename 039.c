// 039 - ����ü �����

#include<stdio.h>
#include<string.h>

struct Book
{
	char title[20];
	char author[20];
	int series;
};

typedef struct Book Book;

int main(void)
{
	Book b1 = { "�¹���", "������", 10 }, b2 = { "��ġ", "�ڰ渮", 20 };
	Book tmp;

	puts("------------------------");
	puts("����ü �����");
	puts("------------------------");

	printf(" �а� ���� ���ϼҼ��� : ");
	gets(b1.title);

	printf(" �� �Ҽ��� ���ڴ� : ");
	gets(b1.author);

	printf(" �ø���� �� ���ΰ��� : ");
	scanf("%d", &b1.series);

	printf(" b1 : %10s %10s %4d \n", b1.title, b1.author, b1.series);
	puts("------------------------");

	puts(" ����ü ������� ����ü ���� ��� ������ ���� ");
	puts("------------------------");

	return 0;

	 
}