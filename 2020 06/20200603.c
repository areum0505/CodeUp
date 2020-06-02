#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int arr[101][101];
    int n, count = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[j][i] = count;
            count++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}