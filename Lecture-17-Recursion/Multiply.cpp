#include <iostream>
using namespace std;

int multiply(int a, int b) {
	// base case
	if (b == 0) {
		return 0;
	}

	// recursive case
	return a + multiply(a, b - 1);
	// int chotaAns = multiply(a, b - 1);
	// int badaAns = a + chotaAns;

	// return badaAns;
}

int main() {

	cout << multiply(5, 3) << endl;

	return 0;
}

















