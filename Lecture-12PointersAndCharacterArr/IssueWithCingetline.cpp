#include <iostream>
using namespace std;

int main() {

	char a[100];

	int x;
	cin >> x;

	// integer ke baad, aaj se abhi se kabhi bhi agar white space wali
	// string ko read kia, toh integer ke baad wale character ko
	// ignore krna padega
	cin.get(); // Read krlo, store mat kro, ignore hi ho jaega

	cin.getline(a, 100);
	cout << x << endl;
	cout << a << endl;

	return 0;
}
















