// 자판기 프로그램을 작성하시오
// 사용자에세 동전을 입력받은 뒤, 음료 선택지 제시
// 1. 콜라(1000) 2.사이다(1100) 3.포카리 스웨트(1800) 4.레쓰비(800) 5.카페라떼(2500) 0.실행 종료 
// 사용자가 0을 입력하거나 더이상 음료를 살 수 없을 때
// 거스름돈을 제공하면서 실행 종료하라. 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int coin;
	printf("동전을 넣어주세요.\n");
	scanf("%d", &coin);


	while (true) {
		if (coin < 800) {
			printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.\n", coin);
			break;
		}

		printf("<아래 숫자 중 하나를 입력해주세요.>\n");
		printf("1.콜라(1000)\n");
		printf("2.사이다(1100)\n");
		printf("3.포카리 스웨트(1800)\n");
		printf("4.레쓰비(800)\n");
		printf("5.카페라떼(2500)\n");
		printf("0.실행 종료\n");

		int drink;
		scanf("%d", &drink);
		printf("메뉴 선택 :: %d\n", drink);

		if (drink == 0) {
			printf("이용해주셔서 감사합니다. 거스름돈은 %d원입니다.\n", coin);
			break;
		}

		else if (drink == 1 && coin >= 1000) {
			printf("콜라가 제공되었습니다. 남은 금액은 %d원입니다.\n",coin -= 1000); 
		}
		else if
			(drink == 2 && coin >= 1100) {
			printf("사이다가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin -= 1100); 	
		}
		else if
			(drink == 3 && coin >= 1800) {
			printf("포카리 스웨트가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin -=	1800); 
		}
		else if
			(drink == 4 && coin >= 800) {
			printf("레쓰비가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin -= 800); 
		}
		else if
				(drink == 5 && coin >= 2500) {
				printf("카페라떼가 제공되었습니다. 남은 금액은 %d원입니다.\n", coin -=2500); 
		}
		else {
			printf("%d원으로 잔액이 부족합니다. 실행을 종료합니다.", coin);
			break;
		}
	}

}