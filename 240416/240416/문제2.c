// Sec(��) ���� �Է¹޾Ƽ� �ð��� h�� m�ʶ�� �� ����ϵ�, 
// 3600�̻��� ���� ������ ���� �޽����� ����Ѵ�.
// �׸��� m ���� ��ȯ�Ѵ�.

#include <stdio.h>

int sec(int h, int m){

	int result = 0;
	if (m >= 3600) {
		printf("�ٽ� �Է����ּ���.\n");
	}
	return m;
}


int main() {
	int m;
	scanf("%d",&m);

	int h = m / 60;
	m %= 60;
	printf("%d�� %d��", h,m);
}