// 172 - isgraph�Ԥ� - ��°����� �������� �Ǻ�

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	printf(isgraph('8') ? "%c�� �׷��ȹ��� \n" : "%c�� �׷��ȹ��� �ƴ� \n", '8');
	printf(isgraph('$') ? "%c�� �׷��ȹ��� \n" : "%c�� �׷��ȹ��� �ƴ� \n", '$');
	printf(isgraph('F') ? "%c�� �׷��ȹ��� \n" : "%c�� �׷��ȹ��� �ƴ� \n", 'F');
	printf(isgraph('\n') ? "%c�� �׷��ȹ��� \n" : "%c�� �׷��ȹ��� �ƴ� \n", '\\n');
	printf(isgraph('\0') ? "%c�� �׷��ȹ��� \n" : "%c�� �׷��ȹ��� �ƴ� \n", '\\0');
	return 0;
}