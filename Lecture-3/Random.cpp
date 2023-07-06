#include <iostream>
using namespace std;
int main()
{
	int n, row, spaces, no, i;
	cin >> n;
	while (row <= n) {
		spaces = 1;
		while (spaces <= n - row) {
			cout << " ";
			spaces = spaces + 1;

		}
		no = row;
		i = 1;
		while (i <= row) {
			cout << " ";
			no = no + 1;
			i = i + 1;
		}
		no = 2 * row - 2;
		i = 1;
		while (i <= row - 1) {
			cout << " ";
			no = no - 1;
			i = i + 1;
		}

		cout << endl;
		row = row = 1;
	}
}