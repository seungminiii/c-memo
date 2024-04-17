#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 2개 숫자 입력(n, m)
	int n, m;
	scanf("%d %d", &n, &m);

	// 2. n부터 m까지의 숫자들 순차적 탐색
	printf("while문 출력\n");
	int i = n;
	while (i <= m) {
		// 3의 배수만 출력
		if (i % 3 == 0) {	// 3으로 나누어떨어질 때(나머지가 0일 때)
			printf("%d\n", i);
		}
		i++;
	}

	printf("for문 출력\n");
	for (int i = n; i <= m; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}

}