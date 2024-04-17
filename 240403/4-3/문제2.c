// 2. 자판기 프로그램을 작성하시오.
// 사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
// 1.콜라(1000원), 2.사이다(1100원), 3.포카리 스웨트(1800원), 4.레쓰비(800원), 5.카페라떼(2500원)
// 금액이 충분하다면, 음료가 제공되었음을 출력으로 알린 뒤 거스름돈 출력하기.그리고 실행 종료.
// 금액이 부족하다면, 금액이 부족함을 출력으로 알린 뒤 실행 종료

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int 동전, 음료;
	scanf("%d", &동전);

	printf("콜라(1000원)\n"); 
	printf("사이다(1100원)\n");
	printf("포카리 스웨트(1800원)\n");
	printf("레쓰비(800원)\n");
	printf("카페라떼(2500원)\n");

	scanf("%d", &음료);

	switch (음료) {
		case 1:
			if (동전 >= 1000) { printf("콜라 제공, 거스름돈 %d원\n",동전 - 1000); }
			else { printf("금액이 부족합니다\n"); }
			break;
		case 2:
			if (동전 >= 1100) { printf("사이다 제공, 거스름돈 %d원\n", 동전 - 1100); }
			else { printf("금액이 부족합니다\n"); }
			break;
		case 3:
			if (동전 >= 1800) { printf("포카리 스웨트 제공, 거스름돈 %d원\n", 동전 - 1800); }
			else { printf("금액이 부족합니다\n"); }
			break;
		case 4:
			if (동전 >= 800) { printf("레쓰비 제공, 거스름돈 %d원\n", 동전 - 800); }
			else { printf("금액이 부족합니다\n"); }
			break;
		case 5:
			if (동전 >= 2500) { printf("카페라떼 제공, 거스름돈 %d원\n", 동전 - 2500); }
			else { printf("금액이 부족합니다\n"); }
			break;
		default :
			printf("잘못된 선택입니다");
	}
}