#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= (n + 1) / 2; ++row)
	{
		if (row == 1) {
			// 1. Print N-2*row+1 times spaces
			for (int i = 0; i < n - 2 * row + 1; ++i)
			{
				cout << "  ";
			}
			// 2. Print 1
			cout << 1;
		}
		else {
			// 1. Print spaces: n-2*row+1
			for (int i = 0; i < n - 2 * row + 1; ++i)
			{
				cout << "  ";
			}
			// 2. Print dec numbers row times, start: row
			int no = row;
			for (int i = 1; i <= row; ++i)
			{
				cout << no << " ";
				no--;
			}
			// 3. Print spaces: 2*row-3 times
			for (int i = 0; i < 2 * row - 3; ++i)
			{
				cout << "  ";
			}
			// 4. print inc numbers row times, start: 1
			no = 1;
			for (int i = 0; i < row; ++i)
			{
				cout << no << " ";
				no++;
			}
		}


		cout << endl;
	}

	for (int row = (n + 1) / 2 - 1; row >= 1; --row)
	{
		if (row == 1) {
			// 1. Print N-2*row+1 times spaces
			for (int i = 0; i < n - 2 * row + 1; ++i)
			{
				cout << "  ";
			}
			// 2. Print 1
			cout << 1;
		}
		else {
			// 1. Print spaces: n-2*row+1
			for (int i = 0; i < n - 2 * row + 1; ++i)
			{
				cout << "  ";
			}
			// 2. Print dec numbers row times, start: row
			int no = row;
			for (int i = 1; i <= row; ++i)
			{
				cout << no << " ";
				no--;
			}
			// 3. Print spaces: 2*row-3 times
			for (int i = 0; i < 2 * row - 3; ++i)
			{
				cout << "  ";
			}
			// 4. print inc numbers row times, start: 1
			no = 1;
			for (int i = 0; i < row; ++i)
			{
				cout << no << " ";
				no++;
			}
		}


		cout << endl;
	}


	return 0;
}
















