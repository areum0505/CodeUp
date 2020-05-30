#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int arr[100] = { 0 };
    int n, g;
    scanf("%d %d", &n, &g);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i += g) {
        int min = arr[i];
        for (int j = i; j < i + g; j++) {
            if (j < n) {
                if (min > arr[j]) { min = arr[j]; }
            }
        }
        printf("%d ", min);
    }


    return 0;
}