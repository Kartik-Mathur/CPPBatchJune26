#include<iostream>
using namespace std;
void mergeSorted(int a[], int m, int b[], int n) {
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;

	while (i >= 0 && j >= 0) {
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

	while (j >= 0) {
		a[k] = b[j];
		k--;
		j--;
	}

	while (i >= 0) {
		a[k] = a[i];
		k--;
		i--;
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int a[9] = {3, 5, 7, 8, 9};
	int m = 5;

	// int a[7] = {3, 5, 8};
	// int m = 3;

	int b[4] = {1, 2, 4, 6};
	int n = 4;

	mergeSorted(a, m, b, n);
	printArray(a, m + n);
}