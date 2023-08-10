#include <iostream>
using namespace std;

int power(int x, int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	// recursive case
	return x * power(x, n - 1);
}

int main() {

	cout << power(4, 3) << endl;

	return 0;
}