#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �� ��Ģ���꿡 ���� �Լ� 5���� �����ϱ�
// (��ȯ���� ��� int������ �����صα�)

int plus(int n1, int n2) {		// main�� �Է°�(a,b)�� ���� �Ű����� ����
	// ������ ���� ��������� ��
	return n1 + n2;
}
int minus(int n1, int n2) {
	return n1 - n2;
}
int multi(int n1, int n2) {
	return n1 * n2;
}
// n1�� n2�� ���� ��, n2�� 0�̸� �� �ȴ�.
int devide(int n1, int n2) {
	if (n2 == 0) {
		return -1;		// ���⼭ -1�� ��ȯ�ϸ�, ���� �����
	}
	return n1 / n2;
}
int rest(int n1, int n2) {
	if (n2 == 0) {
		return -1;		// ���⼭ -1�� ��ȯ�ϸ�, ���� �����
	}
	return n1 % n2;
}
// �Լ� �����ϰ�, return���� ������ ��� �ش� �Լ� ���� ����


int main() {
	// 1. main���� 2�� ���ڸ� �Է¹ޱ�
	int a, b;
	scanf("%d %d", &a, &b);

	char oper;
	scanf(" %c", &oper);

	// 2. �ϳ��� ������(+, -, *, / , %) �� �ϳ� �Է¹ޱ�
	

	// �� �Լ��� Ȱ���Ͽ�, �Էµ� �����ڿ� ���� ����� main���� ����ϱ�
	switch (oper) {
	case '+':
		printf("���� ��� :: %d\n", plus(a, b));
		break;
	case '-':
		printf("���� ��� :: %d\n", minus(a, b));
		break;
	case '*':
		printf("���� ��� :: %d\n", multi(a, b));
		break;
	case '/':
		if (devide(a, b) == -1) {	// return -1; �� ���ؼ� -1�� ���� ���������� ���
			printf("/ ���� ���� :: 0���� ���� �� �����ϴ�.\n", devide(a, b));
		}
		else {		// return n1/n2;�� ����� ��� 
			printf("�� ������ ��� :: %d\n", devide(a, b));
		}
		break;
	case '%':
		if (devide(a, b) == -1) {	// return -1; �� ���ؼ� -1�� ���� ���������� ���
			printf("% ���� ���� :: 0���� ���� �� �����ϴ�.\n", devide(a, b));
		}
		else {	
			printf("������ ������ ��� :: %d\n", devide(a, b));
		}
		break;
	default:		// �����ڸ� ����� �Է����� ���� ���
		printf("�����ڸ� �߸� �Է��Ͽ����ϴ�.\n");
	}

}