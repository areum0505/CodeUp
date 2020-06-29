#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int k, n, count = 0;
    int arr[50][50];
    scanf("%d %d", &k, &n);

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (arr[i][j] != -1) {
                arr[i][j] += n;
            }
            if (arr[i][j] >= 0 && arr[i][j] <= 5) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}