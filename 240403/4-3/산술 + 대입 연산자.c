#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ��������� + ���Կ�����

	// 1. 2�� ���� �Է¹ޱ�
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	// num1 = num1 + num2;		// �� ���� ���� num1�� ����
	num1 += num2;
	printf("���� num1 + num2 ��� :: %d\n", num1);
	num1 -= num2;		
	printf("���� num1 - num2 ��� :: %d\n", num1);
	num1 *= num2;
	printf("���� num1 * num2 ��� :: %d\n", num1);
	num1 /= num2;
	printf("���� num1 / num2 ��� :: %d\n", num1);
	num1 %= num2;
	printf("���� num1 %% num2 ��� :: %d\n", num1);

}