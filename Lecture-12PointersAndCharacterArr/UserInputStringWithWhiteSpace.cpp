#include <iostream>
using namespace std;

int main() {

	char a[1000];

	// cin.get() : Characters ko read krta hai

	// cin.getline(array_name, number_of_characters_toInput, delimiter);
	// Whitespace ke saath string ko read krta hai
	// by default delimiter is '\n'
	cin.getline(a, 1000, '$');

	cout << a << endl;


	return 0;
}
















