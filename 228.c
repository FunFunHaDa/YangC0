// 228 - time�Լ�, localtime�Լ�

#include<stdio.h>
#include<time.h>

typedef struct tm tm;

int main()
{
	time_t ltime;
	tm * today;
	int year, month, day;
	time(&ltime);

	today = (localtime(&ltime));

	year = today->tm_year + 1900;
	month = today->tm_mon + 1;
	day = today->tm_mday;

	printf(" ������ %d�� %d�� %d�� \n", year, month, day);
	printf(" ������ %d���� �Ǵ� �� \n", today->tm_yday);
	printf(" ����ð� %d�� %d�� %d�� \n",
		today->tm_hour, today->tm_min, today->tm_sec);

	return 0;
}