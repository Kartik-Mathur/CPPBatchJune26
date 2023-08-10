#include <iostream>
using namespace std;

int fact(int n) {
	if (n == 0) {
		return 1;
	}

	// recursive case
	return n * fact(n - 1);
}


int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive case, fact(n) = n * fact(n - 1);
	// Assumption: Choti problem best friend solve krke dega
	int chotaAns = fact(n - 1);
	int badaAns = n * chotaAns;

	return badaAns;
}

int main() {
	int n;
	cin >> n;
	cout << fact(n) << endl;

	return 0;
}
















