/*
����: �� ��� - 2

ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

����(5�Է�)
	*
   **
  ***
 ****
*****
*/
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 0; j < num; j++) {
			if (j < (num - i)) printf(" ");
			else printf("*");
		}
		printf("\n");
	}

	return 0;
}