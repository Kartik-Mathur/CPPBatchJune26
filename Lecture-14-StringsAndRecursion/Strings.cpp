#include <iostream>
using namespace std;

int main() {

	// char a[] = "Hello World";
	// cout << a << endl;
	// a = "World";

	string s;
	// cin >> s;
	getline(cin, s, '$');

	cout << s << endl;

	/*
	// String Iteration
	string s = "Hello";
	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << "-";
	}
	*/

	/*
	// Insertion in string --> push_back, pop_back
	string s;

	s.push_back('H');
	s.push_back('e');
	s.push_back('l');
	s.push_back('l');
	s.push_back('o');

	cout << s << endl;

	s.pop_back();
	cout << s << endl;
	*/


	/*
	// String Comparison
	string x = "hello";
	string y = "Hello";

	if (x == y) {
		cout << "Same hai\n";
	}
	else {
		cout << "Same nhi hai\n";
	}
	*/


	/* // APPEND
		string s = "Hello";
		string s1 = "World";

		cout << s << endl;
		// s = "World";
		// cout << s << endl;

		s = s + " " + s1;
		cout << s << endl;

	*/



	return 0;
}
















