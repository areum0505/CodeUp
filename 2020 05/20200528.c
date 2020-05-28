#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int n, arr[100];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m[100];
    for (int i = 0; i < n; i++) {
        if (arr[2 * i] > arr[2 * i + 1])
            m[i] = arr[2 * i + 1];
        else
            m[i] = arr[2 * i];
    }

    for (int i = 0; i < n / 2; i++) {
        printf("%d ", m[i]);
    }

    return 0;
}