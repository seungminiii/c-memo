// a���� b���� ���ϴ� �Լ��� �����
// 1x2x......xb = ��� ����ϰ� ��ȯ�� �ִ� �Լ� �����
// ex) 1x2x3x4x5   total = 120

#include <stdio.h>


int multi(int a, int b){

	int result = 1;
	for (int i = a; i <= b; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("total = %d\n", multi(a, b));
}