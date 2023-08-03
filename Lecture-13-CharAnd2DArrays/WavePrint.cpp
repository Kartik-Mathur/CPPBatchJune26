#include <iostream>
using namespace std;

void print2D(int a[][100], int n, int m) {

	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			cout <<  a[r][c] << " ";
		}

		cout << endl;
	}
}

void wavePrint(int a[][100], int n, int m) {
	for (int col = 0; col < m; ++col)
	{
		if (col % 2 == 0) {
			for (int row = 0; row <  n; ++row)
			{
				cout << a[row][col] << " ";
			}
		}
		else {
			for (int row = n - 1; row >= 0; --row)
			{
				cout << a[row][col] << " ";
			}
		}
	}

	cout << endl;
}

int main() {
	int a[100][100];
	int n, m, r, c;

	cout << "Enter row and col";
	cin >> n >> m;

	int num = 1;
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			a[r][c] = num;
			num++;
		}
	}

	print2D(a, n, m);

	wavePrint(a, n, m);

	return 0;
}
















