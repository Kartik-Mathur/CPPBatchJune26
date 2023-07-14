#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int cnt = 1;
	int evn = 0, odd = 0;
	while (n != 0) {
		int ld = n % 10;
		// cout << "CNT:" << cnt << " ld : " << ld << endl;
		if (cnt % 2 == 0) {
			evn += ld;
		}
		else {
			odd += ld;
		}

		cnt++;
		n /= 10;
	}

	cout << odd << endl << evn << endl;


	return 0;
}
















