#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 1. 1~5���� ���� �Է�
	int score[5];
	printf("����ó����� �ʱ� 1~5���� ������ ���������� �Է����ּ���.\n");
	for (int i = 0; i < 5; i++) {	// i : 0 ~ 4
		scanf("%d", &score[i]);		// i��° scrore �� �Է�
	}
	bool pass = true;

	// 2. �հ�/���հ� ���� ��� (+���� ����, ���� ��� ����)
	// 1) ���� ���� (�� ������ ����, 40�� �̻����� �̸����� �ľ�)
	for (int i = 0; i < 5; i++) {
		printf("%d���� :: ", i + 1);		// i + 1 :: 1 ~ 5
		if (score[i] >= 40) {		// 40�� �̻� -> ����ϴ� ���
			printf("���\n");
		}
		else {		// 40�� �̸� -> ������ ���
			printf("����\n");
			pass = false;		// �ϳ��� ������ �Ͼ�� �� �Ǳ� ������ 
		}
	}

	// 2) ���� ��� ���� (����� 60�� �̻����� �̸����� �ľ�)
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	int average = (double)sum / 5;
	if (average >= 60){			// ��հ��� 60�� �̻��� �� => pass�� ���
		printf("��� %d������ pass\n", average);
	}
	else {		// ��հ��� 60�� �̸��� �� => fail�� ���
		printf("��� %d������ fail\n", average);
		pass = false;		// ���� ��տ� ���ؼ��� 60�� �̻��̾�� �ϱ� ������ 
						// �������� ���Ѵٸ� false������ ����
	}
	
	// 3) �հ� / ���հ� ���� ���
	if (pass == true) {		// true���� �����ϰ� �ִٸ�, ���հ� ��Ұ� ����
		printf("\n�����մϴ�. ����ó����� �ʱ� ���迡 �հ��ϼ̽��ϴ�.\n");
	}
	else {		// pass == false�� ��� => ���հ� ��Ұ� �ϳ��� �־��ٸ�
		printf("\n����ó����� �ʱ� ���迡 ���հ��ϼ̽��ϴ�.\n");
	}

}