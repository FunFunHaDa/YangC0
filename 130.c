// 130 - switch ~ case���� enum��

#include<stdio.h>

int main()
{
	enum week{SUN, MON, TUE, WED, THU, FRI, SAT};

	int number;
	while (1)
	{
		puts(" \t �����ϴ� ����");
		puts(" \t 0. �Ͽ���");
		puts(" \t 1. ������");
		puts(" \t 2. ȭ����");
		puts(" \t 3. ������");
		puts(" \t 4. �����");
		puts(" \t 5. �ݿ���");
		puts(" \t 6. �����");
		puts(" \t *************");
		printf(" \t �����ϼ���(����:9) [   ]\b\b\b");

		scanf("%d", &number);
		switch (number)
		{
		case SUN:
			printf(" \t %d ==> �Ͽ��� \n", SUN); break;
		case MON:
			printf(" \t %d ==> ������ \n", MON); break;
		case TUE:
			printf(" \t %d ==> ȭ���� \n", TUE); break;
		case WED:
			printf(" \t %d ==> ������ \n", WED); break;
		case THU:
			printf(" \t %d ==> ����� \n", THU); break;
		case FRI:
			printf(" \t %d ==> �ݿ��� \n", FRI); break;
		case SAT:
			printf(" \t %d ==> ����� \n", WED); break;
		case 9:
			printf(" \t %d ���α׷� �����մϴ�. \n", number);
			return 1;
		default:
			printf(" \t %d ==> ���� �����Դϴ�. \a\a\n", number);
			continue;
		}
	}
	return 0;
}