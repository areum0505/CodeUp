#include<stdio.h>

int main() {
    int n[15];
    char m[15][15];
    
    for(int j = 1; j <= 10; j++){
        scanf("%d",&n[j]);
    }

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            if(n[j] >= ((11 - i) * 10))
              m[i][j]='#';
            else 
            m[i][j] = ' ';
        }
    }
    
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%c ",m[i][j]);
        }
        printf("\n");
    }
}
