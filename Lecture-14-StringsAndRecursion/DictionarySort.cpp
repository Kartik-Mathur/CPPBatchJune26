#include <iostream>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
	return a > b;
}

int main() {

	string s[] = {
		"Hello",
		"World",
		"Coding",
		"Blocks",
		"Strings"
	};

	int n = 5;

	sort(s, s + n, comp);
	for (int i = 0; i < n; ++i)
	{
		cout << s[i] << endl;
	}



	/*
		int a[] = {4, 2, 1, 3, 5};
		int n = sizeof(a) / sizeof(int);

		sort(a, a + n, comp);

		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
	*/

	return 0;
}
















