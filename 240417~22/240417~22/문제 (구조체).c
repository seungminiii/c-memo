// * 구조체 선언(student) => 학번 (char[]), 이름 (char[]), 학점 (double[3]), 평균 (double)
	// (이때, 학점은 0 ~ 4.5 사이의 값으로 들어간다)
// * 함수 선언 :: get_avr(student)
	// student 타입 변수의 정보를 받으며 실행한다.
	// student 타입 변수의 학점 정보를 통해 평균값에 대해 연산한다.
	// 이때 값만 잘 나온다면 반환형은 void여도 double이어도 상관없다.
// main 내용
	// 3명의 학생에 대한 구조체 배열 선언
	// 3명의 학생의 학번, 이름, 학점 3개를 순차적으로 입력받기
	// 3명의 학생에 대해, 학점 평균 연산하기 (get_avr 함수 사용)
	// 3명 학생의 학번, 이름, 평균을 출력하기


#include <stdio.h>

// 구조체 선언(student) => 학번, 이름, 학점, 평균
typedef struct {
	char num[10];		// 학번 (문자열)
	char name[10];		// 이름 (문자열)
	double score[3];	// 학점 :: 3개의 값 저장O
	double average;		// 평균 
} student;

// student 타입 변수의 정보를 미리 받으며 실행한다.(매개변수)
double get_avr(student s) {		// stu를 이쪽으로 보내면, stu의 모든 정보 접근O
	// 평균값 연산 수행
	double sum = 0;		// 평균을 구할 때 필요한 합계 저장 (score의 모든 값 더해야 함)
	for (int i = 0; i < 3; i++) {
		sum += s.score[i];		// 전달받은 구조체 변수의 학점을 모두 더해줌
	}
	return sum / 3;		// 평균 연산 결과값 내놓도록 함
}


int main() {
	// main 내용
	// 학생에 대한 구조체 배열 선언 -> 구조체 필요
	student stu[3];

	// 3명의 학생의 학번, 이름, 학점 3개를 순차적으로 입력받기
	for (int j = 0; j < 3; j++) {
		printf("%d번째 학생의 학번, 이름, 학점(3개)을 입력하시오.\n", j + 1);
		scanf("%s", &stu[j].num);
		scanf("%s", &stu[j].name);
		for (int i = 0; i < 3; i++) {
			scanf("%lf", &stu[j].score[i]);	// score[0], score[1], score[2] 순차적 입력
		}
	}

	// 학생에 대해, 학점 평균 연산하기 (get_avr 함수 사용)
	// 매개변수 타입에 맞게 ,stu를 값으로 전달
	// get_avr 결과값 :: 학점의 평균()
	for (int j = 0; j < 3; j++) {
		stu[j].average = get_avr(stu[j]);
	}

	// 학생의 학번, 이름, 평균을 출력하기 (stu 변수에 있는 값을 꺼내씀)
	for (int j = 0; j < 3; j++) {
		printf("학번 : %s\n", stu[j].num);
		printf("학번 : %s\n", stu[j].name);
		printf("학번 : %.1f\n", stu[j].average);
	}

}