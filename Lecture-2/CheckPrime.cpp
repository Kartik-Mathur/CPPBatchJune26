#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	if (n == 1) {
		cout << "Hoshiyaari Nhi 1 daal kar\n";
		return 0; // end
	}

	int i = 2;
	while (i <= n - 1) {

		if (n % i == 0) {
			cout << "Not Prime\n";
			return 0; // end
		}


		i = i + 1;
	}

	cout << "Prime\n";

	return 0;
}
















