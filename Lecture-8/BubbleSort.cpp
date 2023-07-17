#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n - 1; ++i)
	{
		int cnt = 0;
		for (int j = 0 ; j <= n - 2 - i ; ++j) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				cnt ++;
			}
		}

		if (cnt == 0) {
			break;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}
















