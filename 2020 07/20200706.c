#include <stdio.h>

// 1576 : (함수 작성) void형 함수
void f() {
    printf("Hello?");
}


// 1577 : (함수 작성) 절댓값 함수 1
int myabs(int a) {
    if (a >= 0) return a;
    else return a * (-1);
}


main() {
    f();
}
