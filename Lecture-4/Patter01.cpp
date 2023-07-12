#include <iostream>
using namespace std;

int main() {

	int n, row, i, x;
	cin >> n;

	for (row = 1 ; row <= n ; row++) {
		// Work
		x = row % 2;
		// Row times number print karne hai
		for (i = 1 ; i <= row ; ++i, x = 1 - x) {
			cout << x << " ";
		}


		cout << endl;
	}

	/* // Approach-1
		for (row = 1 ; row <= n ; row++) {
			// Work
			if (row % 2 == 0) {
				x = 0;
			}
			else {
				x = 1;
			}

			// Row times number print karne hai
			for (i = 1 ; i <= row ; ++i) {
				cout << x << " ";
				x = 1 - x;
			}


			cout << endl;
		}
	*/

	return 0;
}
















