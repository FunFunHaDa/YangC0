// 014 - 실수 입출력

#include<stdio.h>

int main(void)
{
	float vision;
	puts("-------------------------");
	puts(" 실수 입출력");
	puts("-------------------------");

	printf(" 시력입력 : ");
	scanf("%f", &vision);

	printf(" 당신의 시력은 %.1f입니다 \n", vision);
	puts("-------------------------");

	puts(" 정수, 실수 입력 받을때는 변수 앞에 &을 붙입니다. ");
	puts("-------------------------");
	
	return 0;
}