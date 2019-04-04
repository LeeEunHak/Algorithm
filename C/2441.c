/*
문제: 별 찍기 - 4

첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

[예시]
입력
5

출력
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