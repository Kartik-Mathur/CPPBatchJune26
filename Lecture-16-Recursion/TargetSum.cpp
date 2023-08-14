#include <iostream>
using namespace std;

int main() {

	int n;
	int a[50];
	int target;
	cin >> n >> target;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int ans = 0;

	for (int i = 0; i < (1 << n); ++i)
	{
		int no = i;
		int sum = 0;

		for (int i = 0; i < n; ++i)
		{
			if ((no & 1) == 0) {
				sum += a[i];
			}
			else {
				sum = sum - a[i];
			}

			no = no >> 1;
		}
		if (sum == target) {
			ans++;
		}
	}

	cout << ans << endl;




	/*
		for (int i = 0; i < (1 << n); ++i)
		{
			// cout << i << endl;
			int no = i;
			int ans = 0;

			for (int i = 0; i < n; ++i)
			{
				// cout << (no & 1);
				if ((no & 1) == 0) {
					// Then array ka ith element will be +ve
					cout << "+" << a[i];
					ans += a[i];
				}
				else {
					// Array ka element will be negative
					cout << "-" << a[i];
					ans = ans - a[i];
				}

				no = no >> 1;
			}

			// Print the binary of no

			while (no > 0) {

				cout << (no & 1);

				no = no >> 1;
			}

			cout << " : " << ans << endl;
		}
	*/
	return 0;
}
















