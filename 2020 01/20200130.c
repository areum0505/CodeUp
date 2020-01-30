/* Sn=(1)+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+...+n) */

#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			sum += j;
		}
	}
	printf("%d\n", sum);
}