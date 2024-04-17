#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 출력과 입력 :: printf(), scanf()
	// 문자, 문자열 입력 :: getchar(char). gets(char[])		-> 설명X

	// %c 쪽에 공백값('\0')이나 줄바꿈값('\n')이 들어가는 경우 발생

	int num;
	char ch, c;
	scanf("%d %c", &num, &ch);
	rewind(stdin);		// "버퍼를 비워주는 역할", 파일 포인터 위치를 파일 시작 부분으로 변경
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);
	
	// 버퍼 :: scanf()와 같은 입력문을 통해, 입력값들을 임시로 저장하는 공간

}