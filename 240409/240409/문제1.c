// 2개의 숫자 n, m을 입력받고,
// n부터 m까지의 숫자들 중 3의 배수인 것만 순차적으로 출력하여라.

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