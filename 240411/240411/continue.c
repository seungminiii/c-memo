#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// continue :: "���", �����ϴ� �ݺ��� ������ �ߴ��ϰ�, �ݺ����� ó������ ���ư���.
	//			(�ݺ��� Ż��X)

	// ���� :: n���� m������ ���ڵ� �� ¦���� ���
	// 1. n, m �Է¹ޱ�
	int n, m;
	scanf("%d %d", &n, &m);

	// 2. n ~ m ������ ���ڸ� �ϳ��� Ž��
	for (int i = n; i <= m; i++) {
		// ¦���� ���
		// if (i % 2 == 0) {
		//		printf("%d ", i);
		// }
		
		// Ȧ���� ��쿡��, �ݺ����� ó������ ���ư��Բ� ��
		if (i % 2 != 0) {
			printf("continue�� �����մϴ�.\n");
			continue;
		}
		printf("continue�� �������� �ʽ��ϴ�.");
		printf("%d\n", i);
	}

}