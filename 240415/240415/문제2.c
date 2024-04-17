// 아래 프로그램을 작성하여라.
// main에서 2개 숫자를 입력받기
// 하나의 연산자(+, -, *, / , %) 중 하나 입력받기

// 각 사칙연산에 대한 함수 5개를 구현하기
// 반환형은 모두 int형으로 설정해두기
// 위 함수를 활용하여, 입력된 연산자에 대한 결과를 main에서 출력하기
// 이때 / , % 함수의 반환값이 - 1일 때에는, 에러 메시지를 출력
// 나눗셈 연산에서는 어떤 숫자든 0으로 나눌 수 없다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}
int subtract(int num1, int num2) {
	return num1 - num2;
}
int multiply(int num1, int num2) {
	return num1 * num2;
}
int divide(int num1, int num2) {
	if (num2 == 0) {
		printf("다시 입력해주세요.\n");
		return -1;
	}
	return  num1 / num2;
}
int modulo(int num1, int num2) {
	if (num2 == 0) {
		printf("다시 입력해주세요.\n");
		return -1;
	}
	return  num1 % num2;
}


int main(){
	int a, b;
	scanf("%d %d", &a, &b);

	char x;
	printf("+, -, *, / , %% 중 하나를 입력해주세요.\n");
	scanf(" %c", &x);

	int result;
	switch (x) {
		case '+':
			result = add(a, b);
			break;
		case '-':
			result = subtract(a, b);
			break;
		case '*':
			result = multiply(a, b);
			break;
		case '/':
			result = divide(a, b);
			break;
		case '%':
			result = modulo(a, b);
			break;
	
	}
		

	printf("%d\n", result);




}
