#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ�(function) :: "���", ���� ��ɹ��� �ϳ��� ����� ��
// �Լ� ���� ����
//  ��ȯ��(�ڷ���) �Լ��̸�() {
//		�Լ� ȣ�� ��, ������ ��ɹ�;
//  }

// ��ȯ�� :: return������ ���ؼ�  �� ���� Ÿ��
// "��ȯ�ϴ�"(return) != "����ϴ�"(printf)
// void :: "�ƹ��͵� ����"
// NULL :: "����","���� �������� �ʴ�"
int num = NULL;		// ���� �������� ���� 


// ��ȯ���� void�̸�, return ���� �ۼ�X
void print() {
	// print() �Լ��� main���� ȣ������ ������, ������ �ȵ�
	printf("���α׷��� �����մϴ�.\n");
}
int return_One() {
	return 1;		// return :: "��ȯ�ϴ�"
	// 1�� ����. (int��)
}

// main �Լ�
void main() {
	// �Լ� ȣ�� :: �Լ� �̸�()
	print();	// print() �Լ� ȣ��
	
	printf("return_One() �Լ� ��ȯ�� :: %d", return_One());

	// return 0;	-> "0�� ��ȯ�Ѵ�."
	//		-> ���α׷��� ���������� �����Ѵ�."



}