#include <iostream>
using namespace std;
// Arrays are always passed by reference, it is not possible to pass an
// array by value

// void printArray(int a[], int n) {
void printArray(int a[5], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void updateArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		a[i] *= a[i];
	}
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);
	updateArray(a, n);
	printArray(a, n);


	return 0;
}
















