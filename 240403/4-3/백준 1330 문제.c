#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 2�� ������ �Է¹ޱ� 
	int a, b;
	scanf("%d %d", &a, &b);

	// 2. 2�� �� �� => �� ����� ���� ��� ���

	if (a > b) { printf(">\n"); }
	else if (a < b) { printf("<\n"); }
	else { printf("==\n"); }

}