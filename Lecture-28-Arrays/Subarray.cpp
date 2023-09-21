// 10^12 = 10^7*10^5,
#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = { -1, -2, -3};
	int n = sizeof(a) / sizeof(int);

	int maxSum = INT_MIN;
	// T.C: O(N^3)
	// N -> 10^4, TLE

	// N^3 -> 10^12
	// 10^7 -> 1 second
	// 10^12 = 10^7*10^5,
	// 10^12 = 10^5 seconds,


	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int ans = 0;

			for (int k = i; k <= j; ++k)
			{
				// cout << a[k] << " ";
				ans +=  a[k];
			}
			// cout << ", SUM : " << ans << endl;
			maxSum = max(maxSum, ans);
		}
	}

	cout << "Max Sum: " << maxSum << endl;

	return 0;
}
















