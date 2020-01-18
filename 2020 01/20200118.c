/* 이 3개의 운동장 중 가장 넓은 운동장의 넓이를 구하는 프로그램을 작성하시오. */

#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	int width, height;
	scanf("%d %d", &width, &height);
	a = width * height;
	scanf("%d %d", &width, &height);
	b = width * height;
	scanf("%d %d", &width, &height);
	c = width * height;

	if (a > c) {
		if (a > b)
			printf("%d", a);
		else
			printf("%d", b);
	}
	else {
		if (c > b)
			printf("%d", c);
		else
			printf("%d", b);
	}
}