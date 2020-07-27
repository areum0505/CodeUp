#include <stdio.h>

int main() {
	int arr[5000][6];
	int n;
	int sum = 0, temp = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 6; i++) {
		temp = 0;
		for (int j = 0; j < n; j++) {
			if (temp < arr[j][i]) {
				temp = arr[j][i];
			}
		}
		sum += temp;
	}

	printf("%d", sum);
}
