// 자판기 프로그램을 작성하시오.
// 사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
// 콜라(1000원), 사이다(1100원), 포카리 스웨트(1800원), 레쓰비(800원), 카페라떼(2500원)
// 금액이 충분하다면, 음료가 제공되었음을 출력으로 알린 뒤 거스름돈 출력하기.그리고 실행 종료.
// 금액이 부족하다면, 금액이 부족함을 출력으로 알린 뒤 실행 종료

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int 동전, 음료;
	scanf("%d", &동전); 

	printf("1.콜라(1000원)\n");
	printf("2.사이다(1100원)\n");
	printf("3.포카리 스웨트(1800원)\n");
	printf("4.레쓰비(800원)\n");
	printf("5.카페라떼(2500원)\n");

	scanf("%d", &음료);
	
	if (음료 == 1) { 동전 -= 1000; }
	else if(음료==2) { 동전 -= 1100; }
	else if (음료 == 3) { 동전 -= 1800; }
	else if (음료 == 4) { 동전 -= 800; }
	else if (음료 == 5) { 동전 -= 2500; }

	if (동전 >= 0) { 
		printf("음료가 제공됨\n"); 
		printf("거스름돈은 %d원입니다.\n", 동전);
	}
	else { printf("금액이 부족함\n"); }
	
}