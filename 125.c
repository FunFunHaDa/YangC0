// 125 - C프로그래밍중 switch ~ case문 - 두번째

#include<stdio.h>

int main()
{
	int a; 
	puts("-----------------------");
	puts(" switch ~ case 문");
	puts("-----------------------");

	puts(" \t TV 채널 선택 ");
	puts(" \t\t 6. SBS ");
	puts(" \t\t 7. KBS2 ");
	puts(" \t\t 9. KBS ");
	puts(" \t\t 11. MBC ");
	puts(" \t\t 13. EBS");
	puts(" \t\t **************");
	printf(" \t 즐겨보는 TV채널 [  ]\b\b\b");
	scanf("%d", &a);

	switch (a)
	{
	case 6: printf(" \t 채널은 %d ==> SBS \n", a); break;
	case 7: printf(" \t 채널은 %d ==> KBS2 \n", a); break;
	case 9: printf(" \t 채널은 %d ==> KBS \n", a); break;
	case 11: printf(" \t 채널은 %d ==> MBC \n", a); break;
	case 13: printf(" \t 채널은 %d ==> EBS \n", a); break;
	default: printf(" \t %d ==> 없는 채널 \n", a);
	}

	puts("-------------------------------------------");
	puts(" a가 case값에 해당");
	puts(" case에 해당되면 그 문장으로 바로 간다. ");
	puts(" 해당되는 case가 없으면 default이하 실행");
	puts("-------------------------------------------");
}