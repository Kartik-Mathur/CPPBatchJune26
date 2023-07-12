#include <iostream>
using namespace std;

int main() {

	int a = 0;
	int b = 1;
	if (++a || ++b) {
		++a;
	}
	else {
		++b;
	}


	// if (++a and ++b) {
	// 	++a;
	// }
	// else {
	// 	++b;
	// }

	// if (a++ and ++b) {
	// 	++a;
	// }
	// else {
	// 	++b;
	// }

	cout << a << endl;
	cout << b << endl;

	return 0;
}

















