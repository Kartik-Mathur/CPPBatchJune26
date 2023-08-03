#include <iostream>
#include <algorithm> // for inbuilt sort function
using namespace std;

bool cmp(int a, int b) {
	return a < b;
}

int main() {
	int a[] = {1, 6, 0, -1, 2, 3};
	int n = sizeof(a) / sizeof(int);

	// sort(a, a + n);
	sort(a, a + n, cmp);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















