#include <iostream>
using namespace std;
int sum(int n) {
	if (n == 0) {
		return 0;
	}

	return n +  sum(n - 1);
}

/*
int sum(int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	//  recursive case, sum(n) = n + sum(n-1)
	int chotaSum = sum(n - 1);
	int badaSum = n +  chotaSum;
	return badaSum;
}
*/

int main() {

	int n;
	cin >> n;

	cout << sum(n) << endl;

	return 0;
}
















