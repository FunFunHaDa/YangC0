// 174 - isupper�Լ� - ���ڰ� �빮������ Ȯ��

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	printf(isupper('a') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'a');
	printf(isupper('b') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'b');
	printf(isupper('F') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'F');
	printf(isupper('L') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", 'L');
	printf(isupper('$') ? "%c�� �빮�� \n" : "%c�� �빮�� �ƴ� \n", '$');

}