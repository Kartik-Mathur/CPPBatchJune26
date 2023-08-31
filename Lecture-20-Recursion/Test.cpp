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

int nStairs1(int n, int k) {
	// base case
	if (n == 0) {
		return 1;
	}

	if (n < 0) {
		return 0;
	}

	// recursive case
	int ans = 0;

	for (int i = 1; i <= k; ++i)
	{
		ans += nStairs1(n - i, k);
	}

	return ans;
}

int main() {


	cout << nStairs(5) << endl;
	cout << nStairs1(5, 3) << endl;


	return 0;
}
















