/* 두 자연수 a, b 사이의 구간에 대해서
   홀수는 더하고 짝수는 뺀다음의 합을 출력하시오. */

#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	for(int i = a; i <= b; i++) {
		if(i % 2 == 0) sum -= i;
		else sum += i;
	}
	printf("%d", sum);
}