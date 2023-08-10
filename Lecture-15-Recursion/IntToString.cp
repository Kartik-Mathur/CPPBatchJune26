#include <iostream>
using namespace std;

string a[] = {
	"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};

void intToString(int n) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	int ld = n % 10;
	intToString(n / 10);
	cout << a[ld] << " ";
}

int main() {

	// cout << a[3] << endl;
	intToString(2048);


	return 0;
}
















