#include <iostream>
#include <vector>
using namespace std;

int lis_len = 0;
vector<int> ans;

void LIS(int *a, int n, vector<int> &v, int lv = INT_MAX) {
	// base case
	if (n == 0) {
		if (v.size() > lis_len) {
			lis_len = v.size();
			ans = v;
		}
		return;
	}
	// recursive case
	// 1. Include
	if (lv > a[n - 1]) {
		v.push_back(a[n - 1]);
		LIS(a, n - 1, v, a[n - 1]);
		v.pop_back(); // Backtracking
	}
	// 2. Exclude
	LIS(a, n - 1, v, lv);
}

void printLIS(int *a, int n, int len, int *dp, vector<int> &x, int lv = INT_MAX) {
	// base case
	if (n == 0) {
		if (len == 0) {
			for (int i = x.size() - 1; i >= 0; --i)
			{
				cout << x[i] << " ";
			}
			cout << endl;
		}
		return;
	}
	// recursive case
	if (dp[n - 1] == len and a[n - 1] < lv) {
		x.push_back(a[n - 1]);
		printLIS(a, n - 1, len - 1, dp, x, a[n - 1]);
		x.pop_back();
	}
	printLIS(a, n - 1, len, dp, x, lv);

}

int lis2(int *a, int n) {
	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = 1;
	}

	for (int j = 1; j < n; ++j)
	{
		for (int k = j - 1; k >= 0; --k)
		{
			if (a[j] > a[k]) {
				dp[j] = max(dp[j], dp[k] + 1);
			}
		}
	}

	int mx = 0;
	for (int i = 0; i < n; ++i)
	{
		if (dp[i] > mx) mx = dp[i];
	}
	cout << "Using 2nd Method: \n";
	vector<int> x;
	printLIS(a, n, mx, dp, x);
	return mx;
}

int main() {

	int a[] = {10, 9, 3, 5, 4, 11, 7, 8};
	int n = sizeof(a) / sizeof(int);
	vector<int> v;
	LIS(a, n, v);

	cout << "LIS: " << lis_len << endl;
	for (int i = ans.size() - 1; i >= 0; --i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;

	cout << lis2(a, n) << endl;

	return 0;
}
















