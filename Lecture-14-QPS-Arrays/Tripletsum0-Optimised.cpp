#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int a[] = { -1, 1, 0, 2, 4, -2, -2};
	int n = sizeof(a) / sizeof(int);

	sort(a, a + n);

	for (int i = 0; i < n - 2; ++i)
	{

		if (i > 0 and a[i] == a[i - 1]) {
			continue;
		}

		int j = i + 1;
		int k = n - 1;
		while (j < k) {
			if (a[i] + a[j] + a[k] < 0) {
				j++;
			}
			else if (a[i] + a[j] + a[k] > 0) {
				k--;
			}
			else {
				cout << a[i] << ", " << a[j] << ", " << a[k]  << endl;
				j++;
				k--;
				while (j < k and a[j] == a[j - 1]) {
					j++;
				}

				while (k > j and a[k] == a[k + 1]) {
					k--;
				}

			}
		}
	}


	/*
		for (int i = 0; i < n - 2; ++i)
		{
			int j = i + 1;
			int k = n - 1;

			while ( (i > 0) and (i < n - 2) and (a[i] == a[i - 1])) {
				i++;
			}

			while (j < k) {
				if (a[i] + a[j] + a[k] == 0) {
					cout << a[i] << ", " << a[j] << ", " << a[k]  << endl;
					j++;
					k--;
					while (j < k and a[j] == a[j - 1]) {
						j++;
					}

					while (k > j and a[k] == a[k + 1]) {
						k--;
					}
				}
				else {
					if (a[i] + a[j] + a[k] < 0) {
						j++;
					}
					else {
						k--;
					}
				}
			}
		}
	*/
	return 0;
}
















