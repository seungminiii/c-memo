#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 2�� ���� �Է�(n, m)
	int n, m;
	scanf("%d %d", &n, &m);

	// 2. n���� m������ ���ڵ� ������ Ž��
	printf("while�� ���\n");
	int i = n;
	while (i <= m) {
		// 3�� ����� ���
		if (i % 3 == 0) {	// 3���� ��������� ��(�������� 0�� ��)
			printf("%d\n", i);
		}
		i++;
	}

	printf("for�� ���\n");
	for (int i = n; i <= m; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}

}