// 199_1 - ����ü �����Ҵ�(malloc, free�Լ�)
// �е�����Ʈ, int�� ���, 4����Ʈ ������ �߸�
// �е�����Ʈ ���ֱ�

#include<stdio.h>
#pragma pack(1)

typedef struct Book
{
	char BookTitle[20];
	char BookAuthor[30];
	int pages;
}Book;

int main()
{
	Book b = { "���۸���", "������", 2030 };
	printf(" #pragma pack(1) ���� �� b = %d byte \n", sizeof(b));

	return 0;
}

