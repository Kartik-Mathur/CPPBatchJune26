#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	if (n >= 1) {
		cout << 1 << endl;
	}

	for (int row = 2; row <= n; ++row)
	{
		for (int i = 1; i <= row; ++i)
		{
			if (i == 1 || i == row) {
				cout << row - 1;
			}
			else {
				cout << 0  ;
			}
		}

		cout << endl;
	}

	return 0;
}
















