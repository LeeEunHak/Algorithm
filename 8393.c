/*
����: ��

n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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