/*
문제: 합

n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main()
{
	int num, sum = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}