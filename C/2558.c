/*
문제: A + B - 2

두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
첫째 줄에 A, 둘째 줄에 B가 주어진다. 다음 줄에 A+B를 출력한다.
*/
#include <stdio.h>

int main()
{
	int a, b, sum;

	scanf("%d\n %d", &a, &b);

	sum = a + b;

	printf("%d\n", sum);

	return 0;
}