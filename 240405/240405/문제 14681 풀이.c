#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ��и� ���� 
	// 1. x��ǥ, y��ǥ �Է¹ޱ�
	int x, y;
	scanf("%d %d", &x, &y);

	// 2. ��� ��и鿡 �ִ��� Ȯ��, ��� ���
	// 1��и�(+, +) / 2��и� (-, +) / 3��и� (-, -) / 4��и� (+, -)
	if (x > 0 && y > 0) {		// 1��и�
		printf("1\n");
	}
	else if (x < 0 && y > 0) {		// 2��и�
		printf("2\n");
	}
	else if (x < 0 && y < 0) {		// 3��и�
		printf("3\n");
	}
	else {		// 4��и�
		printf("4\n");
	}

}