// �Ʒ� ���α׷��� �ۼ��Ͽ���.
// main���� 2�� ���ڸ� �Է¹ޱ�
// �ϳ��� ������(+, -, *, / , %) �� �ϳ� �Է¹ޱ�

// �� ��Ģ���꿡 ���� �Լ� 5���� �����ϱ�
// ��ȯ���� ��� int������ �����صα�
// �� �Լ��� Ȱ���Ͽ�, �Էµ� �����ڿ� ���� ����� main���� ����ϱ�
// �̶� / , % �Լ��� ��ȯ���� - 1�� ������, ���� �޽����� ���
// ������ ���꿡���� � ���ڵ� 0���� ���� �� ����.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}
int subtract(int num1, int num2) {
	return num1 - num2;
}
int multiply(int num1, int num2) {
	return num1 * num2;
}
int divide(int num1, int num2) {
	if (num2 == 0) {
		printf("�ٽ� �Է����ּ���.\n");
		return -1;
	}
	return  num1 / num2;
}
int modulo(int num1, int num2) {
	if (num2 == 0) {
		printf("�ٽ� �Է����ּ���.\n");
		return -1;
	}
	return  num1 % num2;
}


int main(){
	int a, b;
	scanf("%d %d", &a, &b);

	char x;
	printf("+, -, *, / , %% �� �ϳ��� �Է����ּ���.\n");
	scanf(" %c", &x);

	int result;
	switch (x) {
		case '+':
			result = add(a, b);
			break;
		case '-':
			result = subtract(a, b);
			break;
		case '*':
			result = multiply(a, b);
			break;
		case '/':
			result = divide(a, b);
			break;
		case '%':
			result = modulo(a, b);
			break;
	
	}
		

	printf("%d\n", result);




}
