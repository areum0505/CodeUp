#include <stdio.h>
#pragma warning(disable:4996)

long long int n;

long long int f(long long int n) {
	long long int r = 0;

	while (n != 0) {
		r *= 10;
		r += n % 10;
		n /= 10;
	}

	return r;
}

int main()
{
	scanf("%lld", &n);
	printf("%lld\n", f(n));
}
