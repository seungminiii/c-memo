#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ��¹�(printf()), �Է¹�(scanf())

	// ���� 11382 :: ���� ����

	long long int a, b, c;
	// printf("%d %d %d", &a, &b, &c);
	scanf("%lld %lld %lld", &a, &b, &c); // 3���� ���� �Է�

	// & :: �ּҿ����� (&a -> "���� a�� �ּ�/��ġ")

	long long int result = a + b + c;
	printf("%lld", result); // 3���� �� ���

	// �ڷ��� :: "������ ����, ����"
	// ������(int) / �Ǽ���(double) / ������(char)
}

