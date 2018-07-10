// 213_1 - ��Ʈ�ʵ� ����ü(bit field structure)

// ��Ʈ�ʵ� ����ü -2

#include<stdio.h>

typedef struct BIT
{
	unsigned char a : 1;
	signed char b : 1;
	unsigned char c : 2;
	signed char d : 2;
}BIT;

typedef struct BIT2
{
	unsigned char a;
	signed char b;
	unsigned char c;
	signed char d;
}BIT2;

int main()
{
	BIT bb;

	printf(" BIT = %d byte \n", sizeof(BIT));
	printf(" BIT2 = %d byte \n", sizeof(BIT2));

	return 0;
}