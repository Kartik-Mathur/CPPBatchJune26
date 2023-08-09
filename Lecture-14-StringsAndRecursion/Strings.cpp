#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// To create a string
	// char a[6] = "Hello";
	string s = "Hello";
	s = "Learning Strings!";

	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << "-";
	}
	cout << endl;

	// Concatenate
	s = "Hello";
	string x = s + "World";

	cout << x << endl;
	cout << s << endl;

	// Insertion using push_back
	string y;
	// We can insert characters one by one: push_back
	y.push_back('H');
	y.push_back('e');
	y.push_back('r');
	y.push_back('a');
	cout << y << endl;
	cout << y.size() << endl;

	// Whitespace characters input
	string z;
	// getline(cin,string_name,delimiter);// by default
	// delimiter is '\n'
	getline(cin, z, '$'); // To take white characters input

	cout << z << endl;



	return 0;
}
















