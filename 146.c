// 146 - C��� ������Լ� ��(printf, scanf, fprintf, fscanf)

#include<stdio.h>

int main()
{
	puts("getchar�Լ� \t<==>\t putchar�Լ�");
	puts("gets�Լ� \t<==>\t puts�Լ�");
	puts("scanf�Լ� \t<==>\t printf�Լ�\n");
	puts("fgetc�Լ� \t<==>\t fputc�Լ�");
	puts("fgets�Լ� \t<==>\t fputs�Լ�");
	puts("fscanf�Լ� \t<==>\t fprintf�Լ�\n");

	puts("\t\t�Է�(Ű����)\t\t\t ���(�����)");
	puts("�� �� \t\tint getchar(void)\t\t int putchar(int c)");
	puts("���ڿ�\t\tchar* gets(char*s)\t\t int puts(const char* s)");
	puts("��������\tint scanf(const char* format,..) int printf(const* format,...)");
}