#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
4               00
6 2             10 11
9 3 1           20 21 22
19 10 7 6       30 31 32 33
*/

int main(void) {
    int arr[20][20] = { 0 };
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i][0]);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            arr[i][j] = arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
