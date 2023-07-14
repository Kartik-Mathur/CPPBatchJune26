#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int no = 1;
	if (n >= 1) {
		cout << 0 << endl; // Print kardi 1st row manually
	}

	if (n >= 2) {
		cout << 1 << "\t" << 1 << endl;// Print kardi 2nd row manually
	}

	int a = 1, b = 1, c = 2;
	for (int row = 3; row <= n; ++row)
	{
		for (int i = 0; i < row; ++i)
		{
			cout << c << "\t";
			a = b;
			b = c;
			c = a + b;
		}
		cout << endl;
	}

	return 0;
}
















