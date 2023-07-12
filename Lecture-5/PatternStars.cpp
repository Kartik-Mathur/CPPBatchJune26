#include <iostream>
using namespace std;

int main() {

	int n, i, row;
	cin >> n;

	for (row = 1 ; row <= n ; row++) {
		// Generic Work
		// 1. Print row times star
		for (i = 1 ; i <= row ; i++) {
			cout << '*';
		}

		// 2. Print ' '
		cout << " ";

		// 3. Print n-row+1 times star
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << '*';
		}

		// 4. Print ' '
		cout << " ";

		// 5. Print n-row+1 times star
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << '*';
		}

		// 6. Print ' '
		cout << " ";

		// 7. Print row times star
		for (i = 1 ; i <= row ; i++) {
			cout << '*';
		}

		cout << endl;
	}

	return 0;
}
















