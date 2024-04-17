#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 출력문(printf()), 입력문(scanf())

	// 백준 11382 :: 꼬마 정민

	long long int a, b, c;
	// printf("%d %d %d", &a, &b, &c);
	scanf("%lld %lld %lld", &a, &b, &c); // 3개의 숫자 입력

	// & :: 주소연산자 (&a -> "변수 a의 주소/위치")

	long long int result = a + b + c;
	printf("%lld", result); // 3개의 합 출력

	// 자료형 :: "정보의 종류, 유형"
	// 정수형(int) / 실수형(double) / 문자형(char)
}

