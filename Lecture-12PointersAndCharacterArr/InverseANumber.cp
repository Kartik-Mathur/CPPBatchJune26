#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n = 32145;
	// cin >> n;

	int x = 0;
	int pos = 1;

	while (n > 0) {
		int ld = n % 10;
		int mul = 1;
		for (int i = 0; i < ld - 1; ++i)
		{
			mul *= 10;
		}
		x += pos * mul;

		n /= 10;
		pos++;
	}

	cout << x << endl;


	return 0;
}
















