#include <iostream>
using namespace std;

int main() {

	char ch;
	int cnt = 0;

	cin >> ch;
	while (ch != '$') {
		cnt ++;


		cin >> ch;
	}

	cout << "Number of characters: " << cnt << endl;

	return 0;
}

