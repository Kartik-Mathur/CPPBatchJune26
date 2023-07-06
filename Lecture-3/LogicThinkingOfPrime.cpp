#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int i = 2;
	while (i <= n) {

		// i ko Print krna hai only if i is Prime
		// i should not be divisible by [2,i-1]
		// Check given i is Prime or not
		flag = 1; // Maan lo current number i is Prime
		j = 2;
		while (j <= i - 1) {
			if (i % j == 0) {
				flag = 0;// Iska mtlb i Prime Nahi hai, flag ko 0 kardo
			}

			j = j + 1;
		}

		if (flag == 1) {
			cout << i << " ";
		}

		i = i + 1;
	}

	return 0;
}
















