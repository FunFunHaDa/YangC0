// 139 - C언어 fgets함수

#include<stdio.h>

int main()
{
	char country[10];
	puts(" fgets 함수 ");

	printf(" 여행하고 픈 나라는 : ");
	fgets(country, sizeof(country) - 1, stdin);

	printf(" %s 함께 가요. \n", country);

	puts("\n-----------------------------------");
	puts(" fgets함수는 문자열 입력 전용 함수");
	puts(" 배열길이보다 길게 입력을 해도 size만큼만 읽어가요");
	puts(" 다른 메모리를 침범하지 않아요 ");
	puts(" 안정적이 된답니다. ");

	puts(" 실패하면 NULL를 리턴하지요. ");
	puts("-----------------------------------");
}