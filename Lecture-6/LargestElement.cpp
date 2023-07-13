#include <iostream>
#include <climits>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int lar = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (lar < a[i]) {
			lar = a[i];
		}
	}

	cout << lar << endl;


	return 0;
}






