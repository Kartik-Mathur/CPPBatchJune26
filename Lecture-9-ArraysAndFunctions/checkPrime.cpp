#include <iostream>
using namespace std;

void printPrimeorNot(int n) {
	int i;
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			break;
		}
	}

	if (i == n) {
		cout << "Prime!\n";
	}
	else {
		cout << "Not Prime!\n";
	}
}


bool checkPrime(int n) {
	int i;
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			break;
		}
	}

	if (i == n) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int n, i;
	// cin >> n;
	printPrimeorNot(10);
	printPrimeorNot(37);
	printPrimeorNot(57);
	printPrimeorNot(79);

	bool ans = checkPrime(50);
	// if number is prime then add a and b
	// else subtract a and b
	int a = 10, b = 20;
	if (ans) {
		cout << a + b << endl;
	}
	else {
		cout << a - b << endl;
	}

	return 0;
}
















