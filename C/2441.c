/*
����: �� ��� - 4

ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����
������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

[����]
�Է�
5

���
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = num; i > 0 ; i--) {
		for (int j = num; j > i; j--)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}