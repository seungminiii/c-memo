// ������ �Է¹ް�, �� ������ ��� ������ �ش�Ǵ����� ����Ͽ���.
// A(100~90), B(80~89), C(70~79), D(60~69), F


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &score);

	switch (score/10) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
	}

}
