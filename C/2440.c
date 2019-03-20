/*
문제: 별 찍기 - 3

첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
*/
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = num; i > 0; i--) {
		for (int k = 1; k <= i ; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}