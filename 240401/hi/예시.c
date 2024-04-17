// 아래의 변수를 생성하고 본인에 해당하는 정보를 값으로 설정하라 
// 나이(age), 키(height)-> 소수점 첫째 자리, 혈액형(blood)

// 위에서 받은 값을 아래의 형식대로 출력하기
// 안녕하십니까, 000입니다. 
// 나이 :: age 
// 키 :: height (cm)
// 혈액형 :: blood형
// 잘 부탁드립니다:)

#include <stdio.h>
int main() {
	int age;
	double height;
	char blood;

	age = 25;
	height = 158.8;
	blood = 'A';

	printf("안녕하십니까, 오승민입니다.\n");
	printf("나이 :: %d\n", age);
	printf("키 :: %.1lf(cm)\n", height);
	printf("혈액형 :: %c형\n", blood);
	printf("잘 부탁드립니다:)\n");

}

	// 변수 생성 및 값 설정 -> "초기화"
	// 변수 초기화 :: [자료형] [변수이름] = [값];
	int age = 25;
	double height = 158;
	char blood = 'A';