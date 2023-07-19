#include <iostream>
using namespace std;

int main() {

	// We can apply it on characters and integers
	char ch;
	cin >> ch;

	switch (ch) {
	case 'n':
	case 'N':
		cout << "North\n";
		break;
	case 'e':
	case 'E':
		cout << "East\n";
		break;
	case 's':
	case 'S':
		cout << "South\n";
		break;
	case 'w':
	case 'W':
		cout << "West\n";
		break;
	default:
		cout << "Kaha jaakar maanega\n";
	}

	return 0;
}



