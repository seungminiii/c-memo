#include <stdio.h>
#include <string.h>

// ���̺귯�� :: "������", ��ɹ����� ��Ƶ� ����

// ���ڿ�(string, char[]) ó�� �Լ�

int main() {

	// strlen(char[])	:: ���ڿ��� ���̸� ó�� ('\0'�� ������ �������� ���� ����)
	char s[] = "string type";		// 12����(11���� + '\0')�� ���� �ڵ� ����
	printf("���ڿ� s�� ���� :: %s\n", s);
	printf("���ڿ� s�� ���� :: %d\n\n", strlen(s));		// strlen("string type")


	// strcat(char[], char[]) :: 2�� ���ڿ� ���� 
	// strncat(char[], char[], int) :: 2�� ���ڿ� ����
	char h[10] = "Hello";		// h :: 6��
	char b[] = "HiBye";			// b :: 4��

	// strcat(h, b);		// h + b�� ������� h�� �����
	strncat(h, b, 2);		// "h + (b�迭 �� 2���ڸ�)�� ������� h�� ������"
	printf("h�� ���簪 :: %s\n", h);
	printf("b�� ���簪 :: %s\n\n", b);


	// strcpy(char[], char[]) :: ���ڿ� ����, �ι�° ���� ù��° ������ ����
	// strncpy(char[], char[], int) :: ���ڿ� ����
	char copy1[20];			// �� �迭
	strcpy(copy1, h);		// copy �迭�� h�� ���� ����+�ٿ��ֱ�
	printf("copy1(h) ���� ��� :: %s\n", copy1);

	char copy2[] = "Hiiii";
	strncpy(copy2, h, 5);		// h�� 5���ڸ� copy2�� �����(����+�ٿ��ֱ�)
	printf("copy2 ���� ��� :: %s\n\n", copy2);


	// strcmp(char[], char[]) :: ���ڿ� ��
	// strncmp(char[], char[], int) :: ���ڿ� ��
	// +, - �� ������ "�ٸ���"��� ����̸�, 0 ���� ������ "����"��� ����̴�.
	
	// char str1[] = "Hello";
	// char str2[] = "Hello";

	char str1[] = "HelloWold";
	char str2[] = "HelloC";

	if (str1[0] == str2[0]) {
		printf("�� ���ڿ��� ù��° ���ڴ� �����մϴ�.\n");
	}
	if (str1 == str2) {		// ���ڿ��� ==�̳� !=���� �� �Ұ�
		printf("�� ���ڿ��� �����մϴ�.\n");
	}
	if (strcmp(str1, str2) == 0) {		// str1�� str2�� ���ٸ�
		printf("�� ���ڿ��� �����մϴ�.\n");
	}
	else {
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");
	}
	if (strncmp(str1, str2, 5) == 0) {		// str1�� str2�� �ձ��� 5���� ���ٸ�
		printf("�� ���ڿ��� 5�� ���ڰ� �����ϴ�.\n");
	}

}