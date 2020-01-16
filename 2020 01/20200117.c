/* 어떤 수 n이 입력되면 n의 각 자릿수의 합이 한 자리가 될때까지 계산하여 출력하시오. */

#include <stdio.h>

int main() {
	char arr[10] = { 0 };
	int a, b, sum = 0, len;

	scanf("%s", arr);
	len = strlen(arr);

	for (int i = 0; i < len; i++) {
		sum += arr[i] - 48;
	}

	while (1) {
		if (sum >= 10)
			sum = (sum / 10) + (sum % 10);
		else
			break;
	}
	printf("%d", sum);
}