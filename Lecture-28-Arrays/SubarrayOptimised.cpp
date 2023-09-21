#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {1, -5, 2, 4, -3, 10, -20};
	int n = sizeof(a) / sizeof(int);

	int maxSum = INT_MIN;
	int ps[1000];
	ps[0] = a[0];
	int si, sj;
	for (int i = 1; i < n; ++i)
	{
		ps[i] = ps[i - 1] + a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{

			int ans = ps[j] - ( (i - 1 < 0) ? 0 : ps[i - 1]);

			// maxSum = max(maxSum, ans);
			if (maxSum < ans) {
				maxSum = ans;
				si = i;
				sj = j;
			}
		}
	}

	for (int i = si; i <= sj; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Max Sum: " << maxSum << endl;

	return 0;
}
















