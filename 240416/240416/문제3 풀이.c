#include <stdio.h>

int multi(int a, int b) {	// () :: �Ű����� "����" �ϴ� ����
	int result = 1;
	for (int i = a; i <= b; i++) {
		result *= i;
		printf("%d", i);
		if (i != b) {
			printf("x");
		}
	}
	printf("\n");

	return result;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	// return ������ �Լ��� ������� ������ ->
	// �Լ� ȣ���� ������ ��ü�� ���� ����.
	printf("total = %d\n", multi(a, b));

}