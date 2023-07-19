#include <iostream>
using namespace std;

void update(int &x) {

	x = x + 1;

}


int main() {

	int a = 1;
	cout << "a before update: " << a << endl;

	update(a);

	cout << "a after update: " << a << endl;


	return 0;
}















