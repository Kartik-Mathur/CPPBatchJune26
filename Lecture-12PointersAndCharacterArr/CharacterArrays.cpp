#include <iostream>
using namespace std;

int main() {

	char a[100] = "Welcome";
	// char a[] = {'c', 'e', 'l', 'c', 'o', 'u', 't' , '\0'};
	// char b[] = {'W', 'e', 'l', 'c', 'o', 'm', 'e' , '\0'};

	cout << a << endl;

	for (int i = 0; a[i] != '\0' ; ++i)
	{
		cout << a[i] << "-";
	}
	cout << endl;

	// cout << b << endl;

	return 0;
}
















