#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 0, 4, 2, 3};
	int n = sizeof(a) / sizeof(int);

	int prefixSum[100];

	prefixSum[0] = a[0];

	/*
	for (int i = 1; i < n; ++i) {
		prefixSum[i] = prefixSum[i - 1] + a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		prefixSum[i] %= n;
	}
	*/

	for (int i = 1; i < n; ++i) {
		prefixSum[i] = prefixSum[i - 1] + a[i];
		prefixSum[i] %= n;
	}

	int cnt[10000] = {0};
	cnt[0] = 1;
	for (int i = 0; i < n; ++i)
	{
		cnt[prefixSum[i]]++;
	}

	// Calculate the answer
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += (cnt[i] * (cnt[i] - 1)) / 2;
	}
	cout << ans << endl;


	return 0;
}
















