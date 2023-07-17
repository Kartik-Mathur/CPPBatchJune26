#include <iostream>
using namespace std;

int main() {

	int a[] = {4, 1, 3, 2, 0, -1, 8, 9, 20, 11, 3, 9, 3, 7, 3, 8};
	int n = sizeof(a) / sizeof(int);
	/*
	Approach: 1
		for (int j = 1; j <= n - 1; ++j)
		{
			int handPickedCard = a[j];
			int pos = j - 1;
			while (pos >= 0 and handPickedCard < a[pos]) {
				a[pos + 1] = a[pos];
				pos--;
			}

			a[pos + 1] = handPickedCard;
		}

	*/
	// Approach - 2: Insertion Sort
	for (int j = 1; j <= n - 1; ++j)
	{
		int handPickedCard = a[j];
		int pos = j - 1;
		while (pos >= 0) {
			if (handPickedCard < a[pos]) {
				a[pos + 1] = a[pos];
			}
			else {
				break;
			}

			pos--;
		}

		a[pos + 1] = handPickedCard;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}
















