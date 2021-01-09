#include <iostream>
using namespace std;

int main(void) {
	int n, k[1000] = { 0 };
 
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> k[i];

	for (int i = 0; i < n; i++) {
		for (int j = i; j < i + n; j++) {
			cout <<  k[j % n] << " ";
		}
		printf("\n");
	}
}
 
