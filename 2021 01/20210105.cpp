#include <iostream>
using namespace std;

int main(void) {
	int n;
	int card[50];
	cin >> n;
	for (int i = 0; i < n - 1; i++)
		cin >> card[i];
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (card[i] < card[j]) {
				temp = card[i];
				card[i] = card[j];
				card[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (card[i] != i + 1) {
			cout << i + 1 << endl;
			break;
		}
	}
}
