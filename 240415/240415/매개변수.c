#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Ű����� :: �Լ��� ȣ��Ǳ� ���� �̸� �޾ƿ��� ��
// ��ȯ��(�ڷ���) �Լ��̸�(�Ű�����Ÿ��1 �Ű�������1, ...){
//		�Լ� ȣ�� ��, ������ ��ɹ�;
// }

// �ڱ�Ұ��� ����ϴ� �Լ� ���� :: �̸�, ����, ������
void introduce(char name[], int age, char blood) {
	printf("�̸� :: %s\n", name);
	printf("���� :: %d\n", age);
	printf("������ :: %c\n", blood);
}

int main() {
	// introduce() �Լ��� 3���� ����(char[], int, char)�� �־��ְ� 
	// ������ �ؾ� ���� �����
	introduce("Oh_suengmin", 25, 'A');
	
}