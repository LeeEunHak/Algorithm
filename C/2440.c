/*
����: �� ��� - 3

ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����
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