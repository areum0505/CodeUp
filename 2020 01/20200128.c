/* �־����� ������ �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ� �빮�ڷ� �����ϴ� ���α׷��� �ۼ��϶�. */

#include <stdio.h>
int main() {
	char str[1000];
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			printf("%c", str[i] - 32);
		else if ('A' <= str[i] && str[i] <= 'Z')
			printf("%c", str[i] + 32);
		else
			printf("%c", str[i]);
	}
}
