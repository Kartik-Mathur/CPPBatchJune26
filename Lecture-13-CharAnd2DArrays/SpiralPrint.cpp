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

void spiralPrint(int a[][100], int n, int m) {
	int sr = 0, sc = 0, er = n - 1, ec = m - 1;

	while (sr <= er and sc <= ec) {
		// 1.Print sr,  sc till ec
		for (int col = sc; col <= ec; ++col) {
			cout << a[sr][col] << " ";
		}
		sr++;

		// 2.Print ec, sr till er
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][ec] << " ";
		}
		ec--;

		// 3.Print er, ec till sc
		if (sr < er) {
			for (int col = ec; col >= sc; col--) {
				cout << a[er][col] << " ";
			}
			er--;
		}

		// 4.Print sc, er till sr
		if (sc < ec) {
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][sc] << " ";
			}
			sc++;
		}
	}
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
	spiralPrint(a, n, m);

	return 0;
}
















