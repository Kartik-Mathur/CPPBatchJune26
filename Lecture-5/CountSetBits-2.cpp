#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int cnt = 0;
	while (n > 0) {
		int bit_val = (n & 1);
		cnt += bit_val;
		n = n >> 1; // n>>=1;
	}

	cout << "Set Bits: " << cnt << endl;

	return 0;
}

