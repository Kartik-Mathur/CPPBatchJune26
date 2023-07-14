#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for (int row = 1; row <= (n + 1) / 2; ++row)
	{
		if (row == 1) {
			// 1. Print n stars
			for (int i = 0; i < n; ++i)
			{
				cout << "*\t";
			}
		}
		else {
			// 1. Print (n+1)/2-row+1 times stars
			for (int i = 0; i < (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
			// 2. Print 2*row-3 times spaces
			for (int i = 0; i < 2 * row - 3; ++i)
			{
				cout << "\t";
			}
			// 3. Print (n+1)/2-row+1 times stars
			for (int i = 0; i < (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
		}

		cout << endl;
	}

	for (int row = (n + 1) / 2 - 1; row >= 1; --row)
	{
		if (row == 1) {
			// 1. Print n stars
			for (int i = 0; i < n; ++i)
			{
				cout << "*\t";
			}
		}
		else {
			// 1. Print (n+1)/2-row+1 times stars
			for (int i = 0; i < (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
			// 2. Print 2*row-3 times spaces
			for (int i = 0; i < 2 * row - 3; ++i)
			{
				cout << "\t";
			}
			// 3. Print (n+1)/2-row+1 times stars
			for (int i = 0; i < (n + 1) / 2 - row + 1; ++i)
			{
				cout << "*\t";
			}
		}

		cout << endl;
	}




	return 0;
}
















