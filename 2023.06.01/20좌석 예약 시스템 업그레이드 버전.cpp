#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

int main(void)
{
	char ans1;
	int ans2, ans3, i;
	int seats[SIZE] = { 0 };

	while (1)
	{
		printf("좌석을 예약하시겠습니까?(y 또는 n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;
		printf("-------------------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf(" 11 12 13 14 15 16 17 18 19 20\n");
		printf("-------------------------------\n");

		printf("몇 번째 좌석을 예약하시겠습니까?");
		scanf("%d", &ans2);
		scanf("%d", &ans3);
		if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("예약되었습니다.\n");
		}
		if (seats[ans3 - 1] == 0)
		{
			seats[ans3 - 1] = 1;
			printf("예약되었습니다.\n");
		}
		if else (seats[ans2 - 1] == 1)
			break;
			printf("이미 예약된 자리입니다.\n");
		
		if else (seats[ans3 - 1] == 1)
				break;
			printf("이미 예약된 자리입니다.\n");

		for (int i = 0; i < SIZE; i++)
		{
			if (i == 10)
				printf("\n");
			if (seats[i] > 0)
				printf(" 0");
			else
				printf(" %d", i + 1);
		}
	}
	return 0;
}