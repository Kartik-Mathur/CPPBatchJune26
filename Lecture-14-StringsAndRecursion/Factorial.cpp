#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0) {
		return 1;
	}

	return n * factorial(n - 1);
}

// int factorial(int n) {
// 	// base case
// 	if (n == 0) {
// 		return 1;
// 	}
// 	// recursive case
// 	int chotiProblem = factorial(n - 1);// Assumption
// 	int ans = n * chotiProblem;
// 	return ans;
// }



int main() {
	int  n;
	cin >> n;
	cout << factorial(n) << endl;

	return 0;
}
















