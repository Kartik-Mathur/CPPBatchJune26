#include <iostream>
#include <cstring> // memset
using namespace std;

int wine(int *a, int l, int r, int day) {
	// base case
	if (r < l) {
		return 0;
	}

	// recursive case
	int op1 = a[l] * day + wine(a, l + 1, r, day + 1);
	int op2 = a[r] * day + wine(a, l, r - 1, day + 1);

	return max(op1, op2);
}

int topDown(int *a, int l, int r, int day, int dp[][100]) {
	// base case
	if (r < l) {
		return dp[l][r] = 0;
	}

	if (dp[l][r] != -1) return dp[l][r];

	// recursive case
	int op1 = a[l] * day + topDown(a, l + 1, r, day + 1, dp);
	int op2 = a[r] * day + topDown(a, l, r - 1, day + 1, dp);

	return dp[l][r] = max(op1, op2);
}

int bottomUp(int a[], int n) {
	int dp[100][100] = {0};

	for (int i = 0; i < n; ++i)
	{
		dp[i][i] = a[i] * n;
	}

	for (int l = n - 2; l >= 0; --l)
	{
		for (int r = l + 1; r < n; ++r)
		{
			int day = n - r + l;
			int op1 = a[l] * day + dp[l + 1][r];
			int op2 = a[r] * day + dp[l][r - 1];
			dp[l][r] = max(op1, op2);
		}
	}
	return dp[0][n - 1];
}

int main() {

	int a[] = {2, 3, 5, 1, 4};
	int n = sizeof(a) / sizeof(int);
	int dp[100][100];

	memset(dp, -1, sizeof dp);

	cout << wine(a, 0, n - 1, 1) << endl;
	cout << topDown(a, 0, n - 1, 1, dp) << endl;
	cout << bottomUp(a, n) << endl;
	return 0;
}
















