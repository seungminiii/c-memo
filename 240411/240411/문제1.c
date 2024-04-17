// 1차원 배열을 활용하여 아래의 프로그램을 만들어라.
// 정보처리기사 필기 응시자의 1~5과목 점수를 "입력받은 뒤"
// 합격 / 불합격 여부를 출력하여라.
// (합격 / 불합격 여부만 출력하여도 되고,
// 과락 여부 및 평균 충족 / 미달 여부를 함께 출력하여도 상관없다.)

// 이때, 정보처리기사 필기 합격 조건은 아래와 같다.
// - 각 과목의 점수는 모두 40점 이상이어야 하고
// - 5과목 점수의 평균은 60점 이상이어야 한다.

// return 0; ::	프로그램 즉시 종료


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score[5] = { 0 };
	printf("필기 점수를 입력해주세요.\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	// 5과목 중 한 과목이라도 40 이하면 불합격 나타내고 프로그램 종료 
	for (int i = 0; i < 5; i++) {
		if (score[i] < 40) {
			printf("%d과목 %d점으로, 불합격입니다.\n", i + 1, score[i]);
			return 0;
		}
	} 

	// 5과목 평균 점수
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	double average = sum / 5.0;

	// 5과목 평균 60이상 불/합 결과
	if(average >= 60) {

		printf("평균 %.1f점으로 합격입니다.\n", average);
	}
	else {
		printf("평균 %.1f점으로 불합격입니다.\n", average);
	}

}