// 문자(영문자, 숫자)를 입력받고 해당 문자가 영문자(대문자, 소문자)/숫자에서
// 몇번째 문자인지를 출력하라.
// 만약 영문자(대문자, 소문자)를 입력받을 시, 대소문자 반전한 결과값도 출력하라.

// 결과
// 문자를 입력하세요.(영문자, 숫자 중 입력) c => c는 영문자에서 3번째 문자입니다.
// 소문자 -> 대문자 변형 결과 :: c -> C
// 문자를 입력하세요. (영문자, 숫자 중 입력) 4 => 4는 숫자에서 4번째 문자입니다.
// 문자를 입력하세요. (영문자, 숫자 중 입력) & => 잘못 입력하였습니다. 다시 실행해주시오.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char alpha;
	printf("문자를 입력하세요.\n");
	scanf("%c", &alpha);

	if (alpha >= 'a' && alpha <= 'z') {
		printf("%c -> %c\n", alpha, alpha - 32);
		printf("%c는 영문자에서 ", alpha);
		printf("%d번째 문자입니다.\n", alpha - 'a' + 1);
	}
	else if (alpha >= 'A' && alpha <= 'Z') {
		printf("%c ->%c\n", alpha, alpha + 32);
		printf("%c는 영문자에서 ", alpha);
		printf("%d번째 문자입니다.\n", alpha - 'A' + 1);
	}

	else if (alpha >= '0' && alpha <= '9') {
		printf("%c는 숫자에서 ", alpha);
		printf("%d번째 문자입니다.\n", alpha - '0'+1);
	}

	else {
		printf("잘못 입력하였습니다. 다시 실행해주시오.");
	}

}
