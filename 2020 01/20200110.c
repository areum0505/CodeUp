/* mymax 함수를 구현하여 두 정수 중 큰 수를 출력한다. */

#include <stdio.h>

int mymax(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", mymax(a, b));
}