#include <iostream>
using namespace std;

int main() {

	int a = 10;
	cout << "&a: " << &a << endl;
	cout << "&a+1: " << &a + 1 << endl;

	int *ap = &a;

	cout << "ap: " << ap << endl;
	cout << "ap+1: " << ap + 1 << endl;

	// Dereference Operator
	cout << "*ap: " << *ap << endl;
	cout << "*(&a): " << *(&a) << endl;



	return 0;
}
















