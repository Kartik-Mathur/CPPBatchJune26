#include <iostream>
using namespace std;

int main() {
	int i;
	char ch = 'A';


	for (i = 0; i < 6; ++i)
	{
		cout << ch << " ";
		ch ++;
	}
	ch --; // F-->E
	// cout << endl << "Outside loop ch: " << ch << endl;
	for (i = 0; i < 6; ++i)
	{
		cout << ch << " ";
		ch --;
	}

	cout << endl;

	return 0;
}
















