// 163 - ���ڿ����� ������ ���� ��ġ ã�� - strchr �Լ�

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "My Name is FunFunHaDa";
	printf(" ���� = %s \n\n", s);
	printf(" Y�� ã�� = %s \n", strchr(s, 'Y'));
	printf(" M�� ã�� = %s \n", strchr(s, 'M'));
	printf(" F�� ã�� = %s \n", strchr(s, 'F'));
	
	return 0;
}