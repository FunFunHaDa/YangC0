// 200 - malloc�Լ� ��(heap)������ �Ҵ�� ũ�� Ȯ�� _msize

// ���� �Ҵ�� �޸� Ȯ���ϱ�
#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

typedef struct Book
{
	char BookTitle[20];
	char BookAuthor[30];
	int pages;
}Book;

int main()
{
	char * cp = (char*)malloc(sizeof(char) * 30);
	int * ip = (int*)malloc(sizeof(int) * 10);
	double * dp = (double*)malloc(sizeof(double) * 5);
	Book * bp = (Book*)malloc(sizeof(Book) * 5);

	// heap�������� �Ҵ� ���� �޸��� ũ��
	printf(" cp�� �Ҵ�� �޸𸮴� %d byte \n", _msize(cp));
	printf(" ip�� �Ҵ�� �޸𸮴� %d byte \n", _msize(ip));
	printf(" dp�� �Ҵ�� �޸𸮴� %d byte \n", _msize(dp));
	printf(" bp�� �Ҵ�� �޸𸮴� %d byte \n", _msize(bp));
	
	printf(" ����ü Book = %d byte \n", sizeof(Book));

	return 0;
}


