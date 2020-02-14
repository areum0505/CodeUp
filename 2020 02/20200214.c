/* 식을 입력하면 차례대로 계산하여 출력하는 계산기를 만들어보자. */

#include <stdio.h>
int main() {
	int n1, n2;
	char op;

	scanf("%d ", &n1);
	while (1) {
		scanf("%c", &op);
		if (op == '=')
			break;
		scanf("%d", &n2);

		switch (op) {
		case '+': n1 += n2; break;
		case '-': n1 -= n2; break;
		case '/': n1 /= n2; break;
		case '*': n1 *= n2; break;
		}
	}
	printf("%d \n", n1);
}