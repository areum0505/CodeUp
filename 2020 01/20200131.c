/* 주사위 2개를 굴려 합이 k가 나오는 경우를 조사하려고 한다. */

#include <stdio.h>

int main() {
	int k;
	scanf("%d", &k);
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i + j == k) {
				printf("%d %d \n", i, j);
			}
		}
	}
}