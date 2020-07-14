#include <stdio.h> 

int main() { 
	char arr[3][3] = { "*x*", " xx", "* *" };
	int k; 
	scanf("%d", &k); 
	for (int i = 0; i < 3; i++) { 
		for (int x = 0; x < k; x++) { 
			for (int j = 0; j < 3; j++) { 
				for (int y = 0; y < k; y++) { 
					printf("%c", arr[i][j]);
				} 
			} 
			printf("\n"); 
		} 
	}
}

