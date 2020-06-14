#include <stdio.h>
#pragma warning(disable:4996)

int fac(int n) {
	if (n <= 1) return 1;
	else return n * fac(n - 1);
}

int main(void) {
	int n, r;
	scanf("%d %d", &n, &r);
	
	printf("%d", fac(n) / (fac(r) * fac(n - r)));
}