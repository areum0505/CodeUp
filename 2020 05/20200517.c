#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int arr[100][100];
	int n, m, a;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {			// 0 1 2
		a = n * m - i;
		for (int j = 0; j < m; j++) {		// 0 1 2 3
			arr[i][j] = a;
			a -= n;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}