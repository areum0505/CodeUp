/*	5 5 5 5 5

	4 4 4 4

	3 3 3

	2 2

	1  */

#include <stdio.h>

int main() {
	int num;

	scanf("%d", &num);
	for (int i = num; i > 0; i--) {
		for (int j = 0; j < i; j++)
			printf("%d ", i);
		printf("\n");
	}
}