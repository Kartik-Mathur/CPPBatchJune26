#include <iostream>
using namespace std;

int main() {

	int no, d;
	cin >> no; // Initialisation of number

	/*
		for ( ; no > 0 ; no /= 10) {
			d = no % 10;
			cout << d;
		}
	*/

	int ans = 0;
	for ( ; no > 0 ; no /= 10) {
		d = no % 10;
		// ans = ans * 10 + d;
		cout << d * 10 << endl;
	}

	cout << ans << endl;
	cout << ans * 5;


	/*
		while (no > 0) { // Condition Check
			d = no % 10;
			cout << d;
			no /= 10; // Updation of Number
		}
	*/
	cout << endl;

	return 0;
}




