/*
문제: 평균은 넘겠지

대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 
당신은 그들에게 슬픈 진실을 알려줘야 한다.

입력

첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 
이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

출력
각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/
#include <stdio.h>

int main()
{
	int c = 0, n = 0;
	scanf("%d", &c);               

	for (int i = 0; i < c; i++) {      
		scanf("%d", &n);           // 학생 수를 입력
		int score[1001];           // 각각의 점수 저장할 배열
		int sum = 0;               // 학생들의 총점
		double average = 0;	       // 점수 평균

		for (int j = 0; j < n; j++) {    // 점수 입력, 합계
			scanf("%d", &score[j]);
			sum += score[j];
		}

		average = (double)sum / n;       // 평균 산출

		int count = 0;

		for (int j = 0; j < n; j++) {    // 평균 초과 학생수 계산
			if (average < score[j]) {
				count++;
			}
		}

		printf("%.3f%% ", (double)count / n * 100);    // 결과값을 출력
	}

	return 0;
}