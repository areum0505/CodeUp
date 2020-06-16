#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int h, k;
	char d;
	scanf("%d %d %c", &h, &k, &d);

	for (int i = 0; i < h; i++) {
		if (d == 'L') {
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
		} else {
			for (int j = h - 1; j > i; j--) {
				printf(" ");
			}
		}
		for (int l = 0; l < k; l++) {
			printf("*");
		}
		printf("\n");
	}
}