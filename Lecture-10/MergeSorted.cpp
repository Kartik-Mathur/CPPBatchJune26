#include <iostream>
using namespace std;

void mergeSorted(int a[], int m, int b[], int n) {
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;

	while (i >= 0 and j >= 0) {
		if (a[i] > b[j]) {
			a[k] = a[i];
			k--;
			i--;
		}
		else {
			a[k] = b[j];
			k--;
			j--;
		}
	}

	// agar b[] ke andar kch elements reh gaye toh unhe a[] mei
	// copy krdo
	while (j >= 0) {
		a[k] = b[j];
		k--;
		j--;
	}
}

void printArray(int a[], int n) {

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}


int main() {

	int a[7] = {3, 4, 6};
	int m = 3;

	int b[4] = {1, 2, 5, 8};
	int n = 4;

	mergeSorted(a, m, b, n);
	printArray(a, m + n);


	return 0;
}
















