#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			printf(" ");
		}
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
}