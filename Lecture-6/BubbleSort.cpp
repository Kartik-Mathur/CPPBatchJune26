#include <iostream>
using namespace std;

int main() {
	/*
	// 1. Swapping ki technique 1
		int temp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = temp;

	// 2. Swapping ki technique 2
		a[j] = a[j] + a[j + 1];
		a[j + 1] = a[j] - a[j + 1];
		a[j] = a[j] - a[j + 1];

	// 3. Swapping ki technique 3
		a[j] = (a[j] + a[j + 1]) - (a[j + 1] = a[j]);

	// 4. Swapping ki technique 4
		swap(a[j],a[j+1])
	*/

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0 ; j <= n - 2 ; ++j) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















