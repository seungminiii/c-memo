#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// �ƽ�Ű�ڵ� :: ��ǻ�Ͱ� ���� ������ �ľ��� �� �ֵ���
	//				 ���� ����-Ư�� ���ڸ� �ϴ��� ������Ų ǥ
	char alpha;
	scanf("%c", &alpha);

	// 'A' :: 65, 'a' :: 97, '0' :: 48
	printf("���ڷ� ǥ�� :: %c\n", alpha);
	printf("���ڷ� ǥ�� :: %d\n", alpha);

}