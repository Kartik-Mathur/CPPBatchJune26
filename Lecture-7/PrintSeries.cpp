#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;

	int xCnt = 0;

	int i = 1;

	while (1) {
		int x = 3 * i + 2;
		if (x % n2 != 0) {
			cout << x << endl;
			xCnt++;

			if (xCnt == n1) {
				break;
			}
		}

		i++;
	}

	return 0;
}