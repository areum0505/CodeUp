/* 두 자연수 a, b 사이의 구간에 대해서
   홀수는 더하고 짝수는 빼는 식을 보여준 후 결과를 출력하시오. */

#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	for(int i = a; i <= b; i++) {
		if(i % 2 == 0) {
			sum -= i;
			printf("-%d", i);
		}
		else {	
			if(i == a) printf("%d", i);
			else printf("+%d", i);
			sum += i;
		}
	}
	if (sum > 0)
		printf("=+%d", sum);
	else
		printf("=%d", sum);
}
