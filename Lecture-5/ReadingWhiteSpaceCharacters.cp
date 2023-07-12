#include <iostream>
using namespace std;

int main() {

	// TO take white space characters input,
	// use: ch = cin.get();
	// instead of cin>>ch;

	char ch;
	int cnt = 0;

	ch = cin.get();
	while (ch != '\n') {
		cnt ++;

		ch = cin.get();
	}

	cout << "Number of characters: " << cnt << endl;

	return 0;
}

