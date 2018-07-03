// 146 - C언어 입출력함수 비교(printf, scanf, fprintf, fscanf)

#include<stdio.h>

int main()
{
	puts("getchar함수 \t<==>\t putchar함수");
	puts("gets함수 \t<==>\t puts함수");
	puts("scanf함수 \t<==>\t printf함수\n");
	puts("fgetc함수 \t<==>\t fputc함수");
	puts("fgets함수 \t<==>\t fputs함수");
	puts("fscanf함수 \t<==>\t fprintf함수\n");

	puts("\t\t입력(키보드)\t\t\t 출력(모니터)");
	puts("문 자 \t\tint getchar(void)\t\t int putchar(int c)");
	puts("문자열\t\tchar* gets(char*s)\t\t int puts(const char* s)");
	puts("형식지정\tint scanf(const char* format,..) int printf(const* format,...)");
}