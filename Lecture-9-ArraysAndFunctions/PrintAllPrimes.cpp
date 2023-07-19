#include <iostream>
using namespace std;

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

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (checkPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;

	printAllPrimes(n);


	return 0;
}



