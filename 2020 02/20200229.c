/* �������� �Է¹޾� *�� ����϶�.
�Է¹��� ���� 1~9������ ������ Ȯ���Ѵ�. */

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i * n; j++) {
			printf("*");
		}
		printf("\n");
	}
}