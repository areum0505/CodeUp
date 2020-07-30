#include <stdio.h>
#include <stdlib.h>

long long int permutation(int m, int n);
long long int combination(int m, int n);
long long int factorial(int seed);

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    printf("%lld\n", combination(n, k));

    return 0;
}

long long int combination(int m, int n) {
    return permutation(m, n)/factorial(n);
}

long long int permutation(int m, int n) {
    if(n == 1) return m;
    else return m * permutation(m - 1, n - 1);
}

long long int factorial(int n) {
    if(n == 1) return 1;
    else return n * factorial(n - 1);
}
