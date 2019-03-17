/*
문제: 직사각형에서의 탈출

한수는 지금 (x, y)에 있다. 직사각형의 왼쪽 아래 꼭짓점은 (0, 0)에 있고, 오른쪽 위 꼭짓점은 (w, h)에 있다. 
직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

첫째 줄에 x y w h가 주어진다. 4w와 h는 1,000보다 작거나 같은 자연수이고, x는 1보다 크거나 같고,
w-1보다 작거나 같은 자연수이고, y는 1보다 크거나 같고, h-1보다 작거나 같은 자연수이다.
*/
#include <stdio.h>

int main()
{
		int arr[4];

		scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);    // x, y, w, h

		arr[2] = arr[2] - arr[0];    // w = w - x
		arr[3] = arr[3] - arr[1];    // h = h - y

		int min = arr[0];    // 일단 x를 최솟값으로 설정

		for (int i = 0; i < 4; i++)    // for문으로 4개의 길이값을 서로 비교
			if (min > arr[i]) min = arr[i];
		printf("%d\n", min);

	return 0;
}