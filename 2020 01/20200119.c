/* 대나무의 원래의 길이를 n이라고 할 때, 이 대나무를 어떤 길이로 잘랐을 때 이 길이가 n의 약수이면 이 대나무는 좋은 소리를 내는 악기가 될 수 있다. */

#include <stdio.h>

int main() {
	int n;
	int count = 0;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		if (n % i == 0)
			count++;
	}
	printf("%d \n", count);
}