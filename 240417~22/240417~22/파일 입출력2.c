#include <stdio.h>


int main() {
	// ���Ŀ� ���߾ ���� ���� �Է��� �ѹ��� ���� �� ����
	// fprintf() :: c���� ���ؼ� txt���Ͽ� �Է� 
	// fscanf() :: txt ������ ��ĵ(�ҷ�����)

	FILE* fp;
	int age;
	double height;
	
	fp = fopen("sample.txt","w");		// ���� ���� ���� ����
	if (fp != NULL) {
		printf("���� ���� ����\n");

		// 3���� ���̿� Ű�� �ܼ� �󿡼� �Է� & �Է°� ���Ͽ� �ֱ� 
		for (int i = 0; i < 3; i++) {
			printf("%d��° ���� �Է�", i + 1);
			scanf("%d %lf", &age, &height);		// scanf() :: �ֻܼ� �Է�
			
			// fprintf(FILE*, "���������� ����", ���� ��) :: ���Ŀ� ���� ���� ���Ͽ� �ִ� ����
			fprintf(fp, "%d %lf\n", age, height);
		}
	}
	else {
		printf("���� ���� ����\n");
	}
	rewind(fp);


	int sAge;
	double sHeight;		// ���Ͽ� �ִ� ���� �޾Ƴ� �뵵
	fp = fopen("sample.txt", "r");		// �б� ���� ��ȯ
	if (fp != NULL) {
		printf("���� ���� ����\n");

		for (int i = 0; i < 3; i++) {
			// fscanf(FILE*, "���������� ����", ���ϰ��� �޾Ƴ� �����ּ�) :: ������ ������ �ҷ����� ����
			fscanf(fp, "%d %lf", &sAge, &sHeight);
			printf("%d��° ����(����, Ű) :: %d, %lf\n", i + 1, sAge, sHeight );
		}
	}
	else {
		printf("���� ���� ����\n");
	}

}