/* 첫 줄에 데이터의 개수 N(N은 홀수)이 입력되고, 그 다음 줄에 N개의 데이터가 입력된다.
  여기서 첫번째 데이터, 중간 데이터, 마지막 데이터를 출력하시오. */

#include <stdio.h>

int main() {
	int n, a;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		if (i == 1) printf("%d ", a);
		if (i == n / 2 + 1) printf("%d ", a);
		if (i == n) printf("%d", a);
	}
}