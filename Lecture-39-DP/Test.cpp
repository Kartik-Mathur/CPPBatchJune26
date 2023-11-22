#include <iostream>
using namespace std;

int minCoins(int amt, int deno[], int n, int *dp) {
	// base case
	if (amt == 0) {
		return dp[amt] = 0;
	}

	if (dp[amt] != -1) return dp[amt];

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amt >= deno[i]) {
			int chotiAmt = amt - deno[i];
			int x = minCoins(chotiAmt, deno, n, dp);
			// when chotiAmt ka ans is not possible
			// x<--INT_MAX,  (INT_MAX + 1 == INT_MIN)
			if (x != INT_MAX) ans = min(ans, x + 1);
		}
	}
	return dp[amt] = ans;
}

int bottomUp(int amt, int *deno, int n) {
	int dp[1000];
	for (int i = 0; i < 1000; ++i)
	{
		dp[i] = INT_MAX;
	}

	dp[0] = 0;

	for (int rupay = 1; rupay <= amt; ++rupay)
	{
		for (int i = 0; i < n; ++i)
		{
			if (rupay >= deno[i]) {
				int choteRupay = rupay - deno[i];
				if (dp[choteRupay] != INT_MAX)
					dp[rupay] = min(dp[rupay], dp[choteRupay] + 1);
			}
		}
	}

	return dp[amt];
}

int main() {

	int deno[] = {1, 7, 10};
	int n = sizeof(deno) / sizeof(int);
	int dp[1000];
	for (int i = 0; i < 1000; ++i)
	{
		dp[i] = -1;
	}
	cout << minCoins(999, deno, n, dp) << endl;
	cout << bottomUp(999, deno, n) << endl;

	// cout << INT_MIN - 1 << endl;
	// cout << INT_MAX << endl;

	// cout << INT_MAX + 1 << endl;
	// cout << INT_MIN << endl;


	return 0;
}
















