#include <iostream>
using namespace std;

int main() {

	int no, no_copy;
	cin >> no;

	no_copy = no;

	// Finding the digits sum
	int digit_sum = 0;
	while (no > 0) {
		int ld = no % 10;
		digit_sum += ld;
		no /= 10;
	}

	// cout << "Digits Sum: " << digit_sum << endl;

	no = no_copy;
	// Ab number ke prime factors ke digits ka sum nikalna hai
	int pf = 2;
	int pf_digits_sum = 0;


	while (no > 1) {

		while (no % pf == 0) {
			// Current pf ko x mei daalo and uske digits ka sum
			// nikalo
			int x = pf;
			int sum = 0;
			while (x > 0) {
				int ld = x % 10;
				sum += ld;
				x /= 10;
			}

			pf_digits_sum += sum;

			no /= pf ;
		}

		pf++;
	}

	// cout << pf_digits_sum << endl;
	if (digit_sum == pf_digits_sum) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}

	return 0;
}
















