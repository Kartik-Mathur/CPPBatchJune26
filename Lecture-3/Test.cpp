#include <iostream>
using namespace std;

int main() {

	int no, i;
	cin >> no;

	int flag = 1;
	i = 2;
	while (i <= no - 1) {
		if (no % i == 0) {
			flag = 0;
		}

		i = i + 1;
	}

	if (flag == 1) {
		cout << "Prime";
	}
	else {
		cout << "Not Prime";
	}

	return 0;
}
















