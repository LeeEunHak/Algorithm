/*
문제: 2007년

오늘은 2007년 1월 1일 월요일이다. 그렇다면 2007년 x월 y일은 무슨 요일일까? 
이를 알아내는 프로그램을 작성하시오.

입력
첫째 줄에 빈 칸을 사이에 두고 x(1≤x≤12)와 y(1≤y≤31)이 주어진다. 
참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.

출력
첫째 줄에 x월 y일이 무슨 요일인지에 따라 SUN, MON, TUE, WED, THU, FRI, SAT중 하나를 출력한다.
*/
#include <stdio.h>

int main()
{
	int m = 0, d = 0, day = 0;    // 월, 일, 총 일수를 저장할 변수 선언
	int monthArr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };    // monthArr 변수에 1월 ~ 12월 일 수를 저장

	scanf("%d %d", &m, &d);

	for (int i = 0; i < (m - 1); i++) {    // 입력 받은 달의 전 달까지 총 일수를 변수 day에 저장
		day += monthArr[i];
	}

	day += d;    // 저장된 day값에 입력한 달의 일수를 더함
	day = day % 7;    // 최종 저장된 일 수를 7로 나누어 해당 요일을 구함

	switch (day) {    // 해당 요일을 출력
	case 0 :
		printf("SUN\n"); break;
	case 1:
		printf("MON\n"); break;
	case 2:
		printf("TUE\n"); break;
	case 3:
		printf("WED\n"); break;
	case 4:
		printf("THU\n"); break;
	case 5:
		printf("FRI\n"); break;
	case 6:
		printf("SAT\n"); break;
	}

	return 0;
}