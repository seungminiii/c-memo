// n�� �Է¹ް�, n���� ���ڸ� �Է¹����ÿ�
// n���� ���ڵ� �� ���� ū ���� ����ϴ� ���α׷��� ����ÿ�.
// �̶�, n���� ���ڵ��� ��� �ڿ����̴�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 1. n �Է¹ޱ�
	int n;
	printf("n�� �Է����ֽÿ�.\n");
	scanf("%d", &n);

	// 2. n���� ���ڸ� �Է¹޾ƶ�. -> scanf()�� n�� �����϶�.
	int t = 0;
	int max = 0;		// ���� ����
	while (t < n) {
		int num;
		scanf("%d", &num);		//


		if (max < num) {
			max = num;
		}

		t++;
	}
	printf("%d", max);

	}