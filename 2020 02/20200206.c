/*
  gbs라는 개미 투자자가 주식에 투자하려고 합니다.
  이 사람이 투자한 돈의 액수와, 그 주식의 하루간의 변동을 퍼센트로 알 때, 이 사람의 순수익과 이득/손해 판단을 출력하세요. 
 */

#include <stdio.h>

int main() {
	int  a, b, c;
	float sum = 0;
	scanf("%d", &a);
	sum = a;
	scanf("%d", &b);
	for (int i = 0; i < b; i++) {
		scanf("%d", &c);
		sum = sum * (1 + (c / 100.));
	}
	printf("%.0f\n", sum - a);

	if (sum > a)
		printf("good\n");
	else if (sum == a)
		printf("same\n");
	else
		printf("bad\n");
}