#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	int T, a, b;
	scanf("%d", &T);
		
	while (T--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}




	int main() {
		int T, a, b;
		scanf("%d %d %d", &T, &a, &b);

		while (a + b <= T) {
			printf("%d\n", a + b);
			T--;
		}
	}