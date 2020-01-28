/* 주어지는 문장의 대문자를 소문자로, 소문자를 대문자로 변경하는 프로그램을 작성하라. */

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
