/*
00 01 02 03 
10 11 12 13
20 21 22 23
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int arr[101][101];
    int n, m, a = 1;
    scanf("%d %d", &n, &m);

    for (int i = m; i >= 1; i--) {
        if ((m -i) % 2 == 0) {
            for (int j = 1; j <= n; j++) {
                arr[j][i] = a;
                a++;
            }
        } else {
            for (int j = n; j >= 1; j--) {
                arr[j][i] = a;
                a++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}