/* 데이터의 개수가 n개가 들어오고, n개의 데이터를 거꾸로 출력하는 프로그램을 작성하시오. */

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}