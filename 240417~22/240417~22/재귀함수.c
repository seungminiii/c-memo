#include <stdio.h>

// ��� �Լ� :: �ڱ� �ڽ�(�Լ� �ڽ�)�� �θ��� �Լ�
// �Լ� ���� :: ���޹��� n ���� ����, n ~ 1���� ����ϴ� �Լ� (n�� �ڿ���)
int print(int n) {
	printf("%d\n", n);

	if (n == 1) {
		printf("print() �Լ��� �����մϴ�.\n");
		return 0;
	}
	return print(n - 1);
}

int main() {
	int num;
	scanf("%d", &num);

	print(num);

}