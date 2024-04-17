#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 1. 성적 입력받기
	int score;
	printf("점수를 입력하세요.\n");
	scanf("%d", &score);

	// 2. 성적에 따른 학점 판별
	// A(100~90			-> A 영역의 십의 자리수 : 9, 10
	// B(80~89)			-> B 영역의 십의 자리수 : 8
	// C(70~79)			-> C 영역의 십의 자리수 : 7
	// D(60~69)			-> D 영역의 십의 자리수 : 6
	// F
	switch (score/10) {		// socre ( 0 ~ 100 ) => score ( 0 ~ 10 )
	case 10:		// score의 값이 100
	case 9:		// score의 값이 90 ~ 99
		printf("A 학점입니다.\n");
		break;
	case 8:		// score의 값이 80 ~ 89
		printf("B 학점입니다.\n");
		break;
	case 7:		// score의 값이 70 ~ 79
		printf("C 학점입니다.\n");
		break;
	case 6:		// score의 값이 60 ~ 69
		printf("D 학점입니다.\n");
		break;
	default:	//
			printf("F 학점입니다.\n");
	}

}