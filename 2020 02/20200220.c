/* 정렬된 두 배열을 합쳐서 정렬하시오. */

#include <stdio.h>

int main(void) {
	int arr[2000];
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	for (int i = 0; i < n1 + n2; i++) {
		scanf("%d", &arr[i]);
	}
	int temp;
	for (int i = 0; i < n1 + n2 - 1; i++) {
		for (int j = i + 1; j < n1 + n2; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < n1 + n2; i++) {
		printf("%d ", arr[i]);
	}
}