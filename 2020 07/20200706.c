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


// 1618 : 줄 세우기
void line() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b && a < c) printf("%d ", a);
	else if (b < a && b < c) printf("%d ", b);
	else printf("%d ", c);

	if ((a < b && a > c) || (a > b && a < c)) printf("%d ", a);
	else if ((b < a && b > c) || (b > a && b < c)) printf("%d ", b);
	else printf("%d ", c);

	if (a > b && a > c) printf("%d\n", a);
	else if (b > a && b > c) printf("%d\n", b);
	else printf("%d\n", c);
}


// 1660 : 파싱(parsing) 1
void parsing1() {
	char str[100];

	scanf("%s", str);
	for (int i = 0; str[i] != NULL; i++)
		if (str[i] != ',') printf("%c", str[i]);
		else printf(" ");
	return 0;
}


// 1661 : 파싱(parsing) 2
void parsing2() {
	char str[100];
	scanf("%[^\n]", str);

	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] == ',') printf(" ");
		else if (str[i] == ';') printf("\n");
		else if (str[i] == ' ')continue;
		else printf("%c", str[i]);
	}
}


// 1671 : 가위바위보 게임
void rsp() {
	int p, c;
	scanf("%d %d", &p, &c);
	
	if (p == 0) {
		if (c == 0) printf("tie");
		else if (c == 1) printf("win");
		else printf("lose");
	} else if (p == 1) {
		if (c == 0) printf("lose");
		else if (c == 1) printf("tie");
		else printf("win");
	} else {
		if (c == 0) printf("win");
		else if (c == 1) printf("lose");
		else printf("tie");
	}
}



int main() {
	
}
