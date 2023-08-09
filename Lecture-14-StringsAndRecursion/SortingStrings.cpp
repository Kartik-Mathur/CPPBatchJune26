#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool cmp(string &x, string &y) {
	// cout << "Comparing: " << x << " and " << y << endl;
	if (x.size() == y.size()) {
		return x > y;
	}
	return x.size() < y.size();
}

int main() {

	// Sort the strings: in the following way
	// 1. Smaller length string should come first
	// 2. If two strings have same length then they should be sorted
	// in descending order.
	// Example:
	// hello, world, axe, uid, cat, dog, play, it
	// Output:
	// it
	// uid
	// dog
	// cat
	// axe
	// play
	// world
	// hello

	string s[] = {
		"hello", "world", "axe", "uid", "cat", "dog", "play", "it"
	};
	int n = 8;
	sort(s, s + n, cmp);
	for (int i = 0; i < n ; ++i)
	{
		cout << s[i] << endl;
	}


	/*
		string s[] = {
			"Hello",
			"World",
			"Echo",
			"Coding",
			"book"
		};

		int n = 5;

		sort(s, s + n, cmp);

		for (int i = 0; i < n; ++i)
		{
			cout << s[i] << endl;
		}
	*/



	return 0;
}
















