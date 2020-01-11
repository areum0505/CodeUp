/* 어떤 수 n이 주어지면 1부터 n까지의 수 중 맨 마지막 자리에 1이 몇 번 들어 있는지 알아내는 프로그램을 작성하시오. */

#include <stdio.h>

main() {
	int n, c = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 10 == 1) c++;
	}
	printf("%d \n", c);
}