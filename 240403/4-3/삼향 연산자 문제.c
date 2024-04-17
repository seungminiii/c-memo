// 2개 숫자를 입력받고 2개 값을 비교하여 결과를 출력하라 
// 같은지 다른지에 대한 결과만 출력하여라

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 1. 2개의 숫자를 입력받고
	int a , b;
	scanf("%d %d", &a, &b);

	// 2. 2개 값을 비교하여, 같은지 다른지 결과 출력 
	// 1) bool 타입 변수로 참/거짓 여부 판별 -> 이에 따라 결과 출력
	bool t = (a == b);
	(t == true) ? printf("2개 숫자는 같다") : printf("2개 숫자는 다르다\n");

	// 2) 즉시 조건식을 대입하여 참/거짓 여부 판별
	(a == b) ? printf("2개 숫자는 같다") : printf("2개 숫자는 다르다");

}