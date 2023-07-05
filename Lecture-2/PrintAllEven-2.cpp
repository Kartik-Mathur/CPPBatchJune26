#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {

		if (i % 2 == 0) { // Print only if i%2 == 0, Even hai
			// Otherwise kch mat karo
			cout << i << " ";
		}

		i = i + 1;
	}

	cout << endl;


	return 0;
}
















