// 072 - ����ü �迭�� �����

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
	Lunch lun[5];
	int i, n; 
	n = sizeof(lun) / sizeof(Lunch);

	puts("------------------------");
	puts(" ����ü �迭�� �����");
	puts("------------------------");

	printf(" [%d]���� ��ܸԴ� ���� �޴� �Է� \n", n);
	puts("------------------------");

	for (i = 0; i < n; i++)
	{
		printf(" [%d] ��° �޴� : ", i + 1);
		gets(lun[i].menu);

		printf(" �󸶿��� : ");
		scanf("%d", &lun[i].price);
		while (getchar() != '\n');
	}

	puts(" �޴��� ");
	puts("------------------------");
	for (i = 0; i < n; i++)
		printf(" [%d]�� %s ==> %d�� \n", i + 1, lun[i].menu, lun[i].price);
	puts("------------------------");
	return 0;
}