#include <iostream>
using namespace std;

int add(int x, int y) {
	int sum = x + y;
	return sum;
}

int main() {

	int a = 10, b = 20;

	int c = add(a, b);

	cout << "Sum: " << c << endl;

	if (c % 2 == 0) {
		cout << "Inka sum even hai\n" ;
	}
	else {
		cout << "Inka sum odd hai\n";
	}

	return 0;
}
















