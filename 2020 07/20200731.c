#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  n += 1;
  int j = n * 3 - 1;
  int k = j * n;
  int s = k / 2;
  printf("%d",s);
}
