#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int i;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("%d의 약수는 : ", num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}