#include <iostream>
using namespace std;

int main() {

	string s = "abcdef";
	// int i = 5;
	// cout << s.substr(0, i) + s.substr(i + 1) << endl;
	for (int i = 0; i < s.size(); ++i)
	{
		cout << s[i] << ", Remaining string: " << s.substr(0, i) + s.substr(i + 1) << endl;
	}

	return 0;
}
















