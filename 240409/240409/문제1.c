// 2���� ���� n, m�� �Է¹ް�,
// n���� m������ ���ڵ� �� 3�� ����� �͸� ���������� ����Ͽ���.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int t;
	for (int t = n; t <= m; t++) {
		if (t % 3 == 0) {
			printf("%d", t);
		}
	}
}