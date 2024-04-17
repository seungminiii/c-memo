// 구구단의 결과값을 이차원 배열에 저장한후, 아래처럼 결과값을 출력하세요
// 조건1) 결과값을 저장할 새로운 이차원 배열을 생성
// 조건2) 연산이 실행될 때 결과값들을 저장
// 조건3) 이차원 배열에 저장된 결과값들을 아래의 형식으로 출력

// 2X1 = 2  3X1 = 3  4X1 = 4  5X1 = 5  6X1 = 6  7X1 = 7  8X1 = 8  9X1 = 9
// 2X2 = 4  3X2 = 6  4X2 = 8  5X2 = 10 6X2 = 12 7X2 = 14 8X2 = 16 9X2 = 18
// ...
// 2X9 = 18 3X9 = 27 4X9 = 36 5X9 = 45 6X9 = 54 7X9 = 63 8X9 = 72 9X9 = 81

#include <stdio.h>

int main() {
	int arr[9][8];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			arr[i][j] = (i+1) * (j+2);
			printf("%d x %d = %d ", j+2, i + 1, arr[i][j]);
		}
		printf("\n");
	}

}