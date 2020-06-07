#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int arr[101][101];
	int n;
	scanf("%d", &n);

   int limit = n;
   int count = 0;
   int x = -1, y = 0;
   int direction = 1;
 
   while (limit != 0) {
      for (int i = 0; i < limit * 2 - 1; i++) {
         if (i < limit) x += direction;
         else           y += direction;

         count++;       
         arr[y][x] = count;
      }
      direction *= -1;
      limit--;
   }

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
