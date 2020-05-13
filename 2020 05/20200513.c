#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int n, area = 0, s = 0;
    scanf("%d", &n);
    
    for (int i = 1; i < n / 2; i++) {
        if (area < (n - (2 * i)) * i) {
            area = (n - (2 * i))* i;
            s = i;
        } 
    }

    printf("%d\n", s);
}