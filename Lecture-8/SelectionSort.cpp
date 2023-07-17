#include <iostream>
using namespace std;

int main() {

	int a[] = {6, 0, 1, 5, 4, 3, 2};
	int n = sizeof(a) / sizeof(int);

	for (int pos = 0; pos < n - 1; ++pos)
	{
		int min = pos;
		for (int j = pos + 1; j < n; ++j)
		{
			if (a[j] < a[min]) {
				min = j;
			}
		}
		swap(a[pos], a[min]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}


	return 0;
}
















