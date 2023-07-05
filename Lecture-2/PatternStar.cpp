#include <iostream>
using namespace std;

/*

*
* *
* * *
* * * *
* * * * *

*/

int main() {

	int n, row, i;
	cin >> n;

	row = 1;
	while (row <= n) {

		i = 1;
		while (i <= row) {

			cout << "* ";

			i = i + 1;
		}


		cout << endl;
		row = row + 1;
	}



	return 0;
}
















