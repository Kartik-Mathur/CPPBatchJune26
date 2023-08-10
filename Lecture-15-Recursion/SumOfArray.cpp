#include <iostream>
using namespace std;

int sum(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	return a[0] + sum(a + 1, n - 1);
}

int sum2(int *a, int i, int n) {
	// base case
	if (i == n) {
		return 0;
	}

	// recursive case
	return a[i] + sum2(a, i + 1, n);
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << sum(a, n) << endl;
	cout << sum2(a, 0, n) << endl;

	return 0;
}
















