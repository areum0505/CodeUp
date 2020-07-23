#include <stdio.h>

int my_atoi(char c) { return (int)c - 48; }

int main(void) {
	char str[11]; 
	int a[10] = { 0 }; 
	int b[10] = { 0 }; 

	scanf("%s", str); 
	
	a[str[0]-48]++; 
	a[str[1] - 48]++;
	a[str[2] - 48]++;
	a[str[3] - 48]++;
	b[str[5] - 48]++;
	b[str[6] - 48]++;
	b[str[8] - 48]++;
	b[str[9] - 48]++;
	
	for (int i = 0; i < 10; i++) { 
		if (a[i] != b[i]) { 
			printf("no"); 
			return 0; 
		} 
	} 
	printf("yes");
	return 0;
}
