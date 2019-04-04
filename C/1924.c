/*
����: 2007��

������ 2007�� 1�� 1�� �������̴�. �׷��ٸ� 2007�� x�� y���� ���� �����ϱ�? 
�̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1��x��12)�� y(1��y��31)�� �־�����. 
����� 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.

���
ù° �ٿ� x�� y���� ���� ���������� ���� SUN, MON, TUE, WED, THU, FRI, SAT�� �ϳ��� ����Ѵ�.
*/
#include <stdio.h>

int main()
{
	int m = 0, d = 0, day = 0;    // ��, ��, �� �ϼ��� ������ ���� ����
	int monthArr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };    // monthArr ������ 1�� ~ 12�� �� ���� ����

	scanf("%d %d", &m, &d);

	for (int i = 0; i < (m - 1); i++) {    // �Է� ���� ���� �� �ޱ��� �� �ϼ��� ���� day�� ����
		day += monthArr[i];
	}

	day += d;    // ����� day���� �Է��� ���� �ϼ��� ����
	day = day % 7;    // ���� ����� �� ���� 7�� ������ �ش� ������ ����

	switch (day) {    // �ش� ������ ���
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