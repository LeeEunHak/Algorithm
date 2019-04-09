/*
문제: 괄호

괄호 문자열(Parenthesis String, PS)은 두 개의 괄호 기호인 '(' 와 ')' 만으로 구성되어 있는 문자열이다.
그 중에서 괄호의 모양이 바르게 구성된 문자열을 올바른 괄호 문자열(Valid PS, VPS)이라고 부른다. 한 쌍의 괄호 기호로 된
"( )" 문자열은 기본 VPS 이라고 부른다. 만일 x 가 VPS 라면 이것을 하나의 괄호에 넣은 새로운 문자열 "(x)" 도 VPS 가 된다. 
그리고 두 VPS x 와 y를 접합(concatenation)시킨 새로운 문자열 xy도 VPS 가 된다. 예를 들어 “(())()”와 “((()))” 는 VPS 
이지만“(()(”, “(())()))” , 그리고 “(()” 는 모두 VPS 가 아닌 문자열이다.

여러분은 입력으로 주어진 괄호 문자열이 VPS 인지 아닌지를 판단해서 그 결과를 YES 와 NO 로 나타내어야 한다.
*/
#include <stdio.h>

int main()
{
	char arr[51];    // char형 배열에 입력을 받음
	int num;
	int point;    // 변수 point에 각 괄호의 수를 더하고 빼면서 저장

	scanf("%d", &num);

	for (int k = 0; k < num; k++) {
		point = 0;
		scanf("%s", &arr);

		for (int i = 0; i < 50; i++) {
			if (arr[i] == '\0')
				break;
			if (arr[i] == '(')    // '(' 문자라면 단순히 카운트를 더해준다
				point++;
			else if (arr[i] == ')' && point > 0)
				point--;
			else if (arr[i] == ')' && point <= 0) {    // point 값이 음수가 되면 더이상 검사할 필요가 없다
				point--;
				break;    // 위의 경우 break를 통해 반복문을 탈출한다
			}
		}

		if (point == 0)    // 두 개의 괄호의 개수가 같다면 point 값이 0
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}