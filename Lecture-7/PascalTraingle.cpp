#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int row = 0; row < n; ++row)
	{
		int pt = 1;

		cout << pt << " ";
		for (int j = 1; j <= row; ++j)
		{
			int ct = pt * (row - j + 1) / j;

			cout << ct << " ";
			pt = ct;
		}

		cout << endl;
	}

	return 0;
}
















