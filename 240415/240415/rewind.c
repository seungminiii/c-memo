#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ��°� �Է� :: printf(), scanf()
	// ����, ���ڿ� �Է� :: getchar(char). gets(char[])		-> ����X

	// %c �ʿ� ���鰪('\0')�̳� �ٹٲް�('\n')�� ���� ��� �߻�

	int num;
	char ch, c;
	scanf("%d %c", &num, &ch);
	rewind(stdin);		// "���۸� ����ִ� ����", ���� ������ ��ġ�� ���� ���� �κ����� ����
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);
	
	// ���� :: scanf()�� ���� �Է¹��� ����, �Է°����� �ӽ÷� �����ϴ� ����

}