#include <iostream>
using namespace std;

int main() {

	int a[100][100];
	int n, m, key, r, c;

	cout << "Enter row and col";
	cin >> n >> m;

	int num = 1;
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			a[r][c] = num;
			num++;
		}
	}

	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			cout <<  a[r][c] << " ";
		}

		cout << endl;
	}


	cout << "Enter key: ";
	cin >> key;
	for (r = 0; r < n; ++r)
	{
		for (c = 0; c < m; ++c)
		{
			if (a[r][c] == key) {
				cout << "Key found at index: " << r << "," << c << endl;
				break;
			}
		}
		if (c < m) {
			break;
		}
	}

	if (r == n) {
		cout << "Key Not Found\n";
	}


	return 0;
}
















