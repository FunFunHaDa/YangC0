// 095 - ���ڿ��� �±�ȯ

#include<stdio.h>
#include<string.h>

int main()
{
	char k[5] = "kbs", m[5] = "mbc";
	char tmp[5];

	puts("------------------");
	puts(" ���ڿ��� �±�ȯ");
	puts("------------------");

	puts(" ��ȯ��");
	puts("------------------");
	printf(" k = %s \n", k);
	printf(" m = %s \n", m);

	strcpy(tmp, k);
	strcpy(k, m);
	strcpy(m, tmp);

	puts(" ��ȯ��");
	puts("------------------");
	printf(" k = %s \n", k);
	printf(" m = %s \n", m);
	puts("------------------");

	puts(" �迭���� ������ �ƴϴ�. ���� ���� �� �� ����. ");
	puts(" ���ڿ�����(strcpy) �����Լ��� ����Ѵ� ");
	puts("------------------");

	return 0;
}