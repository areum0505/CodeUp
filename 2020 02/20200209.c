/* 어떤 10진수 n이 주어지면 2진수로 변환해서 출력하시오. */

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