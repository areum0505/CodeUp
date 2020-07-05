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


// 1578 : (함수 작성) 최댓값 함수
int mymax(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}


// 1579 : (함수 작성) 최솟값 함수
int mymin(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}


// 1580 : (함수 작성) 원의 넓이
float circle(int r) {
	return (float)(r * r * 3.14);
}



main() {
    
}
