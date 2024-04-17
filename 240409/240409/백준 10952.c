#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int num = 1;
	while (num < 10) {
		if(num == a + b) {
			printf("%d\n", num);
		}
		num++;
	}
}