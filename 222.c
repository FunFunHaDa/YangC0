// 222 - 파일철리 fopen함수

// 파일 읽어오기 fopen함수

#include<stdio.h>

int main(void)
{
	char c = 0;

	FILE* fp = fopen("C:\\dd\\a.txt", "r");

	if (fp == NULL)
	{
		puts(" 파일 열기 실패 !");
		return 1;
	}

	while (c != EOF)	// End of file
	{
		c = fgetc(fp);
		putchar(c);
	}
	fclose(fp);

	return 0;
}

