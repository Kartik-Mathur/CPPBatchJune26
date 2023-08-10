#include <iostream>
using namespace std;

void printDec(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	cout << n << ' ';// ek number mei print kr deta hoon
	printDec(n - 1);
}

void printInc(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	printInc(n - 1);
	cout << n << ' ';
}


int main() {

	int n;
	cin >> n;

	printDec(n);
	cout << endl;
	printInc(n);
	cout << endl;

	return 0;
}

