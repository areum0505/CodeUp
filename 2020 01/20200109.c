/* 세 정수를 입력받아 입력받은 순서의 역순으로 출력하시오. */

#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d %d %d \n", c, b, a);
}