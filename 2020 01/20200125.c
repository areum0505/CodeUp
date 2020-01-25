/* 어떤 문자열이 있을 때 문자 t의 위치를 모두 찾아 출력하시오. */

#include <stdio.h>

int main() {
	char str[100];
	scanf("%s", &str);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 't')
			printf("%d ", i + 1);
	}
}