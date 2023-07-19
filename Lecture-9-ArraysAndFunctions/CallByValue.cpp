#include <iostream>
using namespace std;

void update(int a) {

	a = a + 1;
	cout << "Inside update function : " << a << endl;
}


int main() {

	int a = 1;
	cout << "a before update: " << a << endl;

	update(a);

	cout << "a after update: " << a << endl;


	return 0;
}
















