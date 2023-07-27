#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};

	int * p; // p is an integer pointer
	p = a;
	// int * p = a;

	for (int i = 0; i < 5; ++i)
	{
		// cout << *(p + i) << " "; // a[i] == *(a+i)
		cout << p[i] << " "; // a[i] == *(a+i)
	}

	cout << endl;

	return 0;
}
















