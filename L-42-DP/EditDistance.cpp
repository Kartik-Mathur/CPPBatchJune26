#include <iostream>
using namespace std;

int editDistance(string s1, int n, string s2, int m, int dp[][100]) {
	// base case
	if (n == 0) return dp[n][m] = m;
	if (m == 0) return dp[n][m] = n;

	if (dp[n][m] != -1) return dp[n][m];
	// recursive case
	if (s1[n - 1] == s2[m - 1]) {
		return dp[n][m] = editDistance(s1, n - 1, s2, m - 1, dp);
	}
	else {
		return dp[n][m] = min(
		                      editDistance(s1, n - 1, s2, m, dp),
		                      min(
		                          editDistance(s1, n, s2, m - 1, dp),
		                          editDistance(s1, n - 1, s2, m - 1, dp)
		                      )
		                  ) + 1;
	}
}

int main() {

	string s1 = "dalda", s2 = "ladla";
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	cout << editDistance(s1, s1.size(), s2, s2.size(), dp) << endl;

	return 0;
}
















