#include <iostream>
using namespace std;

/*

1
2 3
4 5 6
7 8 9 10

*/

int main() {

	int n, row = 1, i = 1, no = 1;
	cin >> n;

	while (row <= n) {
		i = 1;
		while (i <= row) {

			cout << no << " ";
			no = no + 1;

			i = i + 1;
		}

		cout << endl;
		row = row + 1;
	}



}
















