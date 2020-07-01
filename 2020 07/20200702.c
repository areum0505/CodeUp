#include <stdio.h>
#pragma warning(disable:4996)

int n, m;

long long int f(int n, int m) {
	return (long long int)n + m;
}

int main()
{
	scanf("%d%d", &n, &m);
	printf("%lld\n", f(n, m));
}	
