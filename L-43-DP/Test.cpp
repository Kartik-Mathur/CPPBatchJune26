#include <iostream>
using namespace std;

int knapsack(int *price, int *wt, int n, int cap, int dp[][100]) {
	// base case
	if (n == 0 || cap == 0) return dp[n][cap] = 0;

	if (dp[n][cap] != -1) return dp[n][cap];
	// recursive case
	int op1, op2;
	op1 = op2 = INT_MIN;
	if (cap >= wt[n - 1]) {
		op1 = price[n - 1] + knapsack(price, wt, n - 1, cap - wt[n - 1], dp);
	}
	op2 = 0 + knapsack(price, wt, n - 1, cap, dp);
	return dp[n][cap] = max(op1, op2);
}

int bottomUp(int *price, int *wt, int N, int capacity) {
	int dp[100][100] = {0};

	for (int n = 1; n <= N; ++n)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			int op1, op2;
			op1 = op2 = INT_MIN;

			if (cap >= wt[n - 1]) {
				op1 = price[n - 1] + dp[n - 1][cap - wt[n - 1]];
			}
			op2 = 0 + dp[n - 1][cap];
			dp[n][cap] = max(op1, op2);
		}
	}

	return dp[N][capacity];
}

int main() {

	int price[] = {2, 3, 3, 5};
	int weight[] = {1, 2, 4, 3};
	int cap = 5;

	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << knapsack(price, weight, 4, 5, dp) << endl;
	cout << bottomUp(price, weight, 4, 5) << endl;

	return 0;
}
















