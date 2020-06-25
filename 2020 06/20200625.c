#include <stdio.h>
int main(void) {
    int a, b, c; 
    int gcd = 0;
    
    scanf("%d %d %d",&a,&b,&c);
    
    for(int i = 1; i <= c; i++) {
        if(a % i == 0 && b % i == 0 && c % i == 0)
            gcd = i;
    }
    
    printf("%d", gcd);
    
    return 0;
}
