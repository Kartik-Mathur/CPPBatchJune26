#include <iostream>
using namespace std;

int main() {
	int n, i, flag, j;
	cin >> n;

	for (i = 2 ; i <= n ; i++) {
		// Agar i is Prime tabhi print krna
		flag = 1;
		for (j = 2 ; j <= i - 1 ; ++j) {
			if (i % j == 0) {
				flag = 0;
			}
		}

		if (flag == 1) { // flag agar 1 hi hai toh prime hai
			cout << i << " ";
		}
	}

	cout << endl;


	return 0;
}



