#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// ���� ������ �Է¹ް�, �հ�/���հ� ���� ����� ����Ͽ���.
	// �̶� ������ 60�� �̻��� ��찡 �հݿ� �ش�ȴ�.
	
	// 1. ���� �Է¹ޱ�
	int score;
	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d", &score);

	// 2. �պ� ��� ����ϱ�
	bool tf = score >= 60;
	switch (tf) {		// socre >= 60�� �־ �������
	case true :
		printf("�����մϴ�.�հ��ϼ̽��ϴ�!\n");
		break;
	case false :
		printf("���հ��ϼ̽��ϴ�.\n");
		break;
	}
	
}