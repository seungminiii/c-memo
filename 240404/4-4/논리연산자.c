#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// �������� :: &, && (and)  /  |, || (or) /  !
	
	// ���� :: ������ �Է¹ް�, �̿� �˸´� ������ ���Ͽ���.
	// (90~100 -> A / 80~89 -> B / 70~79 -> C / 60~69 -> D / 0~59 -> F)

	// 1. ������ �Է¹ޱ�
	int score;
	printf("������ �Է��ϼ���.(0~100�� ����)");
	scanf("%d", &score);

	// 2. �Է°��� ���ϴ� ������ ����� ���
	// &, && :: "�׸���",
	//		2���� ���ǽ� �� �ϳ��� �����̸� false ����� ��Ÿ��
	//		&�� 2���� ���ǽ��� ��� �Ǻ�
	//		&&�� ù��° ���� ������� ���� �ι�° ���� ������ �ְ� �� ������ ���� 

	printf("<<�������� ���>>\n");
	if (90 <= score && score <= 100) {		// ������ A�� ��� (90 <= score <= 100)
		// score�� 90 �̻��̰� 100 ������ ��
		printf("A�Դϴ�\n"); 
	}
	if (80 <= score && score <= 89) {
		printf("B�Դϴ�\n"); 
	}
	if (70 <= score && score <= 79) { 
		printf("C�Դϴ�\n"); 
	}
	if (60 <= score && score <= 69) {
		printf("D�Դϴ�\n"); 
	}
	else { printf("F�Դϴ�.\n"); }
	}

	// if - else if - else�� ����
	if (90 <= score) {
		printf("A�Դϴ�.\n");
	}
	else if (80 <= score) {
		printf("B�Դϴ�.\n");
	}
	else if (70 <= score) {
		printf("C�Դϴ�.\n");
	}
	else if (60 <= score) {
		printf("D�Դϴ�.\n");
	}
	else {
		printf("F�Դϴ�.\n");
	}

}