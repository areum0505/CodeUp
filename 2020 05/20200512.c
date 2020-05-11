#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int n, score = 0;
    scanf("%d", &n);
    int max = 0, min = 101;
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        if (score > max)
            max = score;
        else if (score < min)
            min = score;
    }
    printf("%d %d\n", max, min);
}