#include <iostream>
using namespace std;

int main() {

	int a = 10;
	float f = 10.11;
	double d = 1.11;

	int arr[] = {1, 2, 3, 4};

	cout << "&a: " << &a << endl;
	cout << "&f: " << &f << endl;
	cout << "&d: " << &d << endl;

	cout << "arr: " << arr << endl;
	cout << "&arr[0]: " << &arr[0] << endl;

	char ch = 'A';
	cout << &ch << endl;

	return 0;
}
















