// 076 - ����ü ������

#include<stdio.h>
#include<string.h>

struct Lunch
{
	char menu[20];
	int price; 
};

typedef struct Lunch Lunch;

int main()
{
	Lunch lun1 = { "�ܹ���", 4000 }, lun2 = { "���", 8000 };
	Lunch tmp;

	puts("--------------------");
	puts(" ����ü �±�ȯ");
	puts("--------------------");

	puts(" �� �� ��");
	puts("--------------------");
	printf(" lun1 : %s ==> %d�� \n", lun1.menu, lun1.price);
	printf(" lun2 : %s ==> %d�� \n", lun2.menu, lun2.price);
	puts("--------------------\n");

	strcpy(lun1.menu, "������");
	lun2.price = 9900;

	puts(" �� �� ��");
	puts("--------------------");
	printf(" lun1 : %s ==> %d�� \n", lun1.menu, lun1.price);
	printf(" lun2 : %s ==> %d�� \n", lun2.menu, lun2.price);
	puts("--------------------");

	puts(" ����ü�±�ȯ�� ����� ������ �ٸ���");
	puts("--------------------");
	return 0;
}