#include <iostream>
using namespace std;

int main() {

	int a[][4] = {
		{1, 2, 3, 4},
		{3, 9, 15, 19},
		{10, 12, 17, 20},
		{16, 18, 22, 25}
	};

	int n = 4, m = 4;

	int i = 0, j = m - 1, flag = 1, key = 160;
	while (i<n and j >= 0) {
		if (a[i][j] == key) {
			cout << "Found at: " << i << ", " << j << endl;
			flag = 0;
			break;
		}
		if (a[i][j] < key) {
			i++;
		}
		else {
			j--;
		}
	}

	if (flag == 1) {
		cout << "Not Found\n";
	}


	return 0;
}
















