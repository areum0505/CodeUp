/* ���� �Է��ϸ� ���ʴ�� ����Ͽ� ����ϴ� ���⸦ ������. */

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