#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x;
  int d[5];
  int result = 500;

  scanf("%d", &x);
  for(int i = 0; i < 5; i++) {
    scanf("%d", &d[i]);
  }

  for(int i = 0; i < 5; i++) {
    if(abs(x-d[i]) < result) {
      result = abs(x-d[i]);
    } 
  }

  printf("%d", result);
}
