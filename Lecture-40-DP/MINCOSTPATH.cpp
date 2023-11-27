#include <iostream>
using namespace std;

int bottomUp(int a[][10], int n, int m) {
	int dp[10][10];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (i == 0 and j == 0) dp[i][j] = a[i][j];
			else {
				int op1 = (i - 1) >= 0 ? dp[i - 1][j] : INT_MAX;
				int op2 = (j - 1) >= 0 ? dp[i][j - 1] : INT_MAX;
				dp[i][j] = min(op1, op2) + a[i][j];
			}
		}
	}

	return dp[n - 1][m - 1];
}

int main() {

	int a[][10] = {
		{1, 1, 5, 2},
		{2, 1, 3, 4},
		{4, 1, 1, 1},
		{3, 6, 7, 1},
	};
	cout << bottomUp(a, 4, 4) << endl;
	return 0;
}
















