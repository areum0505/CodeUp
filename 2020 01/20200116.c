/* 도둑의 DNA의 특징은 DNA의 모든 숫자의 합을 7로 나눈 나머지가 4라는 사실을 알았다. */

#include <stdio.h>

int main() {
	long long int n;
	int sum = 0;
	scanf("%lld", &n);
	for (long long int i = 10; i <= 10000000000; i *= 10) {
		if (i == 10)
			sum += n % i;
		else
			sum += ((n % i) - (n % (i / 10))) / (i / 10);
	}
	if (sum % 7 == 4)
		printf("suspect \n");
	else
		printf("citizen \n");
}