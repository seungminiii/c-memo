#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 문자열을 입력받고, 문자열의 길이를 출력

	// 1. 문자열 입력 (단어 길이는 최대 100)
	char a[101];
	scanf("%s", &a);
	
	// 2. 문자열 길이 측정 (길이를 저장할 변수 필요)
	int len = 0;
	for (int i = 0; a[i] != '\0'; i++) {	// '\0(문자열의 끝)'을 만나면 즉시 실행 종료
		len++;		// 문자를 만났을 때 수행할 명령문 -> '\0'이 아닌 문자를 만날 때 
	}
	printf("%d", len);

}