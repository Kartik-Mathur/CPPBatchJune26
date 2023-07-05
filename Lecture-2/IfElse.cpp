#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	if (n == 0) {
		cout << "Kya Tapleek hai aapko\n";
	}
	else if (n > 0) {
		cout << "+ve Number\n";
	}
	else {
		cout << "-ve Number\n";
	}


	return 0;
}
