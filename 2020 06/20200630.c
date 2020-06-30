#include <stdio.h>
#pragma warning(disable:4996)

int n;

long long int f(int n) {
	long long int r = 1;
	for (int i = n; i >= 1; i--) {
		r *= i;
	}
	return r;
}

int main()
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
}