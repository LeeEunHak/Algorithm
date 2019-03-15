/*
문제: 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main()
{
	double a, b, div;

	scanf("%lf %lf", &a, &b);

	div = a / b;

	printf("%.9f\n", div);

	return 0;
}