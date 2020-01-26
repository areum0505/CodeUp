/* 그 문장에서 love가 몇 번 나오는지 출력하시오. */

#include <stdio.h>

int main() {
	char s[200];
	int count = 0;
	scanf("%[^\n]", s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'l' && s[i + 1] == 'o' && s[i + 2] == 'v' && s[i + 3] == 'e')
			count++;
	}
	printf("%d \n", count);
}