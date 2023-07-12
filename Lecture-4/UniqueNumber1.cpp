// Given N numbers, all the numbers occurs twice except 1 number,
// find the number that occurs only once.

// Example:  1, 2, 3, 2, 1
// ANS: 3

// Example:  1, 3, 2, 4, 1, 3, 2
// ANS: 4

#include <iostream>
using namespace std;

int main() {

	int n, i, no;
	int ans = 0;
	cin >> n;
	i = 1;
	while (i <= n) {
		cin >> no;
		ans = ans ^ no;

		i ++;
	}

	cout << ans << endl;

	return 0;
}
















