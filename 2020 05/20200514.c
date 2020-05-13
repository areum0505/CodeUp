#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int m, n;
	int arr[100][100];
	scanf("%d %d", &n, & m);
	int a = m * n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = a;
			a--;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}