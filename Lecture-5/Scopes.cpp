#include <iostream>
using namespace std;

int a = -100;

int main() {

	cout << a << endl;

	int a = 1;
	int b = 20;

	if (b > 0) {
		int a = 100;
		int x = 200;

		cout << a << endl;
		// :: --> Scope Resolution Operator
		cout << "Global a: " << ::a << endl;
	}

	cout << a << endl;
	cout << b << endl;
	// cout << x << endl;


	return 0;
}






