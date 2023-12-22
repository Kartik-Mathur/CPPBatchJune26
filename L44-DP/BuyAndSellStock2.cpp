class Solution {
public:

	int solve(int i, vector<int>& prices,
	          int k, bool kyaKchKhareeda, int transactions, int dp[][101]) {
		// base case
		if (i == prices.size() || k == 2 * transactions) {
			return dp[i][k] = 0;
		}
		if (dp[i][k] != -1) return dp[i][k];
		// recursive case
		int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;
		if (!kyaKchKhareeda) // Buying
			op1 = -prices[i] + solve(i + 1, prices, k + 1, true, transactions, dp);
		else // 2. Selling
			op2 = +prices[i] + solve(i + 1, prices, k + 1, false, transactions, dp);

		// 3. Waiting
		op3 = 0 + solve(i + 1, prices, k, kyaKchKhareeda, transactions, dp);
		return dp[i][k] = max(op1, max(op2, op3));
	}

	int maxProfit(int totalTransactions, vector<int>& prices) {
		int transactions = totalTransactions;
		int dp[100004][101];
		memset(dp, -1, sizeof dp);
		return solve(0, prices, 0, false, transactions, dp);
	}
};