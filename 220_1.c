// 220_1 - gets함수 VS fgets함수

// fgets함수

#include<stdio.h>
#include<string.h>

int main(void)
{
	char it[20];

	fprintf(stdout, " 근무하고 싶은 it회사는 : ");
	fgets(it, sizeof(it), stdin);
	it[strlen(it)-1] = '\0';
	fprintf(stdout, " \n %s 저도요 \n", it);
	return 0;
}