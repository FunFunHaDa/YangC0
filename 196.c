// 196 - �޸𸮱��� �����ϱ�(stack, data, heap)

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "africa";	// stack ����
	char * k = "korea";		// data ����

	char * p = (char*)malloc(strlen("poland") + 1);
	strcpy(p, "poland");	// heap ����

	printf(" %s, �ּ� a = %d \n", a, a);
	printf(" %s, �ּ� &k = %d, �� = %d \n", k, &k, k);
	printf(" %s, �ּ� &p = %d, �� = %d \n", p, &p, p);
	// a, k, p�� ��� ������ �ش��ϱ⿡ stack������ ����

	free(p);
	return 0;
}