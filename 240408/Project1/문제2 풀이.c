#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 1. ���� �Է¹ޱ�
	int score;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &score);

	// 2. ������ ���� ���� �Ǻ�
	// A(100~90			-> A ������ ���� �ڸ��� : 9, 10
	// B(80~89)			-> B ������ ���� �ڸ��� : 8
	// C(70~79)			-> C ������ ���� �ڸ��� : 7
	// D(60~69)			-> D ������ ���� �ڸ��� : 6
	// F
	switch (score/10) {		// socre ( 0 ~ 100 ) => score ( 0 ~ 10 )
	case 10:		// score�� ���� 100
	case 9:		// score�� ���� 90 ~ 99
		printf("A �����Դϴ�.\n");
		break;
	case 8:		// score�� ���� 80 ~ 89
		printf("B �����Դϴ�.\n");
		break;
	case 7:		// score�� ���� 70 ~ 79
		printf("C �����Դϴ�.\n");
		break;
	case 6:		// score�� ���� 60 ~ 69
		printf("D �����Դϴ�.\n");
		break;
	default:	//
			printf("F �����Դϴ�.\n");
	}

}