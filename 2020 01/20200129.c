/* k개의 숫자를 입력받고 그 숫자들을 두번 출력하시오. */

#include <stdio.h>
int main() {
	int k, n[100];
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < k; i++) {
		printf("%d\n", n[i]);
	}
	for (int i = 0; i < k; i++) {
		printf("%d\n", n[i]);
	}
}
