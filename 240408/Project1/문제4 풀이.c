// n을 입력받고, n개의 숫자를 입력받으시오
// n개의 숫자들 중 가장 큰 값을 출력하는 프로그램을 만드시오.
// 이때, n개의 숫자들은 모두 자연수이다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 1. n 입력받기
	int n;
	printf("n을 입력해주시오.\n");
	scanf("%d", &n);

	// 2. n개의 숫자를 입력받아라. -> scanf()를 n번 수행하라.
	int t = 0;
	int max = 0;		// 정답 저장
	while (t < n) {
		int num;
		scanf("%d", &num);		//


		if (max < num) {
			max = num;
		}

		t++;
	}
	printf("%d", max);

	}