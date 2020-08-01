#include <stdio.h>

int main() {
  long long int n;
  scanf("%lld",&n);
  n += 1;
  long long int j = n * 3 - 1;
  long long int k = j * n;
  long long int s = k / 2;
  printf("%lld", s % 1000000004);
}
