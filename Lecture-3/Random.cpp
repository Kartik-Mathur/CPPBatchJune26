#include <iostream>
using namespace std;

int main() {
	int n, spaces, row, i, no;
	cin >> n;
	row = 1;
	while (row <= n) {
		spaces = 1;
		while (spaces <= n - row) {
			cout << " ";
			spaces++;
		}
		no = row;
		i = 1;
		while (i <= row) {
			cout << no;
			no = no + 1;

			i = i + 1;
		}
		no = 2 * row - 2;
		i = 1;
		while (i <= row - 1) {
			cout << no;
			no = no - 1;

			i = i + 1;
		}

		cout << endl;
		row = row + 1;
	}

	return 0;
}