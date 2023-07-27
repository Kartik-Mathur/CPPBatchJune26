#include <iostream>
using namespace std;

void printArray(int *x, int n) {
	for (int i = 0; i < n; ++i)
	{
		// cout << * (x + i) << " ";
		cout << x[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);


	int *p = NULL;
	p = a;
	cout << p << endl;
	cout << *p << endl;



	return 0;
}
















