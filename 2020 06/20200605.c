#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int arr[101][101];
	int n, count = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				arr[j][i] = count;
				count++;
			}
		}
		else {
			for (int j = n - 1; j >= 0; j--) {
				arr[j][i] = count;
				count++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
