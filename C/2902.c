/*
문제: KMP는 왜 KMP일까?

입력
입력은 한 줄로 이루어져 있고, 최대 100글자의 영어 알파벳 대문자, 소문자,
하이픈('-', 아스키코드 45)으로만 이루어져 있다. 첫 번째 글자는 항상 대문자이다.
그리고, 하이픈 뒤에는 반드시 대문자이다. 그 외의 모든 문자는 모두 소문자이다.

출력
첫 줄에 짧은 형태 이름을 출력한다.

예제 입력
Knuth-Morris-Pratt

예제 출력
KMP
*/
#include <stdio.h>

int main()
{
	char arr[101];

	scanf("%s", &arr);

	int length = strlen(arr);

	printf("%c", arr[0]);    // 첫 번째 영문자를 출력

	for (int i = 1; i < length; i++) {
		if (arr[i] == '-')
			printf("%c", arr[i + 1]);    // '-'뒤에 오는 영문자를 차례대로 출력
	}

	printf("\n");

	return 0;
}