#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int arr[100][100];
	int n, m, a = 1;
	scanf("%d %d", &n, &m);

	for (int i = n - 1; i >= 0; i--) {			// 2 1 0
		for (int j = 0; j <= m - 1; j++) {		// 0 1 2 3
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}