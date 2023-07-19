#include <iostream>
using namespace std;

void printArray(int a[5], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}


int main() {

	int a[] = {9, 6, 0, 1, -1, 30, 10, 20};
	int n = sizeof(a) / sizeof(int);

	int b[] = { -5, 0, -10, 6, 342, 4323532, 423423, 4};
	int m = sizeof(b) / sizeof(int);

	printArray(a, n);
	bubbleSort(a, n);
	printArray(a, n);

	printArray(b, n);
	bubbleSort(b, n);
	printArray(b, n);


	return 0;
}