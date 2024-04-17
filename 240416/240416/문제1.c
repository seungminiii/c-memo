// 1. 1부터 100까지 더하는 함수를 만들되,
// 1 + 2 + 3..... + 100 = 5050 이라는 메시지도 출력해주는 함수만들기(단 5050값은 반환해준다)
// 1 + 2 + ... + 99 + 100    total = 5050

#include <stdio.h>


int sum() {

	int result = 0;
	for (int i = 1; i <= 100; i++) {
		result += i;
	}
	printf("1 + 2 + 3..... + 100 = %d\n", result);
	return result;
}

int main() {
	printf("total = %d\n",sum());

}