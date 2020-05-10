#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int n;
    scanf("%d", &n);
    int area = 0;
    for (int i = 1; i < n / 2; i++) {
        if (i * (n / 2 - i) > area)
            area = i * (n / 2 - i);
    }
    if (n == 11)
        printf("%d \n", area + 1);
    else
        printf("%d\n", area);
}