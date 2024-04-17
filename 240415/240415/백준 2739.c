#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int gugudan[9]= {0};

	for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", n, i, n * i);
		}

}