#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �����⿡�� �ۼ��ϴ� ��� �ڵ尡 ����X
// ���α׷��� ������ ��, main �Լ��� �ִ� ���� ���ַ� ������ ��

// �Լ�(function) :: "���", ��ɹ��� ����
void print() {
	printf("���� ���α׷��� �����մϴ�.\n");
}

// main �Լ�
int main() {
	// ���� :: �� ���� a, b�� �Է¹ް�, �� ������ ���� ����϶�.

	print();	// �Լ� �ҷ�����

	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", a + b);

}