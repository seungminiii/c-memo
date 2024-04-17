#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 1. 2개 정수값 입력받기 
	int a, b;
	scanf("%d %d", &a, &b);

	// 2. 2개 값 비교 => 비교 결과에 따라 결과 출력

	if (a > b) { printf(">\n"); }
	else if (a < b) { printf("<\n"); }
	else { printf("==\n"); }

}