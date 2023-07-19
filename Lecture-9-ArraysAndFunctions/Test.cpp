#include <iostream>
using namespace std;

int add(int x, int y) {
	int sum = x + y;
	return sum;

}
int main() {
	int a = 10;
	int b = 20;
	int c = add(a, b);
	cout << c;
	(c % 2 == 0) ? cout << "even" : cout << "odd";
	return 0;

}