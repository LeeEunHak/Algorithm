/*
����: ������

(A+B)%C�� (A%C + B%C)%C �� ������? (A��B)%C�� (A%C �� B%C)%C �� ������?
�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

ù° �ٿ� (A+B)%C, ��° �ٿ� (A%C + B%C)%C, ��° �ٿ� (A��B)%C, ��° �ٿ� (A%C �� B%C)%C�� ����Ѵ�.
*/
#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", (a%c + b%c) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", (a%c * b%c) % c);

	return 0;
}