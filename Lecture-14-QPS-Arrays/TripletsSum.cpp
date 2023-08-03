#include <iostream>
using namespace std;

int main() {

	int a[] = { -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 24};

	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n - 2; ++i)
	{
		for (int j = i + 1; j < n - 1; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				if (a[i] + a[j] + a[k] == 0) {
					cout << a[i] << ", " << a[j] << ", " << a[k] << endl;
				}
			}
		}
	}

	return 0;
}
















