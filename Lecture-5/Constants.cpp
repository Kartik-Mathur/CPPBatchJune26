#include <iostream>
using namespace std;

int main() {
	// Make the bucket constant by adding const in front of it
	const float pi = 3.14;

	// House ka area
	// const int area; // Value nahi dene par, garbage store kr lega,
	// C++ wale kabhi bhi yeh allow nhi krte
	// Initialisation is mandatory for const buckets
	// area = 3000;


	int r = 1;

	// pi += 1; //Constant buckets cannot be updated

	cout << 2 * pi * r << endl;
	// cout << area << endl;


	return 0;
}
















