/*
  gbs��� ���� �����ڰ� �ֽĿ� �����Ϸ��� �մϴ�.
  �� ����� ������ ���� �׼���, �� �ֽ��� �Ϸ簣�� ������ �ۼ�Ʈ�� �� ��, �� ����� �����Ͱ� �̵�/���� �Ǵ��� ����ϼ���. 
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