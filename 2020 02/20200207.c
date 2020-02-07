/* 대소 비교 결과를 출력하시오. */

#include <stdio.h>

int main() {
	int n;
	int k[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d: ", i + 1);
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			else if (k[i] > k[j]) printf("> ");
			else if (k[i] == k[j]) printf("= ");
			else printf("< ");
		}
		printf("\n");
	}
}