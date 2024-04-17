#include <stdio.h>

int main() {
	// 변수 ::"변할 수 있는" 숫자
	// 메모리 공간 중 한 군데를 임의로 잡아 "특정 정보를 담을 수 있는" 공간

	// 1. 변수 선언(생성) :: [자료형][변수이름];
	// 자료형 :: "정보의 유형" (정수형, 실수형, 문자형)
	// 기본적인 자료형은 signed형 -> 음수와 양수 모두 표현
	// unsigned형 -> 0과 양수만 표현가능

	// 정수형 - short, int(대표적), long
	// 표현할 수 있는 숫자의 범위 차이
	short myShort;		
	int myInt;		//  -21억 ~ +21억
	unsigned int myUint;		// 0 ~ 42억
	long myLong;
	
	// 실수형 - float, double(대표적)
	// 정밀도의 차이 (소수점 표현 범위)
	// 3.14 / 3.1419... 
	float myFloat;			// "%f"
	double myDouble;		// "%lf"  float보다 더 정확한 표현 가능
	
	// 문자형 - char
	char myChar

	// 변수 선언을 한 직후에는, 쓰레기 값이 들어간다. 
	int myInt;		// "정수형 정보를 담을 수 있는 myInt 변수 생성"
	double myReal;		// "실수형 정보를 담을 수 있는 myReal 변수 생성"
	char myChar;
	// 2. 값 설정 :: [변수이름] = [값];
	// = (오른쪽 값을 왼쪽으로 "대입하라")
	myInt = 4;
	myReal = 2.5;
	myChar = 'a';

	// printf()로 변수값 출력하기
	printf("<변수값 출력하기>\n"); 
	printf("myInt 값 :: \"%d\"\n", myInt);
	printf("myReal 값 :: %.1f\n", myReal);
	printf("myChar 값 :: %c\n", myChar);
	// 이스케이프 문자(\) :: "문법상 충돌이 일어날 문자 출력" 시 사용 
}

// 디버깅 ::  F5	=> 오류 탐색 
// 디버깅 모드에서 한줄씩 이동 :: F11

// return 0 :: 프로그램을 정상적으로 종료하라