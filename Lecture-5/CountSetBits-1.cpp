#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int cnt = 0;
	while (n > 0) {
		int rem = n % 2;
		cnt += rem;
		n /= 2;
	}

	cout << "Set Bits: " << cnt << endl;


	return 0;
}
















