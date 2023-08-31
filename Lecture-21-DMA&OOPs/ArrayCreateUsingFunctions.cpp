#include <iostream>
using namespace std;

int * createArray(int n) {

	int *x = new int[n];
	for (int i = 0; i < n; ++i)
	{
		x[i] = i + 1;
	}

	return x;
}


int main() {

	int n;
	cin >> n;

	int *a = createArray(n);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















