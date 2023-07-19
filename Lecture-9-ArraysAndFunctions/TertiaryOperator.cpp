#include <iostream>
using namespace std;

int main() {

	int n = 2;

	(n % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";

	// We can assign values too!!
	bool ans = (n % 2 == 0) ? true : false;

	if (ans) {
		cout << "Even hai\n";
	}
	else {
		cout << "Odd hai\n";
	}


	return 0;
}
















