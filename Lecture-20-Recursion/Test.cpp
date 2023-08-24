#include <iostream>
using namespace std;

int nStairs(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	if (n < 0) {
		return 0;
	}

	// recursive case
	return nStairs(n - 1) + nStairs(n - 2) + nStairs(n - 3);
}

int main() {

	cout << "n:0 --> " << nStairs(0) << endl;
	cout << "n:1 --> " << nStairs(1) << endl;
	cout << "n:2 --> " << nStairs(2) << endl;
	cout << "n:3 --> " << nStairs(3) << endl;
	cout << "n:4 --> " << nStairs(4) << endl;
	cout << "n:5 --> " << nStairs(5) << endl;


	return 0;
}
















