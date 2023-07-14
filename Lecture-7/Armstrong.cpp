#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main() {

	ll n;
	cin >> n;

	ll n_copy = n;

	ll digits = 0;
	while (n != 0) {
		digits++;
		n /= 10;
	}

	// cout << "Digits Cnt: " << digits << endl;

	n = n_copy;
	ll sum = 0;
	while (n != 0) {

		ll ld = n % 10;
		sum = sum + pow(ld, digits);

		n /= 10;
	}

	if (sum == n_copy) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}


	return 0;
}
















