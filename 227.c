// 227 - tm ����ü �غ�

#include<stdio.h>

struct tm
{
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

int main()
{
	struct tm *today;

	time_t ltime;
	time(&ltime);
	today = (localtime(&ltime));

	printf("%d ��\n", today->tm_sec);
	printf("%d ��\n", today->tm_min);
	printf("%d ��\n", today->tm_hour);
	printf("%d ��\n", today->tm_mday);
	printf("%d ��\n", today->tm_mon+1);
	printf("%d ��\n", today->tm_year + 1900);
	printf("%d ��\n", today->tm_wday); // since Sunday
	printf("%d ��\n", today->tm_yday);
	printf("%d \n", today->tm_isdst);

	return 0;
}
