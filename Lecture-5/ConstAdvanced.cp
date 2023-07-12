#include <iostream>
using namespace std;

int main() {

	int x;
	cin >> x;

	// Allowed
	const int area = x;

	// Not allowed👇🏻
	// const int area;
	// cin>>area;

	cout << area << endl;

	return 0;
}
















