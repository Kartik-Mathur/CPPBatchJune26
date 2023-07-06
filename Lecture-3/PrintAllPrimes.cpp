#include <iostream>
using namespace std;

int main() {

	int n, flag, i, no;
	cin >> n;
	no = 2;
	while (no <= n) {
		// How to check no is prime or not
		// no should not be divisible by range [2,no-1]
		flag = 1;
		i = 2;
		while (i <= no - 1) {
			if (no % i == 0) {
				flag = 0;
			}

			i = i + 1;
		}

		if (flag == 1) {
			cout << no << " ";
		}

		no = no + 1;
	}

	cout << endl;

	return 0;
}















