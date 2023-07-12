#include <iostream>
using namespace std;

/* Logic Building Code
	int i;
	char ch = 'A';


	for (i = 0; i < 5; ++i)
	{
		cout << ch << " ";
		ch ++;
	}
	ch --; // F-->E
	// cout << endl << "Outside loop ch: " << ch << endl;
	for (i = 0; i < 5; ++i)
	{
		cout << ch << " ";
		ch --;
	}

	cout << endl;
*/

int main() {

	// Pattern Code
	char ch;
	int n, row, i;
	cin >> n;


	for (row = 1 ; row <= n ; row++) {
		// Generic Work
		// 1. Increasing Characters
		ch = 'A';
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << ch << " ";
			ch++;
		}

		// 2. Decreasing Characters
		ch--;
		for (i = 1 ; i <= n - row + 1 ; i++) {
			cout << ch << " ";
			ch--;
		}

		cout << endl;
	}



	return 0;
}
















