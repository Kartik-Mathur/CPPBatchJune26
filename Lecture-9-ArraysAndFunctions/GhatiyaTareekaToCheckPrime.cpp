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
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int n, i;
	n = 10;
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

	n = 37;
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

	return 0;
}
















