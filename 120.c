// 120 - C���α׷� ���� if��

#include<stdio.h>

int main()
{
	int score;
	puts("---------------");
	puts(" ���� if��");
	puts("---------------");

	do {
		printf(" Enter score : ");
		scanf("%d", &score);
	} while (score > 100 || score < 0);

	if (score > 90)
		printf(" score : %d, �� \n", score);
	else if(score > 80)
		printf(" score : %d, �� \n", score);
	else if(score > 70)
		printf(" score : %d, �� \n", score);
	else if(score > 60)
		printf(" score : %d, �� \n", score);
	else
		printf(" score : %d, �� ���� ���� ������ \n", score);

	puts("-----------------------");
	puts(" �Ʒ��� ���������� �򶼱�ó�� ���� ��������. ");
	puts(" �� ������ �����ϰ� �ٽ� ������ ������ �ݺ��Ѵ�. ");
	puts("-----------------------");
}