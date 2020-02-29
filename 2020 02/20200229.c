/* 구구단을 입력받아 *로 출력하라.
입력받은 수가 1~9사이의 수인지 확인한다. */

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i * n; j++) {
			printf("*");
		}
		printf("\n");
	}
}