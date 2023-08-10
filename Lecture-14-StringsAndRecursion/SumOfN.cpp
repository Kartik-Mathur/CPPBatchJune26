#include <iostream>
using namespace std;

int sum(int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	return n + sum(n - 1);
}

int sum(int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	// sum(n) = n + sum(n-1)
	// Pure Assumption hai ki choti problem solve ho jaegi
	int chotaAns = sum(n - 1);

	int badaAns = n + chotaAns;
	return badaAns;
}


int main() {
	int n;
	cin >> n;
	cout << sum(n) << endl;

	return 0;
}













