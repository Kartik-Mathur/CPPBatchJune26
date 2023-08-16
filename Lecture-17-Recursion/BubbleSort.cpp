#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int i) {
	// base case
	if (i == n - 1) { // Agar n-1 elements unki sahi place par chale gaye
		// Toh that means poora array sorted hai
		return;
	}

	// recursive case
	// 1. Ek element ko uski sahi jagah mei rakh deta hoon, i.e. i-->0 ke liye mei kr
	// deta hoon kaam
	for (int j = 0; j < n - 1 - i; ++j)
	{
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}

	// Baaki ka kaam mei recursion ko bol deta hoon
	bubbleSort(a, n, i + 1);
}

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);
	bubbleSort(a, n, 0);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















