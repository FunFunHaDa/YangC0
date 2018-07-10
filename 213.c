// 213 - 비트필드 구조체(bit field structure)

// 비트필드 구조체 -1 

#include<stdio.h>

typedef struct BIT
{
	unsigned char a : 1;
	signed char b : 1;
	unsigned char c : 2;
	signed char d : 2;
}BIT;

int main()
{
	BIT bb;

	bb.a = 0;
	bb.b = 3;
	bb.c = 2;
	bb.d = 8;

	printf(" BIT = %d byte \n", sizeof(BIT));

	printf(" bb.a = %d \n", bb.a);
	printf(" bb.b = %d \n", bb.b);
	printf(" bb.c = %d \n", bb.c);
	printf(" bb.d = %d \n", bb.d);
	
	return 0;

}