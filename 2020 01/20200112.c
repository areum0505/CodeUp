/* 기상곡과 기상곡 사이에 AMOLED가 삽입되게 한다. */

#include <stdio.h>

int main() {
	int n;
	char song[100][100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &song[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%s \n", song[i]);
		if (i != n - 1)
			printf("AMOLED \n");
	}
}