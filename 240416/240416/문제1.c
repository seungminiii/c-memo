// 1. 1���� 100���� ���ϴ� �Լ��� �����,
// 1 + 2 + 3..... + 100 = 5050 �̶�� �޽����� ������ִ� �Լ������(�� 5050���� ��ȯ���ش�)
// 1 + 2 + ... + 99 + 100    total = 5050

#include <stdio.h>


int sum() {

	int result = 0;
	for (int i = 1; i <= 100; i++) {
		result += i;
	}
	printf("1 + 2 + 3..... + 100 = %d\n", result);
	return result;
}

int main() {
	printf("total = %d\n",sum());

}