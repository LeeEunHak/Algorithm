#include <stdio.h>

int main()
{
	char OX[80];
	int num, score, sum;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		sum = 0;
		score = 1;

		scanf("%s", &OX);

		for (int j = 0; j < strlen(OX); j++) {
			if (OX[j] == 'O') {
				sum += score;
				score++;
			}
			if (OX[j] == 'X')
				score = 1;
		}
		printf("%d\n", sum);
	}

	return 0;
}