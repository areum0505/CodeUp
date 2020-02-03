/* 높이 h와 반복휫수 r이 주어질때, 별을 다음과 같이 지그재그로 출력하자. */

#include <stdio.h>

int main() {
	int h, r;
	scanf("%d %d", &h, &r);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < h; j++) {
			for (int k = 0; k < j; k++) {
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		for (int j = h - 2; j >= 0; j--) {
			for (int k = 0; k < j; k++) {
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}
}
