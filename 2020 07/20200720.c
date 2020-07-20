#include <stdio.h>
 
void f(int k) {
    if (k == 1) {
        printf("1\n");
        return ;
    }
    
    if (k % 2 == 1) 
    	f(3 * k + 1);
    else 
    	f(k / 2);
      
    printf("%d\n", k);
}
 
int main() {
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}


