// �Ʒ��� ������ �����ϰ� ���ο� �ش��ϴ� ������ ������ �����϶� 
// ����(age), Ű(height)-> �Ҽ��� ù° �ڸ�, ������(blood)

// ������ ���� ���� �Ʒ��� ���Ĵ�� ����ϱ�
// �ȳ��Ͻʴϱ�, 000�Դϴ�. 
// ���� :: age 
// Ű :: height (cm)
// ������ :: blood��
// �� ��Ź�帳�ϴ�:)

#include <stdio.h>
int main() {
	int age;
	double height;
	char blood;

	age = 25;
	height = 158.8;
	blood = 'A';

	printf("�ȳ��Ͻʴϱ�, ���¹��Դϴ�.\n");
	printf("���� :: %d\n", age);
	printf("Ű :: %.1lf(cm)\n", height);
	printf("������ :: %c��\n", blood);
	printf("�� ��Ź�帳�ϴ�:)\n");

}

	// ���� ���� �� �� ���� -> "�ʱ�ȭ"
	// ���� �ʱ�ȭ :: [�ڷ���] [�����̸�] = [��];
	int age = 25;
	double height = 158;
	char blood = 'A';