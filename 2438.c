/*
����: �� ��� - 1

ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
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