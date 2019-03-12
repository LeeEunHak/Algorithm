/*
문제: 두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main()
{
	int a, b, sub;

	scanf("%d %d", &a, &b);

	sub = a - b;

	printf("%d\n", sub);

	return 0;
}