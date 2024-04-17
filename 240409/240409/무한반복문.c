#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// "반복문은 어느 시점에서는 반드시 끝나게끔 설정하라."

	// 무한 반복문
	// 백준 10952번 
	// 이 문제에서는 반복할 횟수가 주어져있지 않다.
	//		=> 반복할 횟수를 정하기 위한 조건식을 당장 짤 수 없는 상황
	//		=> 일단 "우선은 반복문을 돌려야 함"

	while (true) {		// 조건식 내용 :: "참(true)"
		// 조건을 따지지 않고 반드시 이 반복문 안에 들어옴

		// 1. 한 쌍의 숫자 입력
		int a, b;
		scanf("%d %d", &a, &b);

		// 무한 반복문을 작성할 때에는, 반복문 안에서 중단점을 따로 만들어야 함
		// "강제종료, 반복문 탈출" => break;
		if (a == 0 && b == 0) { break; }
	
		printf("%d\n", a + b);
	}

}