/* 시작단과 마지막 단을 입력하면 그 구간의 구구단을 출력하는 프로그램을 작성하시오. */

#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d*%d=%d\n", i, j, i*j);
		}
	}
}