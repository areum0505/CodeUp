#include <stdio.h>

int main() {
	int n;
	int arr[10000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int up = 0, down = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			up++;
		}
		else if (arr[i] > arr[i + 1]) {
			down++;
		}
	}

	printf("%d %d", up, down);
}
