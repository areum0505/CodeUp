#include <stdio.h> 

int main() { 
  int n, c = 0; 
  int arr[10000]; 

  scanf("%d", &n); 
  for (int i = 0; i < n; i++) 
    scanf("%d", &arr[i]); 

  for (int i = 1; i < n - 1; i++) { 
    if (arr[i] == 1) 
      continue;
    else if (arr[i] == 0) {
      if (arr[i - 1] == 0 && arr[i + 1] == 0) 
        c++; 
    } 
  } 
  if (arr[0] == 0 && arr[1] == 0) c++;
  if (arr[n - 1] == 0 && arr[n - 2] == 0) c++; 

  printf("%d \n", c); 
  
  return 0; 
}
