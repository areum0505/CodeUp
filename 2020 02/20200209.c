/* � 10���� n�� �־����� 2������ ��ȯ�ؼ� ����Ͻÿ�. */

#include <stdio.h>

int main() {
	int arr[10000], i = 0, n;
	scanf("%d", &n);

	if (n == 0) {
		printf("0");
		return 0;
	}

	while (n > 0) {
		arr[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		printf("%d", arr[j]);
	printf("\n");
}