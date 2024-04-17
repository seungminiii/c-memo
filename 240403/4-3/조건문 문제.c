#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 2개의 숫자를 입력받고
	int a, b;
	scanf("%d %d", &a, &b);

	if (a == b) { printf("2개 숫자는 같다"); }
	else { printf("2개 숫자는 다르다"); }

}