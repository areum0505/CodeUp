#include <stdio.h> 

int main() { 
	int n, a, b; 
	int state = 0; 
	scanf("%d", &n); 
	scanf("%d", &a); 
	for (int i = 0; i < n - 1; i++) { 
		scanf("%d", &b); 
		if (b > a) state++;
		else if (b < a) state--;
		a = b; 
	} 

	if ((state + 1) == n) 
		printf("오름차순"); 
	else if (-(state - 1) == n) 
		printf("내림차순");
	else printf("섞임");
}

