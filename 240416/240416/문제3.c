// a부터 b까지 곱하는 함수를 만들고
// 1x2x......xb = 결과 출력하고 반환값 주는 함수 만들기
// ex) 1x2x3x4x5   total = 120

#include <stdio.h>


int multi(int a, int b){

	int result = 1;
	for (int i = a; i <= b; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("total = %d\n", multi(a, b));
}