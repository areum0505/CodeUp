#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < n - i; j++)
            printf(" ");
        printf("*");

        for (int j = 0; j < (i - 1) * 2; j++)
            printf(" ");
        printf("*\n");
    }
    for (int i = n; i > 0; i--) {
        for (int j = 0; n - i > j; j++)
            printf(" ");
        printf("*");

        for (int j = 0; j < (i - 1) * 2; j++)
            printf(" ");
        printf("*\n");
    }

    return 0;
}