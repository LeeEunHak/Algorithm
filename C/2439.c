/*
문제: 별 찍기 - 2

첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

예제(5입력)
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