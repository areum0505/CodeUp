#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int n, arr[100];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            arr[i] = arr[i];
        } else {
            arr[i] += arr[i - 1];
        }
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}