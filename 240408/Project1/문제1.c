// 1. 시험 점수를 입력받고, 합격/불합격 여부 결과를 출력하여라
// 이때 점수가 60점 이상일 경우가 합격에 해당된다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	printf("점수를 입력하세요.\n");
	scanf("%d", &score);

	switch (score/10) {
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		printf("합격\n");
		break;
	default:
		printf("불합격\n");
	}

}

