/*
6 
5 4 
3 2 1 
*/

#include <stdio.h>

int main() {
	int n, a;
	scanf("%d", &n);

	a = n * (n + 1) / 2;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d ", a--);
		printf("\n");
	}
}
