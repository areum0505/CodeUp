/* �� �ڿ��� a, b ������ ������ ���ؼ�
   Ȧ���� ���ϰ� ¦���� ���� ���� ������ �� ����� ����Ͻÿ�. */

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
