#include <stdio.h>

int main(void) {
    int p[3], j[2];
    int pasta, juice;
    
    for(int i = 0; i < 3; i++) {
        scanf("%d", &p[i]);
    }
    for(int i = 0; i < 2; i++) {
        scanf("%d", &j[i]);
    }
    
    int min = 1000000;
    for(int i = 0; i < 3; i++) {
        if(min > p[i]) min = p[i];
    }
    pasta = min;
    min = 1000000;
    for(int i = 0; i < 2; i++) {
        if(min > j[i]) min = j[i];
    }
    juice = min;
    
    printf("%.1lf", (pasta + juice) * 1.1);
}
