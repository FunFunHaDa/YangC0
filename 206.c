// 206 - 문자열 입력(fgets함수 이용)

// 문자열 입력

#include<stdio.h>
int main()
{
	char name[10];

	printf(" 이름을 입력하세요 : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = 0;

	printf(" %s님반갑습니다. ", name);

	return 0;
}