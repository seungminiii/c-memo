// n을 입력을 받고 1부터 n까지 하여, 짝수들의 총합을 출력하는 프로그램을 만드시오.
// 여기서 n은 자연수이다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 1. n 입력받기 
	int n;
	printf("n을 입력해주시오.\n");
	scanf("%d", &n);

	// 2. 1부터 시작하여 n을 끝으로 하면서, 숫자 탐색
	int a = 1;		// 임의의 변수 a를 통해서 탐색 진행 예정
	int sum = 0;		// 짝수들의 총합을 저장할 변수 선언

	while (a <= n) {		// n 이하일 때 아래 구문 반복 수행
		// 짝수들의 총합을 구하기 
		if (a % 2 == 0) {		// 짝수일 때
			sum += a;		// sum에 현재 num값을 더하기
			printf("%d\n", a);
			printf("현재 sum값 :: %d\n", sum);
		}
		a++;		// 반복문 1회 수행할 때마다 1씩 증가
	}
	printf("=> %d", sum);

}