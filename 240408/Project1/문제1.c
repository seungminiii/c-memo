// 1. ���� ������ �Է¹ް�, �հ�/���հ� ���� ����� ����Ͽ���
// �̶� ������ 60�� �̻��� ��찡 �հݿ� �ش�ȴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &score);

	switch (score/10) {
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		printf("�հ�\n");
		break;
	default:
		printf("���հ�\n");
	}

}

