#include <stdio.h>

int main(void) {
  int n, k;
  int num;

  scanf("%d %d", &n, &k);
  for(int i = 1; i <= n; i++) {
    scanf("%d", &num);
    if(num == k) {
      printf("%d", i);
      return 0;
    }
  }
  printf("-1");
  return 0;
}
