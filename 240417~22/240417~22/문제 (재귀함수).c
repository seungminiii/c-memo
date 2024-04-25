#include <stdio.h>

// n! = n * (n - 1) * ... * 1;
int fact(int n) {
	printf("%d Å½»ö Áß\n", n);
	if (n == 1 || n == 0) {
		return 1;
	}

	return n * fact(n - 1);
	// 5 * fact(4) = 5 *(4 * fact(3))= 5 * 4 * (3 * fact(2))

}

int main() {
	int num;
	scanf("%d", &num);

	int result = fact(num);
	printf("%d", result);

}