/*
문제: 세 수

세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			if (b > c) printf("%d\n", b);
			else printf("%d\n", c);
		}
		else printf("%d\n", a);
	}
	else {
		if (b > c) {
			if (a > c) printf("%d\n", a);
			else printf("%d\n", c);
		}
		else printf("%d\n", b);
	}

	return 0;
}