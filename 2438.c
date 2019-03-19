/*
문제: 별 찍기 - 1

첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
*/
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}