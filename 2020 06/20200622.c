#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
    int n, c;
    int h[100];

    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    int min = 0, temp = 0;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i; j < n; j++) {
            if (h[j] < h[min]) {
                min = j;
            }
        }
        temp = h[i];
        h[i] = h[min];
        h[min] = temp;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", h[i - 1]);
        if (i % c == 0) printf("\n");
    }

    return 0;
}