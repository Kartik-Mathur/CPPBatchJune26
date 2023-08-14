#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int v = 0; v < t; ++v) {
		int n, m;
		cin >> n >> m;
		int a[1000], b[1000];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < m; ++i) {
			cin >> b[i];
		}

		int c1[1000], c2[1000], k = 1;
		c1[0] = 0, c2[0] = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (a[i] == b[j]) {
					if (i - 1 >= 0 and a[i] == a[i - 1]) {
						continue;
					}
					if (j - 1 >= 0 and b[j] == b[j - 1]) {
						continue;
					}
					c1[k] = i;
					c2[k] = j;
					k++;
				}
			}
		}
		c1[k] = n;
		c2[k] = m;
		int sumt = 0;
		for (int l = 0; l < k; ++l) {
			int sum1 = 0, sum2 = 0;
			for (int p = c1[l]; p < c1[l + 1]; ++p) {

				sum1 += a[p];
			}
			for (int p = c2[l]; p < c2[l + 1]; ++p) {
				sum2 += b[p];
			}
			sumt += max(sum1, sum2);
		}
		// for (int i = 0; i < n; ++i) {
		// 	for (int j = 0; j < m; ++j) {
		// 		if (a[i] == b[j]) {
		// 			if (a[i] == a[i + 1]) {
		// 				sumt += a[i];
		// 			}
		// 			else if (b[j] == b[j + 1]) {
		// 				sumt += b[j];
		// 			}
		// 		}
		// 	}
		// }

		cout << sumt;
	}
}