#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n, k = 0;
	scanf("%d", &n);

	while (1) {
		k++;
		if (n == k * k) {
			printf("0 %d", k);
			break;
		} else if (n < k * k) {
			printf("%d %d", n - (k - 1) * (k - 1), k - 1);
			break;
		}
	}

	return 0;
}