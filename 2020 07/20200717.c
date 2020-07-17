#include <stdio.h> 

int main() { 
	char b;
	int t, x, m, c, w;		// 평수, 한 층의 무게, 돈, 풍선 가격, 풍선이 드는 무게

	scanf("%c", &b);
	scanf("%d", &t);
	scanf("%d", &x);
	scanf("%d %d", &m, &c);
	scanf("%d", &w);

	int count = 1;
	if (b == 'A') count = 10;
	else if (b == 'S') count = 2;

	int result = (x * count / w) + t;
	int money = result * c;

	if (m > money) {
		printf("Yes");
	} else {
		printf("No");
	}
}


