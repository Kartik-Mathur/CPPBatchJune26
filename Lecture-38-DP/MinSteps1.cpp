#include <iostream>
#include <vector>
using namespace std;

int topDown(int n, int *dp) {
	if (n == 1) return dp[n] = 0;// Return se pehle Store

	if (dp[n] != -1) return dp[n]; // Calculate se pehle check

	int op1, op2, op3;
	op1 = op2 = op3 = INT_MAX;
	op1 = topDown(n - 1, dp);
	if (n % 2 == 0) op2 = topDown(n / 2, dp);
	if (n % 3 == 0) op3 = topDown(n / 3, dp);

	return dp[n] = min(op1, min(op2, op3)) + 1;// Return se pehle Store
}

int bottomUp(int n) {
	vector<int> dp(n + 1);

	dp[1] = 0;

	for (int i = 2; i <= n; ++i)
	{
		int op1, op2, op3;
		op1 = op2 = op3 = INT_MAX;

		op1 = dp[i - 1];
		if (i % 2 == 0) op2 = dp[i / 2];
		if (i % 3 == 0) op3 = dp[i / 3];
		dp[i] = min(op1, min(op2, op3)) + 1;
	}

	for (int i = 1; i <= n; ++i) cout << dp[i] << " ";
	cout << endl;
	return dp[n];

}

int main() {
	int n;
	cin >> n;
	int dp[100000];
	for (int i = 0; i < 100000; ++i) dp[i] = -1;
	cout << topDown(n, dp) << endl;
	cout << bottomUp(n) << endl;



	return 0;
}
















