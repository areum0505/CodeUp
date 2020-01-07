/* 첫 번째 포인터가 가리키는 변수의 값이 두 번째 포인터가 가리키는 변수의 값보다 클 경우 두 값을 서로 바꾼다. */

#include <stdio.h>

void myswap(int* a, int* b) {
	if (*a > *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main(void) {
	int a, b;
	scanf("%d%d", &a, &b);
	myswap(&a, &b);
	printf("%d %d", a, b);
}