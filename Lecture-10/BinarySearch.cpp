#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
	int s = 0, e = n - 1;

	while (s <= e) {

		int m = (s + e) / 2;

		if (a[m] == key) {
			return m;
		}
		else if (key > a[m]) {
			s = m + 1;
		}
		else {
			e = m - 1;
		}
	}
	// s > e, that means key is not found
	return -1;
}

int main() {

	int a[] = {1, 3, 4, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);

	int key;
	cin >> key;

	cout << binarySearch(a, n, key) << endl;

	return 0;
}
















