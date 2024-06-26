#include <stdio.h>

// 2. sce 값을 입력받아서, 시간이 h분 m초 출력하고 m을 반환하는 함수 구현
//  단, 3600이상인 값이라면 오류 메시지 출력

int time(int sec) {		// int형 정보 1개 요청
	if (sec >= 3600) {		// 에러 메시지 출력
		printf("3600 이상의 값을 입력하였습니다. 다시 실행해주세요.\n");
		return 0;
	}
	else {
		// 1분*60 = 60초, 2분 = 120초 ...
		int h = sec / 60;		// 분 저장
		int m = sec % 60;	// 나머지 초 저장
		printf("%d분 %d초\n", h, m);

		return m;
	}
}

int main() {
	int sec;
	scanf("%d", &sec);

	time(sec);
	// 반환값은 main에서 실제로 활용X (변수에 저장을 따로 안해서)
}