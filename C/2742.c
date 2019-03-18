/*
문제: 찍기 N

자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
첫째 줄부터 N번째 줄 까지 차례대로 출력한다.
*/
#include <stdio.h>

int main()
{
	int num = 0;

	scanf("%d", &num);

	for (int i = num; i >= 1; i--)
	{
		printf("%d\n", i);
	}

	return 0;
}