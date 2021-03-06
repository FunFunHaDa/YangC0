// 199 - 구조체 동적할당(malloc, free함수)
// 패딩바이트, int형 멤버, 4바이트 단위로 잘름

#include<stdio.h>
#include<stdlib.h>

typedef struct Book
{
	char BookTitle[20];
	char BookAuthor[30];
	int pages;
}Book;

int main()
{
	Book b = { "정글만리", "조정래", 2030 };
	Book *p = (Book*)malloc(sizeof(Book));

	if (p == NULL)
	{
		puts(" 동적할당실패!!!");
	}

	printf(" b = %d byte, &b = %d \n", sizeof(b), &b);
	printf(" %s, %s, %d pages \n", b.BookTitle, b.BookAuthor, b.pages);
	
	*p = b;
	printf(" %s, %s, %d pages \n", p->BookTitle, p->BookAuthor, p->pages);

	printf(" p = %d byte, &p = %d, p = %d \n", sizeof(p), &p, p);
	printf(" p 가 가리키고 있는 힙영역의 번지 = %d \n", p);
	free(p);
	return 0;
}