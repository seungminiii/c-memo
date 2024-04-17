// Sec(초) 값을 입력받아서 시간이 h분 m초라는 걸 출력하되, 
// 3600이상의 값을 받으면 오류 메시지를 출력한다.
// 그리고 m 값은 반환한다.

#include <stdio.h>

int sec(int h, int m){

	int result = 0;
	if (m >= 3600) {
		printf("다시 입력해주세요.\n");
	}
	return m;
}


int main() {
	int m;
	scanf("%d",&m);

	int h = m / 60;
	m %= 60;
	printf("%d분 %d초", h,m);
}