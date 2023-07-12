#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n; // n = 10;

	int i = 1;
	while (i <= n) {

		cout << i << " ";

		if (i == 5) {
			continue;
		}

		i++;
	}


	return 0;
}
















